public class oops1 {
    public static void main(String s[]) {
        Sample s1 = new Sample();// object 1
        Sample s2 = new Sample();// object 2
        s1.a = 20; // Both objects belongs to same class
        s2.a = 100;
        s1.b = 50;
        s2.b = 40;
        System.out.println("S1 a " + s1.a + " S2 a " + s2.a);
        System.out.println("S1 b " + s1.b + " S2 b " + s2.b);
    }
}
