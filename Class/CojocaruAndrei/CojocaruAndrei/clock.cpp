#include "clock.h"
#include <iostream>
#include <string>
using namespace std;

	Clock::Clock(int h, int m, int s) : hour(h), min(m), sec(s) {}
	void Clock::setTime(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}
	void Clock::displayTime() {
		cout << hour << ":" << min << ":" << sec << endl;
	}
	// Sus sau jos (preferat jos)
	string Clock::getTime() const {

		return to_string(hour) + ":" + to_string(min) + ":" + to_string(sec);
	}
	void Clock::tick() {
		if (sec == 59) {
			sec = 0;
			if (min == 59) {
				min = 0;
				if (hour == 23) {
					hour = 0;
				}
				else
					hour++;
			}
			else
				min++;
		}
		else
			sec++;
	}