import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        int[] memo = new int[n + 1]; //  dp memoization
        Arrays.fill(memo, -1);

        memo[0] = 0; 

        for (int i = 0; i <= n; i++) {
            if (memo[i] == -1) continue; // If this length is not reachable skip it
            // Try cutting with each of the three lengths
            if (i + a <= n) memo[i + a] = Math.max(memo[i + a], memo[i] + 1);
            if (i + b <= n) memo[i + b] = Math.max(memo[i + b], memo[i] + 1);
            if (i + c <= n) memo[i + c] = Math.max(memo[i + c], memo[i] + 1);
        }

        System.out.println(memo[n]);
    }
}
