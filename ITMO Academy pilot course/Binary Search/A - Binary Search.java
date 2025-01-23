import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {

            Scanner input = new Scanner(System.in);
            int n = input.nextInt();
            int k = input.nextInt();

            int [] arr =new int [n];
            String [] ans = new String[k];

            for(int i = 0 ; i < n ; i++){
                    arr[i] = input.nextInt();
            }

            for(int i = 0 ; i < k ; i++){
                    int ki = input.nextInt();
                    int start = 0 ; int end = n-1;
                    boolean isFound = false;
                    while(start <= end){
                        int middle = (end+start)/2;
                        if(arr[middle] == ki){
                            ans[i] = "YES";
                            isFound = true;
                            break;
                        }
                        else if(arr[middle] < ki){
                            start = middle +1;
                        }
                        else
                            end = middle - 1;

                    }
                    if(!isFound){
                        ans[i] = "NO";
                    }
            }
            for(String s : ans){
                System.out.println(s);
            }
    }
}
