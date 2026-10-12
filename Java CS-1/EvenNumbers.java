// 2. Print Even Numbers up to N //
import java.util.Scanner;


public class EvenNumbers {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the input: ");
        int N = sc.nextInt();

        for(int i = 1;i <= N; i++ ) {
            if( i % 2 == 0) {
            System.out.print( i + " ");
            }
        }

        sc.close();
    }
}
