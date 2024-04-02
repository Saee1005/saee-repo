import java.util.Scanner;


public class ASCII {

    public static void main (String[] args) {

    Scanner scanner = new Scanner(System.in);
    System.out.print("enter your character");
    char character = scanner.next().charAt(0);
    int asciivalue = (int) character;
    System.out.print("ASCII value of " + character + "is:" +asciivalue);
    scanner.close();


    }
}
