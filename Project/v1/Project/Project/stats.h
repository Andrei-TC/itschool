#pragma once
typedef std::uint16_t stype;

class Stats {
public:
	Stats() { power = 1; luck = 1; resistance = 1; }
	explicit Stats(stype p, stype l, stype r) {
		power = p;
		luck = l;
		resistance = r;
	}
	stype getPower() { return power; }
	stype getLuck() { return luck; }
	stype getResistance() { return resistance; }
private:
	stype power;
	stype luck;
	stype resistance;
protected:
	void increaseStats(stype p, stype l, stype r) {
		power += p;
		luck += l;
		resistance += r;
	}
};