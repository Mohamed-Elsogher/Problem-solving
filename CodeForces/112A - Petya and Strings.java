import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
 
        String Fl = scanner.nextLine().toLowerCase();
        String Sl = scanner.nextLine().toLowerCase();
 
        int result = 0;
        for (int i = 0; i < Fl.length(); i++) {
            if (Fl.charAt(i) < Sl.charAt(i)) {
                result = -1;
                break;
            } else if (Fl.charAt(i) > Sl.charAt(i)) {
                result = 1;
                break;
            }
        }
 
        if (result == 0) {
            System.out.println(0);
        } else {
            System.out.println(result);
        }
    }
}
