/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        sort(nums.begin(),nums.end());
        ListNode* extra = new ListNode();
        extra->next = head;
        ListNode* curr = head, *last = extra;
        while(curr){
            if(lower_bound(nums.begin(),nums.end(),curr->val) == nums.end()){
                last->next = curr;
                last = curr;
            }
            curr = curr->next;
        }
        return extra->next;
    }
};