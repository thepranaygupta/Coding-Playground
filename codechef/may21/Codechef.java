import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
 		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
 		int T = Integer.parseInt(br.readLine());
		
		while(T-->0) {

 		    int N = Integer.parseInt(br.readLine());
		   long mod = 1000000007; 
		   long temp = 1;
		long x = 2;
		long ans = 1;
		long e =  N-1; 
		if(e == 0) {
		    System.out.println(1);
		} else {
		    while( e > 0) {
		        if(e % 2 == 1)
		        temp = (x * temp )% mod;
		        x = ((x % mod) * (x% mod))% mod;
		        e= e/2;
		    }
		 		   System.out.println(temp);
		}
		}	 
	}
}