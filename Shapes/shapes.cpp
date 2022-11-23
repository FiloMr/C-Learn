#include <iostream>
using namespace std;

class Shapes
{
public:
    float width;
    string name;
    virtual void displayArea()
    {
        cout << "This shape does not have a defined formula" << endl;
    };
};

class Square : public Shapes
{
public:
    Square(float newHeight)
    {
        width = newHeight;
        name = "square";
    }
    float calculateArea()
    {
        return width * width;
    };
    void displayArea()
    {
        cout << "This "
             << name << " has an area of " << calculateArea() << endl;
    };
};

class Triangle : public Shapes
{
public:
    float height;
    Triangle(float newHeight, float newWidth)
    {
        height = newHeight;
        width = newWidth;
        name = "triangle";
    }
    float calculateArea()
    {
        return height * height * 0.5;
    };
    void displayArea()
    {
        cout << "This "
             << name << " has an area of " << calculateArea() << endl;
    };
};

class Rectangle : public Shapes
{
public:
    float height;
    Rectangle(float newHeight, float newWidth)
    {
        height = newHeight;
        width = newWidth;
        name = "rectangle";
    }
    float calculateArea()
    {
        return height * width;
    };
    void displayArea()
    {
        cout << "This "
             << name << " has an area of " << calculateArea() << endl;
    };
};

class Circle : public Shapes
{
public:
    Circle(float newWidth)
    {
        width = newWidth;
        name = "circle";
    }
    float calculateArea()
    {
        return 3.14 * (0.5 * width) * (0.5 * width);
    };
    void displayArea()
    {
        cout << "This "
             << name << " has an area of " << calculateArea() << endl;
    };
};

int main()
{
    Shapes *ShapesPointer;

    Square ShapeSquare(5.5);
    ShapesPointer = &ShapeSquare;
    ShapesPointer->displayArea();

    Triangle ShapeTriangle(5, 5);
    ShapesPointer = &ShapeTriangle;
    ShapesPointer->displayArea();

    Rectangle ShapeRectangle(5, 5);
    ShapesPointer = &ShapeRectangle;
    ShapesPointer->displayArea();

    Circle ShapeCircle(5.5);
    ShapesPointer = &ShapeCircle;
    ShapesPointer->displayArea();

    return 0;
}