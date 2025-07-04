import java.io.*;
import java.util.*;

public class A_Tavas_and_SaDDas {
    static long n;

    public static void main(String[] args) throws IOException {
        FastReader in = new FastReader();
        PrintWriter out = new PrintWriter(System.out);

        n = in.nextLong();
        out.println(isLucky(0, 0));

        out.flush();
    }

    public static long isLucky(long num, long i) {
        if (num > n) return -1;
        else if (num == n) return i;
        return Math.max(
                isLucky(num * 10 + 4, i * 2 + 1),
                isLucky(num * 10 + 7, i * 2 + 2)
        );
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

        int nextInt() throws IOException { return Integer.parseInt(next()); }
        long nextLong() throws IOException { return Long.parseLong(next()); }
        double nextDouble() throws IOException { return Double.parseDouble(next()); }
        String nextLine() throws IOException { return br.readLine(); }
    }
}
