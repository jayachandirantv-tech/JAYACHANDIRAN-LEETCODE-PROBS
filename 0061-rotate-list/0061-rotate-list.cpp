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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==nullptr|| k==0){
            return head;
        }
        int N=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            N++;
            temp=temp->next;
        }
        k=k%N;
        if(k==0){
            return head;
        }
        temp=head;
        int counter=0;
        ListNode* prev=nullptr;
        while(temp!=nullptr && counter<N-k){
            prev=temp;
            temp=temp->next;
            counter++;
        }
        ListNode* shead=temp;
        prev->next=nullptr;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=head;
        return shead;
    }
};