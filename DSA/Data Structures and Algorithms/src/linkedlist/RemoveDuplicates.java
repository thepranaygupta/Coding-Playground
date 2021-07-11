/** Given a sorted linked list, delete all duplicates such that each element appear only once.
 * https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list/
 **/

/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
package linkedlist;

public class RemoveDuplicates {
    public ListNode deleteDuplicates(ListNode A) {
        ListNode curr=A;
        while(curr.next!=null && curr!=null) {
            if(curr.val==curr.next.val)
                curr.next=curr.next.next;
            else
                curr=curr.next;
        }
        return A;
    }
}
