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
    bool isPalindrome(ListNode* head) {
        return helper(head,&head);
    }
    bool helper(ListNode* head, ListNode** temp){
        bool flag = true;
        if(head->next!=NULL)
            flag = helper(head->next,temp);
        if(!flag) return flag;
        if(head->val== (*temp)->val){
            *temp = (*temp)->next;
            return true;
        }else
            return false;
    }
};