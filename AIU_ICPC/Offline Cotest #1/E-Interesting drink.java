// Binary search 
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        Arrays.sort(arr);

        int q = sc.nextInt();

        while (q-- > 0) {
            int a = sc.nextInt();
            int start = 0, end = n - 1, ans = 0;

            while (start <= end) {
                int mid = start + (end - start) / 2; // or mid = (start + end)/2

                if (arr[mid] <= a) {
                    ans = mid + 1;
                    start = mid + 1;
                } else {
                    end = mid - 1; 
                }
            }

            System.out.println(ans);
        }

    }
}
