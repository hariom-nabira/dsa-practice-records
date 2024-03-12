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

// hint + discussion + solution dekh ke kiya
// some nice linked list edge cases
// revisit to study

    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int,ListNode*> mp;
        int sum=0;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        for(ListNode* current=dummy;current!=NULL;current = current->next){
            sum += current->val;
            if(mp.count(sum)){
                ListNode* temp = mp[sum]->next;
                int p = sum + temp->val;
                while(p!=sum){
                    mp.erase(p);
                    temp = temp->next;
                    p += temp->val;
                }
                mp[sum]->next = current->next;
            }else{
                mp[sum] = current;
            }
        }
        return dummy->next;
    }
};