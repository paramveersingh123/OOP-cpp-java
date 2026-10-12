// 6. Check if a Number is Prime //
import java.util.Scanner;

public class PrimeNumber {
    public static void main(String[] args) {
        int N; 
        boolean is_prime = true;

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the input: ");
        N = sc.nextInt();

        if (N <= 1) {
            is_prime = false;
        } 
        else {
            for (int i = 2; i < N; i++) {
                if (N % i == 0) {
                    is_prime = false;
                    break;
                }
            }
        }
        if(is_prime) {
        System.out.println(N + " is a prime number. ");
        }
        else {
            System.out.print(N + " is not a prime number. ");
        }

        sc.close();
    }
}
