import java.util.Scanner;

public class IfCondition {
    public static void main(String a[]) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int num = s.nextInt();
        if (num < 0) {
            System.out.println("Entered number is negative");
        } else {
            System.out.println("Entered number is positive");
        }
        s.close();
    }

}
