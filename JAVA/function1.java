import java.util.Scanner;

public class function1 {
    public static void main(String a[]) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter  two numbers: ");
        int num1 = s.nextInt();
        int num2 = s.nextInt();
        int result = sum(num1, num2);
        System.out.println("Result: " + result);
        s.close();
    }

    static int sum(int a, int b) {
        int s = a + b;
        return s;
    }

}
