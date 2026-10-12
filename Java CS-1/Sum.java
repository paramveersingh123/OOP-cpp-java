// 3. Calculate the Sum of First N Natural Numbers // 
import java.util.Scanner;


public class Sum {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the input: ");
        int N = sc.nextInt();
        int sum = 0;

        for(int i = 1;i <= N; i++ ) {
            sum+=i;
        }

        System.out.print(" Sum of first " + N + " Natural numbers is " + sum);

        sc.close();
    }
}
