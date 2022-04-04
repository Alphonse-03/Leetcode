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
    ListNode* swapNodes(ListNode* head, int k) {
        int len=0;
      //  return head;
        if(head==NULL || head->next==NULL){return head;}
        ListNode *temp;
        ListNode *lkk=head,*kk=head;
        temp=head;
        ListNode *w=NULL,*x=NULL,*y=NULL,*z;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
         if(len==2){
            lkk=head->next;
            head->next=NULL;
            lkk->next=head;
            return lkk;
        }
        if(k==1||k==len){
            lkk=head;
           
            while(--len)
            {
                y=lkk;
                lkk=lkk->next;
            }
            x=head->next;
            lkk->next=x;
            y->next=head;
            head->next=NULL;
            return lkk;
            
        }
        int lk=len-k+1;
      if(k>lk){swap(k,lk);}
       if(lk-k==1){
           while(--lk)
        {
            w=lkk;
            lkk=lkk->next;
        }
        while(--k)
        {
            x=kk;
            kk=kk->next;
        }
           y=lkk->next;
           x->next=lkk;
           kk->next=y;
           lkk->next=kk;
           return head;
       }
        if(lk==k){return head;}
        while(--lk)
        {
            w=lkk;
            lkk=lkk->next;
        }
        while(--k)
        {
            x=kk;
            kk=kk->next;
        }
        
        y=kk->next;
         z=lkk->next;
        kk->next=z;
        x->next=lkk;
        lkk->next=y;
        w->next=kk;
       
        return head;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};