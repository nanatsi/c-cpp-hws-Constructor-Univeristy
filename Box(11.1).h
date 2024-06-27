//CH - 230 - A
//a11.p1.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#ifndef BOX_H
#define BOX_H
class Box {
private:
	double height;
	double width;
	double depth;
	double volume;
	void calcVolume();
public:
	// setter methods
	void setHeight(double newheight);
	void setWidth(double newwidth);
	void setDepth(double newdepth);

	// getter methods
	double getHeight();
	double getWidth();
	double getDepth();

	// service method
	void printVolume();

	// constructors
	Box();
	Box(double height_, double width_, double depth_);

	// copy constructor
	Box(const Box& copyBox);
	// destructor
	~Box();
};
#endif