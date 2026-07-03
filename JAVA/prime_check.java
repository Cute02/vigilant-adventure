import java.util.Scanner;

public class prime_check {
    public static void main(String a[]) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the number to check: ");
        int isPrime = 0;
        int num = s.nextInt();
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 1;
                break;
            }

        }
        if (isPrime == 0) {
            System.out.println("Entered number is prime");
        } else {
            System.out.println("Entered number is not prime");
        }
        s.close();

    }
}
