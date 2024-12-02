import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
       int k = sc.nextInt();
       int n = sc.nextInt();
       int w = sc.nextInt();
       int amount  =0;
       for (int i = 1 ; i<=w ;i++){
           amount += i*k;
       }
      if (n > amount){
          System.out.println(0);
       }
     else System.out.println(amount-n);
    }
}
