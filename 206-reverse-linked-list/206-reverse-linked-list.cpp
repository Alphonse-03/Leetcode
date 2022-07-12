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
    ListNode* ans=NULL;
    void helper(ListNode* head,ListNode* temp){
        if(!head){ans=temp;return;}
        helper(head->next,head);
        head->next=temp;
        
    }
    
    
    
    ListNode* reverseList(ListNode* head) {
         helper(head,NULL);
        return ans;
    }
};