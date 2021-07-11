package treeDS;

public class SimpleBinaryTree {

	public static void main(String args[]) {

		Node root = new Node(1);
		root.left = new Node(2);
		root.right = new Node(3);
		/*
		 * 1 / \ 2 3
		 */
		root.left.left = new Node(4);
		root.left.right = new Node(5);
		/*
		 * 1 / \ 2 3 / \ 4 5
		 */
		root.right.left = new Node(6);
		root.right.right = new Node(7);
		/*
		 * 1 / \ 2 3 / \ / \ 4 5 6 7
		 */
	}
}

class Node {
	int data;
	Node left;
	Node right;

	public Node(int val) {
		data = val;
		left = right = null;
	}
}