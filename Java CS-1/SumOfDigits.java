// 7. Find the Sum of Digits of a Number //
import java.util.Scanner;


public class SumOfDigits {
    public static void main(String[] args) {
        int N;
        int sum = 0;
        int original;

        Scanner sc = new Scanner(System.in);
        System.out.print(" Enter the input: ");
        N = sc.nextInt();
        original = N;

        while(original!= 0) {
            int rem = original % 10;
            sum += rem;
            original /= 10;
        }
        
        System.out.print(" Sum: " + sum);

        sc.close();
    }
}