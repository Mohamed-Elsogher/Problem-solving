import java.io.*;
import java.util.*;

public class B_Tournament {
    public static void main(String[] args) throws IOException {
        FastReader in = new FastReader();
        PrintWriter out = new PrintWriter(System.out);

        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            int j = in.nextInt();
            int k = in.nextInt();

            int max = 0, tVal = 0;
            for (int i = 0; i < n; i++) {
                int a = in.nextInt();
                if (a > max) max = a;
                if (i == j - 1) tVal = a;
            }

            out.println((k > 1 || tVal == max) ? "YES" : "NO");
        }

        out.flush();
    }

    // Fast Input Reader
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

        int nextInt() throws IOException { return Integer.parseInt(next()); }
        long nextLong() throws IOException { return Long.parseLong(next()); }
        double nextDouble() throws IOException { return Double.parseDouble(next()); }
        String nextLine() throws IOException { return br.readLine(); }
    }
}
