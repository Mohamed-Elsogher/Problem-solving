import java.util.Scanner;

public class RamadanDates {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt(); 
        if (x % 2 == 1) {
            System.out.println("Ramadan Kareem!"); 
        } else{
            System.out.println(1); 
        }        
    }
}
