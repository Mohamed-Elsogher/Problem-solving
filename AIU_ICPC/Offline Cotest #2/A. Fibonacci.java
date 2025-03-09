import java.util.*;
// In this question count start from 1 not from 0  
// Time Complexity: O(2^n)  -> N (1 ≤ N ≤ 30) so Will not have time limit but if N was bigger we will use dp memoization 
// Fibonacci -> 0 1 1 3 5 8 13 
/*
f{1} = 0  // index 1
 
f{2} = 1 // index 2 

f{3} = 1 // index 3 

f{4} = 2 // index 4 

f{5} = 3 // index 5
....... so on
Recursion:
F(n)
├── F(n-1)
│   ├── F(n-2)
│   │   ├── F(n-3)
│   │   │   ├── ...
│   │   │   └── ...
│   │   └── ...
│   └── ...
└── F(n-2)
    ├── F(n-3)
    │   ├── ...
    │   └── ...
    └── ...
*/
public class Main {
    public static long Fibonacci(long num) {
        if (num == 1) {
            return 0;
        } else if (num == 2) {
            return 1;
        } else {
            return Fibonacci(num - 1) + Fibonacci(num - 2);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long num = sc.nextLong();
        System.out.println(Fibonacci(num));
    }
}
