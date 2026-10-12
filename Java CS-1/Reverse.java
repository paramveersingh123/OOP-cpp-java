// 4. Reverse a Number //
import java.util.Scanner;


public class Reverse {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print(" Enter the input: ");
        int N = sc.nextInt();
        int rev_num = 0;

        while(N!= 0) {
            int last = N % 10;
            rev_num = rev_num*10 + last;
            N = N/10;
        }
        
        System.out.print(" Output: " + rev_num);

        sc.close();
    }
}