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
    void reorderList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return;
        }
      int count=0;
      ListNode* temp=head;
      while(temp!=nullptr){
        count++;
        temp=temp->next;
      }
      int half=((count-1)/2);
      temp=head;
      int tc=1;
      while(temp!=nullptr && tc<=half){
           temp=temp->next;
           tc++;
      }
      ListNode* sh=temp->next;
      temp->next=nullptr;
      ListNode* prev=NULL;
      ListNode* curr=sh;
      ListNode* Next=curr->next;
      while(curr!=nullptr){
           curr->next=prev;
           prev=curr;
           curr=Next;
           if(curr!=nullptr){
              Next=curr->next;
           }
      }
      ListNode* hn=prev;
      ListNode* tf=head;
      ListNode* res=head;
      while(tf!=nullptr && hn!=nullptr){
           ListNode* hnNext=hn->next;
           tf=tf->next;
           res->next=hn;
           res=res->next;
           res->next=tf;
           res=res->next;
           hn=hnNext;
      }
    }
};