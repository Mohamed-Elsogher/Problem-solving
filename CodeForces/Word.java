import java.util.Locale;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int Ccount =0 ;
        int Scount = 0 ;
        for (int i =0 ; i< str.length() ; i++){
            if (str.charAt(i) == str.toUpperCase().charAt(i)){
                Ccount++;
            }
            else if (str.charAt(i) == str.toLowerCase().charAt(i)){
                Scount++;
            }

        }
        if (Ccount > Scount){
            System.out.println(str.toUpperCase());
        }
        else System.out.println(str.toLowerCase());

    }
}
