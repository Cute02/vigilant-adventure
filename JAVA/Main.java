import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("Enter two numbers");
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        int c = a + b;
        System.out.println("Result: " + c);
        s.close();
    }
}
