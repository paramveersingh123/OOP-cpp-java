// 1. Multilevel Inheritance with Constructor Chaining  //
class Person {
    String name;
    int age;

    Person(String n, int a) {
        name = n;
        age = a;

        System.out.println("Person constructor called.");
    }

    void PersonDetails() {
        System.out.println("Name: " + name + " || " + "Age: " + age);
    }
}

class Employee extends Person {
    String dept;
    int salary;

    Employee(String n , int a , String d , int s) {
        super(n,a);
        dept = d;
        salary = s;

    System.out.println("Employee constructor called.");

    }

    void EmployeeDetails() {
        PersonDetails();
        System.out.println("Department: " + dept + " || " + "Salary: " + salary);
    }
}

class Developer extends Employee{
    String ProgLang;
    String ProjName;

    Developer(String n , int a , String d , int s, String p, String pn) {
        super(n,a,d,s);
        ProgLang = p;
        ProjName = pn;

        System.out.println("Developer constructor called.");
    }

    
    void DeveloperDetails() {
        EmployeeDetails();
        System.out.println("Programming Language: " + ProgLang + " || " + "Project Name: " + ProjName);
    }
}

class PersonMain {
    public static void main(String[] args) {

        Developer d = new Developer("ROHIT", 26,"IT", 50000, "JAVA", "GAME DEVELOPMENT");
        d.DeveloperDetails();
    }
}