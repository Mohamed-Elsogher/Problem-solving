import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        scanner.nextLine(); 
        String s = scanner.nextLine();

        int mismatches = 0;

        for (int i = 0; i < n / 2; i++) {
            if (s.charAt(i) != s.charAt(n - i - 1)) {
                mismatches++;
            }
        }

        if (mismatches <= 1) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
