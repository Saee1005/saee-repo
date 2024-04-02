import java.util.Scanner;

public class MultiplicationCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter two numbers: ");
        float num1 = scanner.nextFloat();
        float num2 = scanner.nextFloat();

        float multiplication = num1 * num2;

        System.out.println("Your answer: " + multiplication);

        scanner.close();
    }
}
