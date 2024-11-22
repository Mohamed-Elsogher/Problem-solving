import java.util.*;
 public class Main {
    public static void main(String[] args) {
 
        Scanner in = new Scanner(System.in);
 
        int n = in.nextInt();
 
        int count = 0 ;
 
        for (int i = 0 ; i < n ; i++){
 
            String bit = in.next();
            bit = bit.toLowerCase();
            if (bit.equals("++x")|| bit.equals("x++")){
                count++;
            }
            if (bit.equals("--x")|| bit.equals("x--")){
                count--;
            }
        }
        System.out.println(count);
 
    }
}
