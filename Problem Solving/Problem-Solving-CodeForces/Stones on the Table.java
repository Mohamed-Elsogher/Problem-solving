import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t =sc.nextInt();
        sc.nextLine();
        String str = sc.nextLine();
        char[]ch = str.toCharArray();
        char index = ch[0];
        int count = 0;
        for (int i = 1 ; i< ch.length; i++){
            if (index == ch[i]){
                count++;
            }
            else index = ch[i];
        }
        System.out.println(count);
 
    }
}
