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
    bool hasCycle(ListNode *head) {
        ListNode* hare=head;
        ListNode* tort=head;
        while(1)
        {
            if(!hare || !hare->next)return false;
            hare=hare->next->next;
            tort=tort->next;
            if(hare==tort)return true;
        }
        return true;
    }
};