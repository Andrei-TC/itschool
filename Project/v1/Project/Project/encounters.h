#pragma once

class Encounters {
	virtual void encounter(Warrior& war) = 0;
};

class enc_dog : public Encounters{
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
	int getId() {
		return id;
	}
private:
	int id = 1;
};