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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        return helper(head,n);
    }
    ListNode* helper(ListNode* head, int &n) {
        if(head->next!=NULL)
            head->next = helper(head->next,n);
        n--;
        if(n==0) return head->next;
        else return head;        
    }
};

// Title: Remove Nth Node From End of List
