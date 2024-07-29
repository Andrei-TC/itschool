using namespace std;
#include <string>
#pragma once

class Clock {
public:
	int hour;
	int min;
	int sec;

	Clock(int h, int m, int s);
	void setTime(int h, int m, int s) {
		this->hour = h;
		this->min = m;
		this->sec = s;
	}
	void displayTime();
	string getTime() const;
	void tick();
};