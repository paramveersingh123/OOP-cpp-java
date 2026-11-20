// 6. Employee Payroll with Different Compensation Models // 
abstract class Employee {
    String name;

    public Employee(String n) {
        name = n;
    }

    public abstract double calculateSalary();
}

class PermanentEmployee extends Employee {
    double monthlySalary;

    public PermanentEmployee(String n, double m) {
        super(n);
        monthlySalary = m;
    }

    @Override
    public double calculateSalary() {
        return monthlySalary;
    }

    public double calculateSalary(double bonus) {
        return monthlySalary + bonus;
    }
}

class ContractEmployee extends Employee {
    double hourlyRate;
    int hoursWorked;

    public ContractEmployee(String n, double h, int hw) {
        super(n);
        hourlyRate = h;
        hoursWorked = hw;
    }

    @Override
    public double calculateSalary() {
        return hourlyRate * hoursWorked;
    }
}

class CommissionEmployee extends Employee {
    double baseSalary;
    double grossSales;
    double commissionRate;

    public CommissionEmployee(String n, double b, double g, double c) {
        super(n);
        baseSalary = b;
        grossSales = g;
        commissionRate = c;
    }

    @Override
    public double calculateSalary() {
        return baseSalary + (grossSales * commissionRate);
    }
}


 class EmpMain {
    public static void main(String[] args) {

        Employee emp1 = new PermanentEmployee("Aman", 50000);
        Employee emp2 = new ContractEmployee("Bhuvan", 400, 120);
        Employee emp3 = new CommissionEmployee("Ram", 20000, 15000, 0.10);

        System.out.println("--- Employee Payroll ---");
        
        System.out.println("Employee: " + emp1.name + " | Salary: Rs. " + emp1.calculateSalary());
        System.out.println("Employee: " + emp2.name + " | Salary: Rs. " + emp2.calculateSalary());
        System.out.println("Employee: " + emp3.name + " | Salary: Rs. " + emp3.calculateSalary());


        System.out.println("--- Testing Overloaded Method ---");
        PermanentEmployee p = new PermanentEmployee("Aman", 50000);
        System.out.println("Alice's Base Salary: Rs. " + p.calculateSalary());
        System.out.println("Alice's Salary with Rs. 7500 Bonus : Rs. " + p.calculateSalary(7500));
    }
}
