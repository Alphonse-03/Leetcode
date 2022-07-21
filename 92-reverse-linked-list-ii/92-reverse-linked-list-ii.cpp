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
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        int x=l-1,y=r;
        if(r-l<1){return head;}
        ListNode *left,*right,*temp;
        temp=head;
        left=head;
        right=head;
        if(x!=0){
        while(--x)
        {
            temp=temp->next;
        }left=temp->next;}
        while(--y)
        {
            right=right->next;
        }
        
        if(r-l>=1)
        {
            ListNode *p1,*p2,*p3;
            p1=left;
            p2=p1->next;
            p3=p2->next;
            while(p2!=right)
            {
                p2->next=p1;
                p1=p2;
                p2=p3;
                p3=p3->next;         
            }
            p2->next=p1;
            temp->next=p2;
            left->next=p3;
            if(l==1){return p2;}
          //  if(p3!=NULL){}
        }
        return head;
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};