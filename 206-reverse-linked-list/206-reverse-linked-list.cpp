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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode* temp1=head;
        head=head->next;
       ListNode* temp2=head->next;
        temp1->next=NULL;
        while(temp2){  
            head->next=temp1;
            temp1=head;
            head=temp2;
            temp2=temp2->next;
        }
        head->next=temp1;
        return head;
    }
};