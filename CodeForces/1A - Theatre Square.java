import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner scanner = new Scanner(System.in);
 
        long n = scanner.nextLong();
        long m = scanner.nextLong();
        long a = scanner.nextLong();
 
        if (a == 1) {
            System.out.println(n * m);
        } else {
            long Length = (n + a - 1) / a;
            long Width = (m + a - 1) / a;
            long tot = Length * Width;
            System.out.println(tot);
        }
    }
}
