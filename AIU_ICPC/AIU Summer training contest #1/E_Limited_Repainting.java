import java.io.*;
import java.util.*;

public class E_Limited_Repainting {
    public static void main(String[] args) throws IOException {
        FastReader in = new FastReader();
        PrintWriter out = new PrintWriter(System.out);

        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            int k = in.nextInt();
            String s = in.nextLine();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = in.nextInt();
            }

            int l = 0, r = (int) 1e9;
            int res = -1;

            while (l <= r) {
                int m = (l + r) / 2;
                if (check(n, k, s, a, m)) {
                    res = m;
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            }

            out.println(res);
        }

        out.flush();
    }

    public static boolean check(int n, int k, String s, int[] a, int d) {
        char last = 'R';
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > d) {
                if (s.charAt(i) == 'B' && last != 'B') {
                    cnt++;
                }
                last = s.charAt(i);
            }
        }

        return cnt <= k;
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

        String nextLine() throws IOException {
            return br.readLine();
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
    }
}
