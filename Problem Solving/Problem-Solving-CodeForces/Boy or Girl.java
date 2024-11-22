import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String word = scanner.nextLine();

        word = word.toLowerCase();


        char[] uniqueLetters = new char[26];
        int uniqueCount = 0;


        for (int i = 0; i < word.length(); i++) {
            char letter = word.charAt(i);


            if (letter >= 'a' && letter <= 'z') {
                boolean isUnique = true;


                for (int j = 0; j < uniqueCount; j++) {
                    if (uniqueLetters[j] == letter) {
                        isUnique = false;
                        break;
                    }
                }


                if (isUnique) {
                    uniqueLetters[uniqueCount] = letter;
                    uniqueCount++;
                }
            }
        }

        if (uniqueCount % 2 == 0) {
            System.out.println("CHAT WITH HER!");
        } else {
            System.out.println("IGNORE HIM!");
        }

    }
}
