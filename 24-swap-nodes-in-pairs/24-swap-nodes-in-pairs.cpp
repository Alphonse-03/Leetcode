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
    ListNode* swapPairs(ListNode* head) {
        if(head ==NULL || head->next==NULL)return head;
        ListNode* temp=head;
        head=head->next;
        ListNode* f=head->next;
        head->next=temp;
        temp->next=NULL;
        ListNode* temp2;
        ListNode* prev=temp;
        while(f)
        {
            if(f->next==NULL)
            {
                prev->next=f;
                return head;
            }
            temp=f;
            temp2=temp->next;
            f=temp2->next;
            temp2->next=temp;
            temp->next=f;
            prev->next=temp2;
            prev=temp;
        }
        
        
        return head;
    }
};