import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int Limak = scanner.nextInt();
        int Bob = scanner.nextInt();
        int count = 0;
        while (Limak <= Bob) {
            Limak *= 3;
            Bob *= 2;
            count++;
        }
        System.out.println(count);
    }
}
