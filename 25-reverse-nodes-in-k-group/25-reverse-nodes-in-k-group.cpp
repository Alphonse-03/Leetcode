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
    
    ListNode* reverse(ListNode* head,ListNode* end)
    {
        if(head==end)return head;
        ListNode *temp,*temp2,*temp3;
        temp=head;
        temp2=head->next;
        head->next=NULL;
        temp3=temp2->next;
        
        while(temp3!=end)
        {
            temp2->next=temp;
            temp=temp2;
            temp2=temp3;
            temp3=temp3->next;
        }
        temp2->next=temp;
        return temp2;
    }
    
    
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1)return head;
        ListNode* fans=NULL;
        ListNode* ans=NULL;
        while(head)
        {
            ListNode* start=head;
            int x=k;
            while(x-- && head)
            {
                head=head->next;
            }
            if(head==NULL && x!=-1)
            {
                while(ans->next)ans=ans->next;
                ans->next=start;
                return fans;
            }
            ListNode* end=head;
            if(fans==NULL){ans=reverse(start,end);fans=ans;}
            else {
                while(ans->next!=NULL)ans=ans->next;
                if(ans!=NULL)ans->next=reverse(start,end);
            }
        }
        
        
        return fans;
        
        
        
    }
};