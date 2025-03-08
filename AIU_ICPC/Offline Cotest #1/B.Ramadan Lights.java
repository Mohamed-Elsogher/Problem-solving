/*
This Question needs to count '1' in string s

 There are many ways:
    - Replace all zeros with "" and return length will return count '1'
    - we could iterate for each char in string and count 1
*/
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        System.out.println(s.replaceAll("0", "").length()); // Count '1'
    }
}
