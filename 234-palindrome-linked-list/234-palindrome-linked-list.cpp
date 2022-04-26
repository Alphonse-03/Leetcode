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
    bool isPalindrome(ListNode* head) {
        int counter=1;
        ListNode* tail;
        tail=head;
        while(tail->next!=NULL)
        {
            counter++;
            tail=tail->next;
        }
        if(counter==1){return true;}
        if(counter<=3){
            if(tail->val==head->val)
            {return true;}
            else{return false;}
        }
        int mid;
        if(counter%2==0)
        { mid=(counter/2);}
        else
        {
            mid=(counter/2)+1;
        }
        ListNode* newHead;
        newHead=head;
        for(int i=1;i<mid;i++)
        {
            newHead=newHead->next;
        }
        if(counter-mid==1)
        {
            tail->next=newHead;
            newHead->next=NULL;
        }
        else
        {
            ListNode* p1,*p2,*p3;
            p1=newHead->next;
            p2=p1->next;
            p3=p2->next;
            p1->next=NULL;
            while(p3!=NULL)
            {
                p2->next=p1;
                p1=p2;
                p2=p3;
                p3=p3->next;
            }
            p2->next=p1;
            newHead->next=p2;
            newHead=p2;
        }
       
        while(newHead!=NULL)
        {
            if(head->val==newHead->val)
            {
                head=head->next;
                newHead=newHead->next;
            }
            else
            {
                return false;
            }
        }
        return true;
        
        
        
    }
};