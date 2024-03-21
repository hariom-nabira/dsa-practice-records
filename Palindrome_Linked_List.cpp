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
        if(head==NULL) return true;
        if(helper(head->next,temp) && head->val == (*temp)->val){
            *temp = (*temp)->next;
            return true;
        }else
            return false;
    }
};
// Title: Palindrome Linked List
