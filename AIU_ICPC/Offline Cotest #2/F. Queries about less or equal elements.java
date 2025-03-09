import java.util.*;
/* this question solved by java only in case time limit per test become 30s otherwise you will hava Time limit exceeded on test 20
  so don't try to solved it in codeforces problems set just solved in AIU ICPC Group
  */
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int m = scanner.nextInt(); 
        
        long[] a = new long[n];
        long[] b = new long[m];

        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextLong();
        }
        for (int i = 0; i < m; i++) {
            b[i] = scanner.nextLong();
        }

        Arrays.sort(a);  // In binary search Array must be sorted
        for (long bj : b) {
            int low = 0, high = n;
            // Directly Binary search to find upper bound
            while (low < high) {
                int mid = (low + high) / 2;
                
                if (a[mid] > bj) {
                    high = mid;
                } else {
                    low = mid + 1;
                }
            }

            System.out.print(low + " ");
        }
        System.out.println();
    }
}
