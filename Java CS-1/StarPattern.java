// 9. Print a Star Pattern //
import java.util.Scanner;

public class StarPattern {
    public static void main(String[] args) {
        int N;

        Scanner sc = new Scanner(System.in);
        System.out.print(" Enter the input: ");
        N = sc.nextInt();

        for(int i = 0; i <= N; i++ ) {
        for(int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println(" ");
        }
        sc.close();
    }
}