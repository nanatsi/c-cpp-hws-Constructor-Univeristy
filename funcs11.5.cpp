//CH - 230 - A
//a11.p5.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de 
// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
#include<cmath>

using namespace std;

Shape::Shape(const string& n) : name(n) {
}
//default-shape
Shape::Shape() : name("default for Shape!") {}
//copy constructor
Shape::Shape(const Shape& copyShape) {
	name = copyShape.name;
}

void Shape::printName() const {
	cout << name << endl;
}
//get's name value and return it
void Shape::setName(std::string& n) {
	n = name;
}
std::string Shape::getName() {
	return name;
}
CenteredShape::CenteredShape(const string& n, double nx, double ny) : Shape(n) {
	x = nx;
	y = ny;
}
//default-centered shape
CenteredShape::CenteredShape() :Shape("default for centered shape!") {
	x = 0;
	y = 0;
}
//copy construcrtor of CenteredShape
CenteredShape::CenteredShape(const CenteredShape& copyCentered) {
	x = copyCentered.x;
	y = copyCentered.y;
}
//sets and gets cordinates
void CenteredShape::move(double nx, double ny) {
	x = nx;
	y = ny;
}

void CenteredShape::setX(double nx) {
	x = nx;
} 

void CenteredShape::setY(double ny) {
	y = ny;
}

double CenteredShape::getX() {
	return x;
}

double CenteredShape::getY() {
	return y;
}


RegularPolygon::RegularPolygon(const std::string& n, 
	double nx, double ny, int nl) :
	CenteredShape(n, nx, ny)
{
	EdgesNumber = nl;
}
//default constructor - polygon
RegularPolygon::RegularPolygon() : CenteredShape
("default for regular polygon!", 0, 0) {
	EdgesNumber = 0;
}
//its copy constructor
RegularPolygon::RegularPolygon(const RegularPolygon& copyPolygon)
	: CenteredShape(copyPolygon) {
	EdgesNumber = copyPolygon.EdgesNumber;
}
//sets and gets its data
void RegularPolygon::setEdgesNumber(int nEdges) {
	EdgesNumber = nEdges;
}
int RegularPolygon::getEdgesNumber() {
	return EdgesNumber;
}

Circle::Circle(const std::string& n, double nx, double ny, double r) :
	CenteredShape(n, nx, ny)
{
	Radius = r;
}
//default constructr for circle
Circle::Circle() :CenteredShape("default for Circle!", 0, 0) {
	Radius = 0;
}
//copy constructor of circle
Circle::Circle(const Circle& copyCircle) : CenteredShape(copyCircle) {
	Radius = copyCircle.Radius;
}
//sets and gets the radius
void Circle::setR(double r) {
	Radius = r;
}
double Circle::getR() {
	return Radius;
}
//computes area & parameter 
double Circle::perimeter() {
	return 2 * M_PI * Radius;
}

double Circle::area() {
	return M_PI * Radius * Radius;
}
//normal constructor
Rectangle::Rectangle(const std::string& n, double nx, double ny,
	double nwidth, double nheight) :
	RegularPolygon(n, nx, ny, 1) {
	Width = nwidth;
	Height = nheight;
}
//default constructor for rectangle
Rectangle::Rectangle()
	: RegularPolygon("default for rectangle!", 0, 0, 1) {
	Width = 0;
	Height = 0;
}
//copy constructor
Rectangle::Rectangle(const Rectangle& copyRectangle) :
	RegularPolygon(copyRectangle) {
	Width = copyRectangle.Width;
	Height = copyRectangle.Height;
}
//sets and gets its data
void Rectangle::setWidth(double nwidth) {
	Width = nwidth;
}

void Rectangle::setHeight(double nheight) {
	Height = nheight;
}

double Rectangle::getWidth() {
	return Width;
}

double Rectangle::getHeight() {
	return Height;
}
//computes area and paremeter
double Rectangle::perimeter() {
	return 2 * (Width + Height);
}

double Rectangle::area() {
	return Width * Height;
}
//normal constructor
Square::Square(const std::string& n, double nx, double ny,
	double nside) : Rectangle(n, nx, ny, nside, nside) {
	Side = nside;
}
//default constructor for Square
Square::Square() : Rectangle("default for square!", 0, 0, 0, 0) {
	Side = 0;
}
//copy constructor 
Square::Square(const Square& copySquare) : Rectangle(copySquare) {
}
//sets and gets its data
void Square::setSide(double nside) {

	Side = nside;
}

double Square::getSide() {
	return Side;
}
//computes the paramiter and the area
double Square::perimeter() {
	return 4 * Side;
}

double Square::area() {
	return Side * Side;

}




