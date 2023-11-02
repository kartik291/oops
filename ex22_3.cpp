#include <iostream>

// Abstract class with pure virtual functions
class Shape {
public:
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
};

// Concrete classes that inherit from the abstract class
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea()  {
        return 3.14159 * radius * radius;
    }

    double calculatePerimeter()  {
        return 2 * 3.14159 * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double calculateArea()  {
        return width * height;
    }

    double calculatePerimeter()  {
        return 2 * (width + height);
    }
};

int main() {
    Shape* circle = new Circle(5);
    Shape* rectangle = new Rectangle(4, 6);

    std::cout << "Circle Area: " << circle->calculateArea() << std::endl;
    std::cout << "Circle Perimeter: " << circle->calculatePerimeter() << std::endl;

    std::cout << "Rectangle Area: " << rectangle->calculateArea() << std::endl;
    std::cout << "Rectangle Perimeter: " << rectangle->calculatePerimeter() << std::endl;

    delete circle;
    delete rectangle;

    return 0;
}
