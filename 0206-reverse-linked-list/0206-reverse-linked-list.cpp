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
    ListNode* reverseList(ListNode* head) {
       if(head==nullptr || head->next==nullptr)
       {
        return head;
       }

     ListNode* prev=NULL;
     ListNode* curr=head;
     ListNode*Next=curr->next;
     while(curr!=nullptr)
     {
        curr->next=prev;
        prev=curr;
        curr=Next;
        if(curr!=nullptr)
        Next=curr->next;
     }
     return prev; 
     
    }
};