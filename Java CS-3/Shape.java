// 8. Shape Hierarchy with Overloaded Constructors and Methods //
abstract class Shape {
    abstract double area();
    abstract double perimeter();

    boolean compareArea(Shape s) {
        return area() > s.area();
    }

    boolean compareArea(double a) {
        return area() > a;
    }
}

class Circle extends Shape {
    double radius;

    Circle() { radius = 1; }
    Circle(double r) { radius = r; }

    double area() { return 3.14 * radius * radius; }
    double perimeter() { return 2 * 3.14 * radius; }
}

class Rectangle extends Shape {
    double length, breadth;

    Rectangle() { length = 1; breadth = 1; }
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    double area() { return length * breadth; }
    double perimeter() { return 2 * (length + breadth); }
}

class Triangle extends Shape {
    double base, height, side1, side2, side3;

    Triangle() { base = 3; height = 4; side1 = 3; side2 = 4; side3 = 5; }

    Triangle(double b, double h, double a, double c, double d) {
        base = b;
        height = h;
        side1 = a;
        side2 = c;
        side3 = d;
    }

    double area() { return 0.5 * base * height; }
    double perimeter() { return side1+ side2 + side3; }
}

class ShapeMain {
    public static void main(String[] args) {

        Shape[] s = {
            new Circle(5),
            new Rectangle(4, 6),
            new Triangle(3, 4, 3, 4, 5)
        };

        for (Shape x : s) {
            System.out.println("Area: " + x.area());
            System.out.println("Perimeter: " + x.perimeter());
        }

        for (int i = 0; i < s.length; i++) {
            for (int j = i + 1; j < s.length; j++) {
                if (s[i].area() < s[j].area()) {
                    Shape temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }

        System.out.println("Descending Order:");
        for (Shape x : s)
            System.out.println(x.getClass().getSimpleName() + ": " + x.area());

        System.out.println("Compare Shapes: " + s[0].compareArea(s[1]));
        System.out.println("Compare Numeric Area: " + s[0].compareArea(50));
    }
}
