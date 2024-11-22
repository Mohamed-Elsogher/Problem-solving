import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
 
        Scanner scanner = new Scanner(System.in);
        String Sc = scanner.nextLine().toLowerCase();
        StringBuilder result = new StringBuilder();
        char[] ch = Sc.toCharArray();
        for (int i = 0; i < ch.length; i++) {
            if (ch[i] != 'a' && ch[i] != 'o' && ch[i] != 'y' && ch[i] != 'e' && ch[i] != 'i' && ch[i] != 'u') {
                result.append(".").append(ch[i]);
            }
        }
        System.out.println(result);
    }
}
