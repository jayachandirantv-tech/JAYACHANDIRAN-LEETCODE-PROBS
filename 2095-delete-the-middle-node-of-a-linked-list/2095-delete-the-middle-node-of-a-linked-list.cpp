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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        if(head->next==nullptr){
            return nullptr;
        }
        int count=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            temp=temp->next;
            count++;
        }
        int half=((count)/2);
        temp=head;
        int tc=1;
        ListNode* prev=nullptr;
        while(temp!=nullptr && tc<=half){
            prev=temp;
            temp=temp->next;
            tc++;
        }
        prev->next=temp->next;
        return head;

    }
};