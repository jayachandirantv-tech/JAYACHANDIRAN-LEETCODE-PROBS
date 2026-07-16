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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* temp=head;
        int count=0;
        while(temp!=nullptr)
        {
            temp=temp->next;
            count++;
        }
        if(count==n)
        {
            return head->next;
        }
        int mov=0;
        while(curr!=nullptr && mov<(count-n))
        {
           prev=curr;
           curr=curr->next;
           mov++;
        }
        prev->next=curr->next;

        return head;
    }
};