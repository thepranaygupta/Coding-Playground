// TODO: Check if a String is palindrome or not using recursion
package recursion;

public class Palindrome_String {

	public static void main(String[] args) {
		String str = "MADAM";
		if (isPalin(str, 0)) {
			System.out.println(str + " is Palindrome");
		} else {
			System.out.println(str + " is not Palindrome");
		}
	}

	static boolean isPalin(String str, int i) {
		if (i >= str.length() / 2)
			return true;
		if (str.charAt(i) == str.charAt(str.length() - i - 1))
			return (isPalin(str, i + 1));
		return false;
	}
}
