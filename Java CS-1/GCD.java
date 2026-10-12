// 10.  Find the Greatest Common Divisor (GCD) using the Euclidean Method. //
import java.util.Scanner;

public class GCD {
    public static void main(String[] args) {
        int n1,n2;

        Scanner sc = new Scanner(System.in);
        System.out.print(" Enter two Numbers: ");
        n1 = sc.nextInt();
        n2 = sc.nextInt();

        while(n2 != 0) {
            int temp = n2;
            n2 = n1 % n2;
            n1 = temp;
        }

        System.out.print(" GCD of given number is: " + n1);

        sc.close();

    }
    
}
