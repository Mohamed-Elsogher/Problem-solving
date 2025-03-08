// simple Recursion if the number even add 1 or make var count++ and return ( n / 2 ) else number is odd return ( 3 * n ) + 1
import java.util.*;
public class Main{
    public static void main(String[] args) {
      
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(sequence(n));
      
    }
    public static int sequence(int n){
      
        if( n == 1 ) return 1;
          
        else if ( n % 2 == 0 ) return 1 + sequence(n/2); // we could use bit manipulation to make it faster -> ( n & 1 ) -> number is odd / ( ~ ( n & 1 ) ) -> even
          
        else return 1 + sequence( ( 3 * n ) + 1 );
    }
}
