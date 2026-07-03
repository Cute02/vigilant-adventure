import java.util.Scanner;

public class for_loop {
    public static void main(String a[]) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int sum = 0;
        int num = s.nextInt();
        for (int i = 0; i <= num; i++) {
            sum += i;
        }
        System.out.println("Sum is " + sum);
        s.close();
    }

}
