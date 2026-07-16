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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1 == nullptr) return list2;
    if(list2 == nullptr) return list1;
       ListNode* head=list1;
       while(head->next!=nullptr)
       {
        head=head->next;
       }
       head->next=list2;
       ListNode* dummy=new ListNode(0);
       dummy->next=list1;
       ListNode* srt=list1;
       ListNode* curr=srt->next;
       while(curr)
       {
        if(srt->val<=curr->val)
        {
            srt=curr;
            curr=srt->next;
        }
        else
        {
        srt->next=curr->next;
         ListNode* prev=dummy;
         ListNode* Next=prev->next;
         while(Next!=nullptr && curr->val>Next->val)
         {
            prev=Next;
            Next=prev->next;
         }
         prev->next=curr;
         curr->next=Next;
         curr=srt->next;
        }
       }
       return dummy->next;
    }
};