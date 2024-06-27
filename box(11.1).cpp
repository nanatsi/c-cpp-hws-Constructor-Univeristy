//CH - 230 - A
//a11.p1.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include <iostream>
#include "Box.h"

void Box::setHeight(double newheight) {
	height = newheight;
}

void Box::setWidth(double newwidth) {
	width = newwidth;
}

void Box::setDepth(double newdepth) {
	depth = newdepth;
}

double Box::getHeight() {
	return height;
}

double Box::getWidth() {
	return width;
}

double Box::getDepth() {
	return depth;
}

void Box::calcVolume() {
	volume = height * width * depth;
}

void Box::printVolume() {
	calcVolume();
	std::cout << "Volume = " << volume << std::endl;
}

Box::Box() {
	std::cout << "default constructor" << std::endl;
	height = 0;
	width = 0;
	depth = 0;
	volume = height * width * depth;
}

Box::Box(double height_, double width_, double depth_) {
	std::cout << "setting data..." << std::endl;
	height = height_;
	width = width_;
	depth = depth_;
	volume = height * width * depth;
}

Box::Box(const Box& copyBox) {
	height = copyBox.height;
	width = copyBox.width;
	depth = copyBox.depth;
	volume = height * width * depth;
}

Box::~Box() {
	std::cout << "Destuctor" << std::endl;
}