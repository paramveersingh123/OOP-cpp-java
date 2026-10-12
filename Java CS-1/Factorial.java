// 5. Find Factorial of a Number //
import java.util.Scanner;


public class Factorial {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print(" Enter the input: ");
        int N = sc.nextInt();
        int factorial = 1;

    
            for( int i = 1; i <= N; i++) {
                factorial*=i;
            }
        
        if(N > 0) {
        System.out.print(" Output: " + factorial);
        }

        else {
            System.out.print(" Factorial of a negative number can't be calculated. ");
        }

        sc.close();
    }
}