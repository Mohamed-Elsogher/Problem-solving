import java.util.Scanner;
// Time Complexity -> O(N) 
public class Main {
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        int[] v = new int[n];
        
        for (int i = 0; i < n; i++) {
            v[i] = scanner.nextInt();
        }

        int left = 0, right = n - 1;
        int[] ans = new int[n];

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                ans[i] = v[left++]; // If 'i' is even, take an element from the start (move 'left' forward)
            } else {
                ans[i] = v[right--]; // // If 'i' is odd, take an element from the end (move 'right' backward)
            }
        }
      /*
        If i is even (0, 2, 4, ...) → Take an element from the left side.
        If i is odd (1, 3, 5, ...) → Take an element from the right side.
        The left++ and right-- ensure that after each selection, the pointers move inward.
      */
        
        /*
            Another solution :
               int left = 0, right = n - 1;
                while (left <= right) {
                    if (left == right) {
                        System.out.print(v[left]);
                    } else {
                        System.out.print(v[left] + " " + v[right] + " ");
                    }
                    left++;
                    right--;
            }
            System.out.println(); 
        }  
        */
        for (int i = 0; i < n; i++) {
            System.out.print(ans[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int tt = scanner.nextInt();
        
        while (tt-- > 0) {
            solve(scanner);
        }        
    }
}
