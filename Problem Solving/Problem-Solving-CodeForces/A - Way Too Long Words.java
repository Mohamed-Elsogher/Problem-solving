import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int nu = scanner.nextInt();
        String[] inputs = new String[nu];
 
        for (int i = 0; i < nu; i++) {
            inputs[i] = scanner.next();
        }
 
        for (int i = 0; i < nu; i++) {
            String W = inputs[i];
            int l = W.length();
 
            if (l <= 10) {
                System.out.println(W);
            } else {
                char F = W.charAt(0);
                char L = W.charAt(l - 1);
                int c = l - 2;
                System.out.println(F + "" + c + "" + L);
            }
        }
    }
}
