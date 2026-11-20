// 2. Method Overloading with Type Promotion and Ambiguity //
class Calculator {

    public void calculate(int a , int b) {
        int sum = a+b;
        System.out.println("Sum of two integers: " + a +" and " + b + " is " + sum);
    }

    public void calculate(double a , double b) {
        double sum = a+b;
        System.out.println("Sum of two double numbers: " + a +" and " + b + " is " + sum);
    }

    public void calculate(long a , long b) {
        long sum = a+b;
        System.out.println("Sum of two long numbers: " + a +" and " + b + " is " + sum);
    }

    public void calculate(int a , double b) {
        double sum = a+b;
        System.out.println("Sum of a integer: " + a +" and a double number: " + b + " is " + sum);
    }
    
}

class CalculatorMain {
    public static void main(String[] args) {

        Calculator c = new Calculator();

        c.calculate(10,20);
        c.calculate(20L,33L);
        c.calculate(12.222,13.444);
        c.calculate(10,12.333);
        
    }
}
