//CH - 230 - A
//a12.p1.c
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
CenteredShape::CenteredShape(const CenteredShape& copyCentered) 
	: Shape(copyCentered) {
	x = copyCentered.x;
	y = copyCentered.y;
}
//sets and gets cordinates
void CenteredShape::move(double nx, double ny) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n, nx, ny)
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon() : CenteredShape
("default for regular polygon!", 0, 0) {
	EdgesNumber = 0;
}
//its copy constructor
RegularPolygon::RegularPolygon(const RegularPolygon& copyPolygon)
	: CenteredShape(copyPolygon) {
	EdgesNumber = copyPolygon.EdgesNumber;
}


Circle::Circle(const string& n, double nx, double ny, double r) :
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
//normal constructor
Hexagon::Hexagon(const std::string& n, double nx, double ny, double nside, const std::string& ncolor)
	:RegularPolygon(n, nx, ny, 6) {
	side = nside;
	color = ncolor;
}
//default constructor
Hexagon::Hexagon() :RegularPolygon("default constructor!", 0, 0, 6) {
	side  =  0;
	color = "DEAFAULT";
}
//copy constructor
Hexagon::Hexagon(const Hexagon& copyHexagon) 
	:RegularPolygon(copyHexagon) {
	side = copyHexagon.side;
	color = copyHexagon.color;
}
//sets and gets data
void Hexagon::setSide(double a) {
	side = a;
}
void Hexagon::setColor(string& k) {
	color = k;
}
double Hexagon::getSide() const {
	return side;
}
string Hexagon::getColor() const {
	return color;
}
//computes and returns perimeter
double Hexagon::perimeter() const {
	return 6 * side;
}
//computes and returns area
double Hexagon::area() const {
	return 3 * sqrt(3) * pow(side, 2) / 2;
}
//destructor
Hexagon::~Hexagon() {
	cout << "this is a destructor" << endl;
}


