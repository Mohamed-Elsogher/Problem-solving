import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
 
        Scanner in = new Scanner(System.in);
 
        int n = in.nextInt();
        int k = in.nextInt();
 
        int[] scores = new int[n];
 
        for (int i = 0; i < n; i++) {
            scores[i] = in.nextInt();
        }
 
        int rank = scores[k - 1];
 
        int count = 0;
 
        for (int i = 0; i < n; i++) {
            if (scores[i] >= rank && scores[i] > 0) {
                count++;
            }
        }
 
        System.out.println(count);
    }
}
