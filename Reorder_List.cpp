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
    void reorderList(ListNode* head) {
        ListNode *slow=head, *fast=head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* rev = reverseList(slow);
        ListNode *curr = head, *next, *revNext;
        while(rev->next){
            next = curr->next;
            curr->next = rev;
            revNext = rev->next;
            rev->next = next;
            rev = revNext;
            curr = next;
        }
    }
    ListNode* reverseList(ListNode* head){
        ListNode *prev=NULL, *next;
        while(head){
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};