interface Test {
    int square(int n);
}

class Arithmetic implements Test {

    public int square(int n) {
        return n * n;
    }
}

class Outer {

    public void display() {
        System.out.println("This is Outer class.");
    }

    class Inner {

        public void display() {
            System.out.println("This is Inner class.");
        }
    }
}

class Point {

    private int x;
    private int y;

    Point() {
        x = 0;
        y = 0;
    }

    Point(int a, int b) {
        x = a;
        y = b;
    }

    public void setX(int a) {
        x = a;
    }

    public void setY(int b) {
        y = b;
    }

    public void setXY(int a, int b) {
        x = a;
        y = b;
    }

    public void display() {
        System.out.println("X = " + x + " Y = " + y);
    }
}

class Box {

    double length;
    double breadth;

    Box(double l, double b) {
        length = l;
        breadth = b;
    }

    public double area() {
        return length * breadth;
    }
}

class Box3D extends Box {

    double height;

    Box3D(double l, double b, double h) {
        super(l, b);
        height = h;
    }

    public double volume() {
        return length * breadth * height;
    }
}

public class Main {

    public static void main(String[] args) {

        Arithmetic obj = new Arithmetic();
        System.out.println("Square = " + obj.square(5));

        Outer o = new Outer();
        o.display();

        Outer.Inner in = o.new Inner();
        in.display();

        Point p1 = new Point();
        p1.display();

        Point p2 = new Point(10, 20);
        p2.display();

        p2.setXY(30, 40);
        p2.display();

        Box b1 = new Box(10, 5);
        System.out.println("Area = " + b1.area());

        Box3D b2 = new Box3D(10, 5, 8);
        System.out.println("Area = " + b2.area());
        System.out.println("Volume = " + b2.volume());
    }
}