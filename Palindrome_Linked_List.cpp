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
        ListNode *slow=head, *fast=head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        // if(fast)
        //     slow = slow->next;
        ListNode *rev = reverseList(slow);
        while(head && rev){
            if(head->val != rev->val)
                return false;
            head = head->next;
            rev = rev->next;
        }
        return true;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL, *next;
        while(head){
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};