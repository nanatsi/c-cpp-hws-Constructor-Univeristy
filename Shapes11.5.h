//CH - 230 - A
//a11.p5.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de 
/*
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
private:   				// private access modifier: could also be protected
	std::string name;   // every shape will have a name
public:
	Shape(const std::string&);  // builds a shape with a name
	Shape();					// empty shape
	Shape(const Shape&);		// copy constructor
	void printName() const;  	// prints the name  

	void setName(std::string&); //setter and getter for name
	std:: string getName();
};

class CenteredShape : public Shape {  // inherits from Shape
private:
	double x, y;  // the center of the shape
public:
	CenteredShape(const std::string&, double, double); 
	// usual three constructors
	CenteredShape();
	CenteredShape(const CenteredShape&);
	void move(double, double);	// moves the shape, i.e. it modifies it center

	void setX(double);
	void setY(double);
	double getX();
	double getY();
};

class RegularPolygon : public CenteredShape { // a regular polygon 
											//is a centered_shape 
											//with a number of edges
private:
	int EdgesNumber;
public:
	RegularPolygon(const std::string&, double, double, int);
	RegularPolygon();
	RegularPolygon(const RegularPolygon&);
	//to get edgesnumber
	void setEdgesNumber(int);
	int getEdgesNumber();
	
};

class Circle : public CenteredShape {  // a Circle is a shape 
	//with a center and a radius
private:
	double Radius;
public:
	Circle(const std::string&, double, double, double);
	Circle();
	Circle(const Circle&);
	//to get Radius
	void setR(double);
	double getR();
	//methods for computing paramiter and area
	double perimeter(); 
	double area();
};

class Rectangle :public RegularPolygon {
public:
	//constructor for rectangle
	Rectangle(const std::string&, double, double, double, double);
	//for default 
	Rectangle();
	//creating a copy
	Rectangle(const Rectangle&);
	//setter and getter for its data
	void setHeight(double);
	void setWidth(double);
	double getWidth();
	double getHeight();
	//methods for computing paramiter and area
	double perimeter();
	double area();
private:
	double Height;
	double Width;
};
class Square :public Rectangle {
public:
	//its constructor
	Square(const std::string&, double, double, double);
	//for default
	Square();
	//creating a copy
	Square(const Square&);
	//setter and getter for getting side
	void setSide(double);
	double getSide();
	//methods for computing parameter and area
	double perimeter();
	double area();
private:
	double Side;


};

#endif