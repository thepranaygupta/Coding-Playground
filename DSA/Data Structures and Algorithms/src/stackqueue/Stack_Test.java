package stackqueue;

import java.util.Stack;

public class Stack_Test {

	public Stack_Test() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		Stack st = new Stack<Character>();
		StringBuilder ans = new StringBuilder(S.length());
		for (int i = 0; i < S.length(); i++) {
			if (!st.isEmpty() && (char) st.peek() == S.charAt(i)) {
				st.pop();
				ans.deleteCharAt(ans.length() - 1);
			} else {
				st.add(S.charAt(i));
				ans.append(S.charAt(i));
			}
		}
		return ans.toString();

	}

}
