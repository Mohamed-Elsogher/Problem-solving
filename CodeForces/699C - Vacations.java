import java.util.*;

public class Main {
    static final int INF = (int) 1e9;
    static int n;
    static int[] a;
    static int[][] dp;

    static int solve(int i, int prev) {
        if (i == n) return 0;  

        if (dp[i][prev] != -1) return dp[i][prev]; 

        int rest = 1 + solve(i + 1, 0); 
        int contest = INF, gym = INF;

        if (a[i] == 1 || a[i] == 3) {  
            if (prev != 1) contest = solve(i + 1, 1);
        }
        if (a[i] == 2 || a[i] == 3) { 
            if (prev != 2) gym = solve(i + 1, 2);
        }

        return dp[i][prev] = Math.min(rest, Math.min(contest, gym));
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        a = new int[n];
        dp = new int[n][3];

        for (int i = 0; i < n; i++) a[i] = scanner.nextInt();
        for (int[] row : dp) Arrays.fill(row, -1); 

        System.out.println(solve(0, 0));
    }
}
