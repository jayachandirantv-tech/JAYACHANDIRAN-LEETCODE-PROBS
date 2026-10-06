/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        if(head==null || head.next==null) return head;
        ListNode curr=new ListNode();
        curr.next=null;
        curr.val=head.val;
        ListNode temp=head.next;
        while(temp!=null){
             ListNode join=new ListNode();
             join.val=temp.val;
             join.next=curr;
             curr=join;
             temp=temp.next;
        }
        return curr;
    }
}