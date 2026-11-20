// 4. Overloading vs Overriding  //
class A {
    void show(Object x) {
        System.out.println("A-Object");
    }
}

class B extends A {
    @Override
    void show(Object x) {
        System.out.println("B-Object");
    }

    void show(String x) {
        System.out.println("B-String");
    }
}

public class Main {
    public static void main(String[] args) {
    
        A a = new B(); 

        String strVar = "Hello";
        a.show(strVar);

        Object objVar = "Hello Object";
        a.show(objVar);

        a.show(null);
    }
}
