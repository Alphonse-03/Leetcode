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
    int siz(ListNode* l1)
    {
        int s=0;
        while(l1)
        {
            s++;
            l1=l1->next;
        }
        return s;
    }
    
    ListNode* add(ListNode* l1,ListNode* l2)
    {
        int carry=0;
        ListNode* ans=l1;
        ListNode* temp=NULL;
        while(l2)
        {
            int x=carry+l1->val+l2->val;
            carry=x/10;
            l1->val=x%10;
            l2=l2->next;
            temp=l1;
            l1=l1->next;
        }
            while(l1 && carry)
            {
                int x=l1->val+carry;
                carry=x/10;
                l1->val=x%10;
                temp=l1;
                l1=l1->next;
            }
          if(carry!=0)
          {
              temp->next=new ListNode(carry);
          }
        return ans;
    }
    
    
    
    
    
    
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int s1=0;
        int s2=0;
        s1=siz(l1);
        s2=siz(l2);
        if(s1>s2) return add(l1,l2);
        return add(l2,l1);
    }
};