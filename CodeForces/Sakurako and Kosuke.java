import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        String [] names = new String[t];

        for(int i =0 ; i < t ; i ++){
            int n = scanner.nextInt();
            if (n%2==0){
                names[i]="Sakurako";
        }
            else names[i]="Kosuke";
        }
        for ( String name : names){
            System.out.println(name+" ");
        }

    }
}
