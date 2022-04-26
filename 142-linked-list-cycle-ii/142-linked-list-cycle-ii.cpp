/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* hare=head;
        ListNode* tort=head;
        while(1)
        {
            if(hare==NULL || hare->next==NULL)return NULL;
            hare=hare->next->next;
            tort=tort->next;
            if(hare==tort)break;
        }
        hare=head;
        while(hare!=tort)
        {
            hare=hare->next;
            tort=tort->next;
        }
        return hare;
    }
};