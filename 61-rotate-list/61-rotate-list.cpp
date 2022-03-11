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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return head;
        if(!head->next)return head;
        int size=0;
        ListNode* temp=head;
        while(temp)
        {
            size++;
            temp=temp->next;
        }
        k=k%size;
        if(k==0 || k==size)return head;
        temp=head;
        k=size-k;
        
        ListNode* pt;
        while(k--)
        {
            pt=temp;
            temp=temp->next;
        }
        pt->next=NULL;
        ListNode* ans=temp;
        while(temp->next)temp=temp->next;
        temp->next=head;
        return ans;
        
        
    }
};