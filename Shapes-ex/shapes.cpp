#include <iostream>
using namespace std;

class Shapes
{
public:
    float width;
    string name;
    virtual float displayArea() = 0;
};

class Cone : public Shapes
{
public:
    float height;
    Cone(float newHeight, float newWidth)
    {
        height = newHeight;
        width = newWidth;
        name = "cone";
    }

    float displayArea()
    {
        return  0.3 * 3.14 * ((width / 2) * (width / 2)) * height;
    };
};

class Cylinder : public Shapes
{
public:
    float height;
    Cylinder(float newHeight, float newWidth)
    {
        height = newHeight;
        width = newWidth;
        name = "cylinder";
    }

    float displayArea()
    {
        return 3.14 * ((width / 2) * (width / 2))*height;
    };
};

class Phyramid : public Shapes
{
public:
    float height;
    Phyramid(float newHeight, float newWidth)
    {
        height = newHeight;
        width = newWidth;
        name = "phyramid";
    }

    float displayArea()
    {
        return (0.3 * (width * width) * height);
    };
};

class Cube : public Shapes
{
public:
    Cube(float newWidth)
    {
        width = newWidth;
        name = "Cube";
    }

    float displayArea()
    {
        return (width * width * width);
    };
};

class Sphere : public Shapes
{
public:
    Sphere(float newWidth)
    {
        width = newWidth;
        name = "Sphere";
    }

    float displayArea()
    {
        return (4.0 / 3.0) * 3.14 * (width * width * width);
    };
};
void display(Shapes &bob)
{
    cout << "objetosc " << bob.name << " " << bob.displayArea() << endl;
}

int main()
{

    Cone ShapeCone(10, 20);
    display(ShapeCone);

    Cylinder ShapeCylinder(5, 5);
    display(ShapeCylinder);

    Phyramid ShapePhyramid(20, 5);
    display(ShapePhyramid);

    Cube ShapeCube(5);
    display(ShapeCube);
    Sphere ShapeSphere(5);
    display(ShapeSphere);

    return 0;
}