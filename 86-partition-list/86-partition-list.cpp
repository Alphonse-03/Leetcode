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
    ListNode* partition(ListNode* head, int x) {
        ListNode *smallhead=NULL,*largehead=NULL,*small,*large,*temp,*temp2;
        temp=head;
        while(temp!=NULL)
        {
            if(temp->val<x)
            {
                if(smallhead==NULL)
                {
                    smallhead=temp;
                    small=temp;
                }
                else{
                    small->next=temp;
                    small=temp;
                }
            }
            else if(temp->val>=x)
            {
                if(largehead==NULL)
                {
                    largehead=temp;
                    large=temp;
                }
                else{
                    large->next=temp;
                    large=temp;
                }
            }
            temp=temp->next;
        }
        if(smallhead==NULL){return largehead;}
        if(largehead==NULL){return head;}
       small->next=largehead;
        large->next=NULL;
        return smallhead;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};