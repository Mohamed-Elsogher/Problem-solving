import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int [] arr =new int [n];

        for(int i = 0 ; i < n ; i++){
            arr[i] = input.nextInt();
        }

        Arrays.sort(arr);

        int k = input.nextInt();
        int [] ans = new int[k];

        for(int i = 0 ; i < k ; i++) {
            int a = input.nextInt();
            int b = input.nextInt();

            int l = left(arr,a);
            int r = right(arr,b);
            ans[i] = r-l;
        }

        for(int i : ans){
            System.out.print(i+" ");
        }
    }
    static int left(int []arr , int k ){
        int start = 0 ;
        int end = arr.length;
        while(start < end){
            int mid = start +(end - start) /2;
            if(arr[mid] >= k){
                end = mid;
            }else start = mid+1;
        }
        return start;
    }
    static int right(int []arr , int k ){
        int start = 0 ;
        int end = arr.length;
        while(start < end){
            int mid = start +(end - start) /2;
            if(arr[mid] > k){
                end = mid;
            }else start = mid+1;
        }
        return start;
    }
}
