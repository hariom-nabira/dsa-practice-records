// chapa for streak


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
        if(!head || !(head->next)||!(head->next->next))return;
        //Though code looks complex but it is optimal
        //I have reused the slow and fast variables(Donot get confused)
        ListNode * slow=head;
        ListNode* prev=NULL;
        ListNode * fast=head;
        ListNode* temp1=NULL;
        while(fast && fast->next){
            fast=fast->next->next;
            ListNode * temp=slow->next;
            prev=slow;
            slow=temp;
        }
        if(fast){
            temp1=slow->next;
            slow->next=NULL;
        }
        else{
            temp1=slow;
            prev->next=NULL;
        }
        prev=NULL;
        while(temp1){
            ListNode * temp0=temp1->next;
            temp1->next=prev;
            prev=temp1;
            temp1=temp0;
        }
        temp1=prev;
        slow=head;
        while(temp1&&slow){
            fast=slow->next;
            slow->next=temp1;
            temp1=temp1->next;
            slow->next->next=fast;
            slow=slow->next->next;
        }
    }
};
// Title: Reorder List
