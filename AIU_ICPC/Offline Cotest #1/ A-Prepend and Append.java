/*
   We remove the first and last character if they are different.  
   Repeat this process until we stop at one of these cases:  
   - If the remaining characters are the same, print the length.  
   - If the string is empty, print 0.  
   
   Two ways to implement this:  
   1. Use two pointers (one at the start, one at the end) and move them inward.  
   2. Use a deque to remove from both ends directly.  
   
   Time Complexity: O(n).  
*/
import java.util.*;

public class Main {
    static void solve(Scanner sc) {
        int n = sc.nextInt();
        String s = sc.next();
        int l = 0, r = n - 1, ans = n; 

        while (l < r && s.charAt(l) != s.charAt(r)) {
            l++;
            r--;
            ans -= 2;
        }
        System.out.println(ans);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tt = sc.nextInt();
        while (tt-- > 0) {
            solve(sc);
        }
    }
}
