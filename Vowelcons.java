import java.util.Scanner;

public class Vowelcons {
    public static boolean isVowel(char ch) {
        ch = Character.toLowerCase(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a character: ");
        char character = scanner.next().charAt(0);

        if (Character.isLetter(character)) {
            if (isVowel(character)) {
                System.out.println(character + " is a vowel.");
            } else {
                System.out.println(character + " is a consonant.");
            }
        } else {
            System.out.println("Invalid input. Please enter an alphabet.");
        }

        scanner.close();
    }
}

