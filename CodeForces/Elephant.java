import java.util.Scanner;
 
public class Main{
    public static void main(String[] args) {
 
        Scanner scanner = new Scanner(System.in);
 
        int nu = scanner.nextInt();
        int st = 0 ;
        if( nu <= 5){
            st = 1 ;
            System.out.println(st);
        }
        else {
            while (nu > 0 ){
                nu -= 5 ;
                st ++ ;
            }
            System.out.println(st);
        }
 
 
        }
    }
 
