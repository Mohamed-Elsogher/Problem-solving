import java.util.Scanner;
import java.util.Arrays;
/*
1) take the input String
2) replace every + by empty ""
3) make the string array of char
4) sort the arrays
5) make string builder to add number sorted and with + after every number expect the last number
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        char[] numbers = s.replace("+", "").toCharArray();
        Arrays.sort(numbers);
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < numbers.length; i++) {
            result.append(numbers[i]);
            if (i < numbers.length - 1) {
                result.append("+");
            }
        }
        System.out.println(result.toString());
    }
}
