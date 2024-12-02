import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int p = 0;

        for (int i = 0; i < n; i++) {
            String eventType = scanner.next();
            int v = scanner.nextInt();

            if (eventType.equals("P")) {
                p += v;
            } else if (eventType.equals("B")) {
                if (p < v) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
                p = Math.max(0, p - v);
            }
        }
    }
}
