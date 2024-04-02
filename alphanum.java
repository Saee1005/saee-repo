import java.util.Scanner;

public class alphanum {
    public static void checkCharacterType(char character){
        if(Character.isLetter(character)){
            System.out.println("Alphabet");

        }else if(Character.isDigit(character)){
            System.out.println("Numerical");
        } else{
            System.out.println("Speacial character");

        }
    }
    public static void main(String[] args ){

        Scanner scanner = new Scanner(System.in);
        System.out.print("enter a character:");
        char character = scanner.next().charAt(0);
        checkCharacterType(character);
        scanner.close();
    }
}
