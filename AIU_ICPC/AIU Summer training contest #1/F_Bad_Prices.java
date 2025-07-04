import java.io.*;
import java.util.*;

public class F_Bad_Prices {
    public static void main(String[] args) throws IOException {
        FastReader scanner = new FastReader();
        PrintWriter out = new PrintWriter(System.out);

        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            int[] prices = new int[n];
            for (int i = 0; i < n; i++) {
                prices[i] = scanner.nextInt();
            }
            out.println(countBadPrices(prices));
        }

        out.flush();
    }

    private static int countBadPrices(int[] prices) {
        if (prices.length == 1) {
            return 0;
        }
        Stack<Integer> stack = new Stack<>();
        stack.push(prices[prices.length - 1]);
        int count = 0;
        for (int i = prices.length - 2; i >= 0; i--) {
            if (prices[i] > stack.peek()) {
                count++;
            } else {
                stack.push(prices[i]);
            }
        }
        return count;
    }

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() throws IOException {
            while (st == null || !st.hasMoreTokens())
                st = new StringTokenizer(br.readLine());
            return st.nextToken();
        }

        int nextInt() throws IOException {
            return Integer.parseInt(next());
        }

        long nextLong() throws IOException {
            return Long.parseLong(next());
        }

        double nextDouble() throws IOException {
            return Double.parseDouble(next());
        }

        String nextLine() throws IOException {
            return br.readLine();
        }
    }
}
