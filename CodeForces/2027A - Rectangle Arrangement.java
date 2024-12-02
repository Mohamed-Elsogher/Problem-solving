import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        int[] results = new int[t];

        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt();
            int maxWidth = 0;
            int maxHeight = 0;
            for (int j = 0; j < n; j++) {
                int w = scanner.nextInt();
                int h = scanner.nextInt();
                maxWidth = Math.max(maxWidth, w);
                maxHeight = Math.max(maxHeight, h);
            }
            results[i] = 2 * (maxWidth + maxHeight);
        }
        for (int result : results) {
            System.out.println(result);
        }
    }
}
