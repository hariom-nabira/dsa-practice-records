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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *temp = list1, *temp2;
        int i=0;
        while(i++ < a-1){
            temp = temp->next;
        }
        temp2 = temp->next;
        temp->next = list2;

        while(i++ <= b)
            temp2 = temp2->next;
            
        while(list2->next!=NULL)
            list2 = list2->next;
        list2->next = temp2;
        return list1;
    }
};
// Title: Merge In Between Linked Lists
