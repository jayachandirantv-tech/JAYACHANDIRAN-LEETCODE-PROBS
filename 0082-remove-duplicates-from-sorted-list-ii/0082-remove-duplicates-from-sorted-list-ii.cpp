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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
        {
            return head;
        }
        unordered_map<int,int>mp;
        ListNode* prev=head;
        ListNode* curr=head->next;
        while(curr)
        {
            if(prev->val==curr->val && curr!=nullptr)
            {
                mp[curr->val]++;
                prev->next=curr->next;
                curr=prev->next;
            }
            else
            {
                prev=curr;
                curr=prev->next;
            }
        }
    ListNode* dummy=new ListNode(0);
    prev=dummy;
    dummy->next=head;
    curr=head;
    while(curr)
    {
        if(mp.find(curr->val)!=mp.end())
        {
            prev->next=curr->next;
            curr=prev->next;
        }
        else{
        prev=curr;
        curr=curr->next;
    }
    }
    return dummy->next;
    }
};