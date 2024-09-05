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
#include <conio.h>
#include <stdexcept>
using namespace std;

class Vehicle {
protected:
	string make;
	string model;
	int year;
public:
	Vehicle() { make = " "; model = " "; year = 0; }
	Vehicle(string ma, string mo, int y) : make(ma), model(mo), year(y) {}
	virtual void printDetails() {
		cout << "Vehicle details" << endl;
		cout << "---------------" << endl;
		cout << make << ", model " << model << endl;
		cout << "Year " << year << endl;
	}
};

class Car : public Vehicle {
private:
	int numSeats;
public:
	Car(int s) : Vehicle("Mazda", "RX7", 1998) {
		numSeats = s;
	}
	void printDetails() {
		cout << "Vehicle details" << endl;
		cout << "---------------" << endl;
		cout << make << ", model " << model << endl;
		cout << "Year " << year << endl;
		cout << "Seats number: " << numSeats << endl;
	}
};

class Truck : public Vehicle {
private:
	double loadCapacity;
public:
	Truck(int load) : Vehicle("Scania", "XL", 2005) {
		loadCapacity = load;
	}
	void printDetails() {
		cout << "Vehicle details" << endl;
		cout << "---------------" << endl;
		cout << make << ", model " << model << endl;
		cout << "Year " << year << endl;
		cout << "Load capacity: " << loadCapacity << endl;
	}
};

int main()
{
	Vehicle* car = new Car(3);
	car->printDetails();
	cout << "\n#####################\n" << endl;
	Vehicle* truck = new Truck(2000);
	truck->printDetails();
}