import java.io.*;

class palinromeArray {
    static BufferedReader br=new BufferedReader (new InputStreamReader(System.in));
    public static void main(String[] args)throws IOException {
        int n;
        System.out.println("Enter the Size of Array: ");
        n= Integer.parseInt(br.readLine());
        int arr[]= new int[n];
        System.out.println("Enter the elements of Array: ");
        for(int i=0; i<n; i++) {
            arr[i]= Integer.parseInt(br.readLine());
        }
        if(isPalin(arr, 0, n-1))
            System.out.print("Palindrome");
        else
            System.out.print("Not Palindrome");
    }
    static boolean isPalin(int[] arr, int l, int r) {
        if(l >= r)
            return true;
        if(arr[l] != arr[r])
            return false;
        return  isPalin(arr, l+1, r-1);
    }
}