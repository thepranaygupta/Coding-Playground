/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 **/
package linkedlist;

public class removeNthNodefromEnd {

	public ListNode removeNthFromEnd(ListNode head, int n) {
		ListNode t = head;
		int size = 0;
		while (t != null) {
			size++;
			t = t.next;
		}
		if (n > size)
			n = size;
		ListNode start = new ListNode(0);
		start.next = head;
		ListNode fast = start;
		ListNode slow = start;
		if (n > size)
			n = size;
		for (int i = 1; i <= n; i++) {
			fast = fast.next;
		}
		while (fast.next != null) {
			fast = fast.next;
			slow = slow.next;
		}
		slow.next = slow.next.next;
		return start.next;
	}

}
