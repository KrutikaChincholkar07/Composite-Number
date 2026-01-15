import java.util.Scanner;

public class CompositeNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        if (num <= 1) {
            System.out.println("Not a composite number");
            return;
        }

        boolean composite = false;

        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                composite = true;
                break;
            }
        }

        if (composite)
            System.out.println(num + " is a Composite number");
        else
            System.out.println(num + " is NOT a Composite number");
    }
}
