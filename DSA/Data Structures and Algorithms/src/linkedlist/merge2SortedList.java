/**
* Definition for singly-linked list.
* class ListNode {
*     public int val;
*     public ListNode next;
*     ListNode(int x) { val = x; next = null; }
* }
**/
package linkedlist;

public class merge2SortedList {
	public ListNode mergeTwoLists(ListNode A, ListNode B) {
		ListNode temp = new ListNode(0);
		ListNode curr = temp;
		while (A != null && B != null) {
			if (A.val < B.val) {
				curr.next = A;
				A = A.next;
			} else {
				curr.next = B;
				B = B.next;
			}
			curr = curr.next;
		}
		if (A != null) {
			curr.next = A;
			A = A.next;
		}
		if (B != null) {
			curr.next = B;
			B = B.next;
		}
		return temp.next;

	}
}
