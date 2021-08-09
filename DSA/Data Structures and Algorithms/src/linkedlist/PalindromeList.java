package linkedlist;

class ListNode {
	public int val;
	public ListNode next;

	ListNode(int x) {
		val = x;
		next = null;
	}
}

public class PalindromeList {
	public int lPalin(ListNode head) {
		if (head == null || head.next == null)
			return 1;
		ListNode slow = head;
		ListNode fast = head;

		while (fast.next != null && fast.next.next != null) {
			slow = slow.next;
			fast = fast.next.next;
		}
		slow.next = reverseList(slow.next);
		slow = slow.next;

		while (slow != null) {
			if (head.val != slow.val)
				return 0;
			head = head.next;
			slow = slow.next;
		}
		return 1;
	}

	ListNode reverseList(ListNode head) {
		ListNode nhead = null;
		while (head != null) {
			ListNode next = head.next;
			head.next = nhead;
			nhead = head;
			head = next;
		}
		return nhead;
	}
}