/*
   - Compute the prefix sum array pref[] where pref[i] stores the sum of the first i elements.
   - Check if the total sum is divisible by 3. If not, output 0 as it's not possible to split into three equal parts.
   - Define firstPart = sum / 3 (each segment should sum to this value).
   - Define secondPart = 2 * firstPart (used to track valid partitions).
   - Iterate through the array:
     - If pref[i] == secondPart, add the count from dp[i-1] to the result.
     - If pref[i] == firstPart, store count in dp[i].
   - The final result is stored in res which represents the number of valid partitions.

   Complexity: O(n)
*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long[] pref = new long[n + 1];
        long[] dp = new long[n + 1];
        long sum = 0;

        for (int i = 1; i <= n; i++) {
            long a = sc.nextLong();
            sum += a;
            pref[i] = sum; // prefix summation of numbers
        }

        if (sum % 3 != 0) {
            System.out.println("0"); // It's not possible to split this into three equal parts
            return;
        }
        long firstPart = sum / 3; // The first segment holds the value of one-third of sum
        long secondPart = firstPart * 2; // The segment holding the sum of double of first segment
        // It is guaranteed that every segment of the three segments should hold sum equal to one-third of total sum (firstPart)
        long res = 0;

        for (int i = 1; i <= n - 1; i++) {
            if (pref[i] == secondPart) {
                res += dp[i - 1]; // If sum equals sum of the firstPart and secondPart, increase by count of previous valid segments
            }
            if (pref[i] == firstPart) {
                dp[i] = dp[i - 1] + 1; // Count how many times sum holds the same value as one-third of total sum
            } else {
                dp[i] = dp[i - 1];
            }
        }
        System.out.println(res);
    }
}
