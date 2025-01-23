import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();

        int [] arr =new int [n];
        int [] ans = new int[k];


        for(int i = 0 ; i < n ; i++){
            arr[i] = input.nextInt();
        }

        for(int i = 0 ; i < k ; i++){
            int res = n+1;
            int ki = input.nextInt();
            int start = 0 ; int end = n-1;
            while(start <= end){
                int middle = (end+start)/2;
                if(arr[middle] >= ki){
                    res = middle+1;
                    end = middle-1;
                }
                else
                    start = middle + 1;
            }
        ans[i] = res;
        }
        for(int s : ans){
            System.out.println(s);
        }
    }
}
