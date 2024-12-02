import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
 
 
 
        Scanner scanner = new Scanner(System.in);
        int nu = scanner.nextInt();
 
        int count  =0 ;
        int co = 0 ;
        int x = 0 ;
        while ( x < nu) {
       int a = scanner.nextInt();
       int b = scanner.nextInt();
       int c = scanner.nextInt();
       if (a+b+c >= 2){
           count++;
       }
       x++;
 
        }
 
        System.out.println(count);
 
 
 
    }
}
