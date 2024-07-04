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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* last = head;
        ListNode* curr = head->next;
        int currSum = 0;
        while(curr){
            if(curr->val==0){
                last->val = currSum;
                currSum=0;
                last->next = (curr->next) ? curr : nullptr;
                last = curr;
            }else{
                currSum += curr->val;
            }
            curr = curr->next;
        }
        return head;
    }
};
// Title: Merge Nodes in Between Zeros
