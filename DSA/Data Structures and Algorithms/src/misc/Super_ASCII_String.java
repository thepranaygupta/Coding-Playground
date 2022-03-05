/*
In the Dreamland country a string "S" is said to super ASCII string if and only if count of each character in the string is equal to its ASCII value.
Assume that in the Dreamland country ASCII code of 'a' is 1, 'b' is 2 ...'z' is 26.
Your task is to find out whether the given string is a super ASCII string or not.
Case1: 	Input: bba
		Output: YES, it is super ASCII string
Case2:  Input: ssba
		Output: No, it is not super ASCII string
*/

package misc;

import java.io.*;

public class Super_ASCII_String {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String s;
	    int i, j, flag = 1, fq = 1;
	    System.out.print("Enter a String : ");
	    s = br.readLine();
	    for (i = 0; i < s.length(); i++)
	    {
	        fq = 0;
	        for (j = 0; j < s.length(); j++)
	        {
	            if (s.charAt(i) == s.charAt(j))
	                fq++;
	        }
	        if (fq != ((int)(Character.toLowerCase(s.charAt(i))) - 96))
	        {
	            flag = 0;
	            break;
	        }
	    }
	    if (flag == 1)
	    	System.out.println("Super ASCII String");
	    else
	    	System.out.println("Not Super ASCII");
	}
}
