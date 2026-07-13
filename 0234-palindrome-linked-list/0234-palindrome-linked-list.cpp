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
        ListNode*temp=head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* prev=nullptr;
        ListNode* curr=slow;
        ListNode* Next=curr->next;
        while(curr!=nullptr)
        {
            curr->next=prev;
            prev=curr;
            curr=Next;
            if(curr!=nullptr)
            {
                Next=curr->next;
            }
        }
        while(head!=nullptr&& prev!=nullptr)
    {
        if(head->val!=prev->val)
        {
            return false;
        }
        head=head->next;
        prev=prev->next;
    }
    return true;
    }
};