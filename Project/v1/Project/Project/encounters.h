#pragma once
#include "warrior.h"

class Encounters {
public:
	virtual void encounter(Warrior& war) = 0;
	//virtual ~Encounters() = 0;
};

// Bad situations --------------------------------
class enc_dog : public Encounters {
public:
	void encounter(Warrior& war) {
		bad_dog();
		switch (pickNr(3)) {
		case 1:
			bad_dog_1();
			war.takeDamage(3);
			break;
		case 2:
			bad_dog_2();
			war.takeDamage(7);
			break;
		case 3:
			bad_dog_3();
			break;
		}
	}
	virtual ~enc_dog() { cout << "Deleted" << endl; };
};
class enc_path : public Encounters {
public:
	enc_dog dog;
	void encounter(Warrior& war) {
		bad_path();
		switch (pickNr(3)) {
		case 1:
			bad_path_1();
			war.takeDamage(5);
			break;
		case 2:
			bad_path_2();
			war.heal(4);
			break;
		case 3:
			bad_path_3();
			dog.encounter(war);
			break;
		}
	}
	virtual ~enc_path() {  };
};
class enc_ivy : public Encounters {
public:
	void encounter(Warrior& war) {
		bad_ivy();
		switch (pickNr(3)) {
		case 1:
			bad_ivy_1();
			war.takeDamage(2);
			break;
		case 2:
			bad_ivy_2();
			break;
		case 3:
			bad_ivy_3();
			break;
		}
	}
	virtual ~enc_ivy() {  };
};
// Normal situations ----------------------
class enc_normal : public Encounters {
public:
	void encounter(Warrior& war) {
		norm_normal_road();
	}
};

class enc_fishing : public Encounters {
public:
	void encounter(Warrior& war) {
		norm_fishing();
		switch (pickNr(3)) {
		case 1:
			norm_fishing_1();
			war.heal(15);
			break;
		case 2:
			norm_fishing_2();
			war.takeDamage(2);
			break;
		case 3:
			norm_fishing_3();
			war.heal(5);
			break;
		}
	}
};
class enc_sun : public Encounters {
public:
	void encounter(Warrior& war) {
		norm_sun();
		switch (pickNr(3)) {
		case 1:
			norm_sun_1();
			war.takeDamage(10);
			break;
		case 2:
			norm_sun_2();
			// Give item ( mistirious cloth )
			break;
		case 3:
			norm_sun_3();
			war.takeDamage(10);
			break;
		}
	}
};
// Good outcome --------------------
class enc_witch : public Encounters {
public:
	void encounter(Warrior& war) {
		good_witch();
		switch (pickNr(3)) {
		case 1:
			good_witch_1();
			// Give item ( Poison res potion)
			break;
		case 2:
			good_witch_2();
			break;
		}
	}
};