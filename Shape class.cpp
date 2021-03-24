#include <iostream>
#include <cmath>

using namespace std;

class Point
{
private:
    double x,y;
public:
    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    double computeDistance()
    {
        return sqrt(x*x + y*y);
    }
};

class Shape
{
private:
    Point p;
public:
    Shape(double x, double y)
        : p(x,y)
    {}
    virtual double computeArea() = 0;
    virtual double computeCircumference() = 0;
};

class Circle : public Shape
{
private:
    double radius;
public:
    Circle(double x, double y, double radius)
    : Shape(x,y)
    {
        this->radius = radius;
    }

    double computeArea()
    {
        return radius*radius*3.14;
    }

    double computeCircumference()
    {
        return radius*2*3.14;
    }
};

class Square : public Shape
{
private:
    double side;
public:
    Square(double x, double y, double side)
    : Shape(x,y)
    {
        this->side = side;
    }

    double computeArea()
    {
        return side*side;
    }

    double computeCircumference()
    {
        return side*4;
    }
};

class Rectangle : public Shape
{
private:
    double length,width;
public:
    Rectangle(double x, double y, double length, double width)
    : Shape(x,y)
    {
        this->length = length;
        this->width = width;
    }

    double computeArea()
    {
        return length*width;
    }

    double computeCircumference()
    {
        return (length+width)*2;
    }
};

int main(){
    Point a_point(5,5);
    double dist = a_point.computeDistance();
    cout << "The distance between your point and the origin is: " << dist << endl;
    Circle a_circle(1,1,5);
    double cirArea = a_circle.computeArea();
    double cirCircumference = a_circle.computeCircumference();
    cout << "Circle's area: " << cirArea << endl;
    cout << "Circle's circumference: " << cirCircumference << endl;

    Square a_square(1,1,5);
    double sqArea = a_square.computeArea();
    double sqCircumference = a_square.computeCircumference();
    cout << "\nSquare's area: " << sqArea << endl;
    cout << "Square's circumference: " << sqCircumference << endl;

    Rectangle a_rectangle(1,1,4,5);
    double recArea = a_rectangle.computeArea();
    double recCircumference = a_rectangle.computeCircumference();
    cout << "\nRectangle's area: " << recArea << endl;
    cout << "Rectangle's circumference: " << recCircumference << endl;
	return 0;
}
