import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();

        System.out.println(countBinary(n, 1)); 
    }

    public static long countBinary(long n, long num) {
        if (num > n) return 0; 
      
        return 1 + countBinary(n, num * 10) + countBinary(n, num * 10 + 1);
        /*
           Example:
           n = 15
           Tree of valid numbers:
               (1)
              /   \
           (10)   (11)
          /   \
       (100)  (101)  <- These exceed 'n' (15), so they are ignored.
       
        Valid numbers: [1, 10, 11] → Answer: 3
        in this Pattern we count 1 , 10 , 11 ,101 , etc..(Binary)
        so After num * 10 we will saw Binary number because we added 0
        after num * 10 + 1 we will saw Binary number because we added 1
        */
    }
}
