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
        int n=0;
        ListNode* temp=head;
        while(temp){n++;temp=temp->next;}
        k=k%n;
        if(k==0)return head;
        ListNode* hare=head;
        ListNode* tort=head;
        while(k--)
        {
            hare=hare->next;
        }
        while(hare && hare->next)
        {
            hare=hare->next;
            tort=tort->next;
        }
        ListNode* p=tort->next;
        tort->next=NULL;
        hare->next=head;
        return p;
    }
};




