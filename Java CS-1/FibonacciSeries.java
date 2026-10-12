// 8. Fibonacci Series up to N Terms //
import java.util.Scanner;

public class FibonacciSeries {
    public static void main(String[] args) {
        int N;
        int a1 = 0;
        int a2 = 1;

        Scanner sc = new Scanner(System.in);
        System.out.print(" Enter the input: ");
        N = sc.nextInt();

        for(int i = 0; i < N; i++) {
            System.out.print(a1 + " ");

        int sum = a1+a2;
        a1 = a2;
        a2 = sum;
        }
    

    sc.close();
}

}

