#include <iostream>
#include <cmath>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

class Shape {
public:
	virtual double area() = 0;
	virtual string name() = 0;
	friend double printArea(Shape& obj);
	friend double printTotalArea(vector<Shape*>& objs);
};

class Rectangle : public Shape {
public:
	Rectangle(int x, int y) {
		this->width = x;
		this->height = y;
	}
	double area() {
		return width * height;
	}
	string name() {
		return "Rectangle";
	}
private:
	int width;
	int height;
};

class Circle : public Shape {
public:
	Circle(double x) {
		radius = x;
	}
	string name() {
		return "Circle";
	}
	double area() {
		double pi = 3.14;
		double sum = radius * radius;
		string areaS = to_string(sum) + "pi cm2";
		return sum;
	}
private:
	double radius;
};

double printArea(Shape* obj) {
	if (obj->name() == "Circle") {
		cout << "Aria cercului este: " << obj->area() << "PI cm2" << endl;
	}
	else if (obj->name() == "Rectangle") {
		cout << "Aria dreptunghiului este: " << obj->area() << " cm2" << endl;
	}
	else return 0;
}

double printTotalArea(vector<Shape*>& objs) {
	float sum = 0;
	for (const auto& el : objs) {
		sum += el->area();
		
	}
	return sum;
}

int main()
{
	Shape* c = new Circle(5);
	Shape* r = new Rectangle(2, 5);
	printArea(c);
	printArea(r);
	vector<Shape*> v;
	v.push_back(c);
	v.push_back(r);
	cout << "Aria totala a formelor este: " << printTotalArea(v) << " cm2" <<endl;
	delete c;
	delete r;
}