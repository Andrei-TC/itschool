#include <iostream>
#include "string.h"
#include <string>
#include <vector>
#include <set>
#include <numeric>
#include <functional>
#include <algorithm>
#include <map>
#include <math.h>
#include <fstream>
using namespace std;

class Wheel
{
public:
	Wheel() = delete;
	Wheel(string t, int* d) {
		type = t;
		dim = d;
	}
	~Wheel()
	{
		if (dim)
			delete dim;
	}
	Wheel(const Wheel& other) {
		type = other.type;
		dim = new int(*other.dim);
	}

	void print() const {
		cout << "The wheel has the following dimension: " << *dim << " and the is for " << type << endl;
	}
private:
	string type;
	int* dim;
};

class Engine
{
public:
	Engine() = default;
	Engine(int hp, string t)
	{
		this->HP = hp;
		this->type = t;
	}
	~Engine() = default;

	void print() const
	{
		cout << "The engine has " << HP << " and is a type " << type << endl;
	}
private:
	int HP;
	string type;
};

class Car
{
public:
	Car() = delete;
	Car(Engine& e, vector<Wheel>& w)
	{
		this->e = e;
		this->w = w;
	}
	~Car() = default;
	Car(int engine_size, string engine_type, int wheel_size, string wheel_type) {
		Engine temp(engine_size, engine_type);
		e = temp;
		w.reserve(4);
		Wheel wtemp(wheel_type, new int(wheel_size));
		w.push_back(wtemp);
		w.push_back(wtemp);
		w.push_back(wtemp);
		w.push_back(wtemp);
	}

	void printCarDetails() const
	{
		cout << "The details about the car are: " << endl;
		e.print();
		for (const auto& el : w) {
			el.print();
		}
	}
private:
	Engine e;
	vector<Wheel> w;
};

int main() {
	Car c(177, "2.0", 19, "Summer");
	c.printCarDetails();
}