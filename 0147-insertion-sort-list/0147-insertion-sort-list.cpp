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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* srt=head;
        ListNode* curr=srt->next;
        while(curr)
        {
            if(srt->val<curr->val)
            {
                srt=curr;
                curr=curr->next;
            }
            else
            {
                srt->next=curr->next;
                ListNode* prev=dummy;
                ListNode* Next=dummy->next;
                while(Next!=nullptr && curr->val>Next->val)
                {
                    prev=Next;
                    Next=Next->next;
                }
                prev->next=curr;
                curr->next=Next;
                curr=srt->next;//writtten in notes
            }
        }
        return dummy->next;
    }
};