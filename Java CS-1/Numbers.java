// 1. Print Numbers from 1 to N //
import java.util.Scanner;


public class Numbers {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the input: ");
        int N = sc.nextInt();

        for(int i = 1;i <= N; i++ ) {
            System.out.print( i + " ");
        }

        sc.close();
    }
}