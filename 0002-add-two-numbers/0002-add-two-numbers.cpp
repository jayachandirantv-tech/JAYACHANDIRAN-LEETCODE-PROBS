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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==nullptr && l2==nullptr)
        {
            return nullptr;
        }
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        int carry=0;
        bool t1=false,t2=false;
        ListNode* res=new ListNode();
        ListNode* tail=res;
       while(temp1!=nullptr ||temp2!=nullptr){
             if(temp1==nullptr){
                t1=true;
             }
             if(temp2==nullptr){
                t2=true;
             }
             int curr=0;
             if(t1){
                curr+=0;
             }
             else
             {
                curr+=temp1->val;
                temp1=temp1->next;
             }
             if(t2){
                curr+=0;
             }
             else
             {
                curr+=temp2->val;
                temp2=temp2->next;
             }
             carry+=curr;
             tail->val=carry%10;
             carry=carry/10;
             if(temp1!=nullptr || temp2!=nullptr || carry!=0){
                tail->next=new ListNode();
                tail=tail->next;
             }
       }
       if(carry>0)
       {
        tail->val=carry%10;
        carry=carry/10;
       }
       while(carry!=0){
        tail->next=new ListNode(carry%10);
        tail=tail->next;
        carry=carry/10;
       }
       return res;
    }
};