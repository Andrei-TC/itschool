#pragma once
#include "warrior.h"  // Includes the Warrior class
#include "enemy.h"  // Includes the Enemy class
#include "script.h"  // Includes the script functions for different story paths
#include "battleSystem.h"  // Includes the battle system functionality
#include "itemSystem.h"  // Includes the item management system

// Abstract base class for encounters
class Encounters {
public:
	// Pure virtual function to define encounters in derived classes
	virtual void encounter(Warrior& war) = 0;
	// Virtual destructor to allow proper cleanup in derived classes
	virtual ~Encounters() {}
};

// Static instance, shared by all encounters
static vector<Items*> itemList;

// Encounter with a pack of wild dogs
class enc_dog : public Encounters {
public:
	void encounter(Warrior& war) {
		// Creates an enemy (dogs) based on warrior's stats
		Enemy dogs(war);
		BattleSystem battle;
		// Displays the initial dog encounter story
		bad_dog();
		// Randomly selects one of three outcomes for the encounter
		switch (pickNr(3)) {
		case 1:
			// Outcome 1: The player takes 3 damage
			bad_dog_1();
			war.takeDamage(3);
			break;
		case 2:
			// Outcome 2: The player takes 7 damage
			bad_dog_2();
			war.takeDamage(7);
			break;
		case 3:
			// Outcome 3: Initiates a battle with the enemy dogs
			bad_dog_3(dogs);
			battle.battleTime(war, dogs);
			battle.resetBattle();
			break;
		}
	}
	// Destructor
	virtual ~enc_dog() { };
};

// Encounter with a dangerous path that leads to different outcomes
class enc_path : public Encounters {
public:
	// Composition: Includes a dog encounter within the path encounter
	enc_dog dog;

	void encounter(Warrior& war) {
		// Displays the initial path story
		bad_path();
		// Randomly selects one of three outcomes for the encounter
		switch (pickNr(3)) {
		case 1:
			// Outcome 1: The player takes 5 damage
			bad_path_1();
			war.takeDamage(5);
			break;
		case 2:
			// Outcome 2: The player heals 4 health points
			bad_path_2();
			war.heal(4);
			break;
		case 3:
			// Outcome 3: Leads to a dog encounter
			bad_path_3();
			dog.encounter(war);
			break;
		}
	}
	// Destructor
	virtual ~enc_path() {  };
};

// Encounter with a dangerous ivy plant
class enc_ivy : public Encounters {
public:
	void encounter(Warrior& war) {
		Enemy planta(war);  // Creates an enemy (ivy plant) based on warrior's stats
		Items it;  // Item management system
		Items* emptyJar = new empty_jar;
		BattleSystem battle;

		bad_ivy(itemList, it);  // Displays the initial ivy encounter story

		switch (pickNr(3)) {
		case 1:
			// Outcome 1: The player takes 2 damage
			bad_ivy_1();
			war.takeDamage(2);
			break;
		case 2:
			// Outcome 2: The player fights the plant if they have item ID 11
			if (it.findItem(itemList, 11)) {
				bad_ivy_2();
				battle.battleTime(war, planta);
				battle.resetBattle();
				it.removeItem(itemList, 11);  // Removes item ID 11 after using it
			}
			else {
				// If the player doesn't have the item, the encounter restarts
				system("cls");
				itemMissing();
				encounter(war);
			}
			break;
		case 3:
			// Outcome 3: If the player has item ID 12, they use it to gain item ID 15
			if (it.findItem(itemList, 12)) {
				bad_ivy_3();
				it.removeItem(itemList, 12);  // Removes item ID 12
				itemList.push_back(emptyJar);
			}
			else {
				// If the player doesn't have the item, the encounter restarts
				system("cls");
				itemMissing();
				encounter(war);
			}
			break;
		}
	}
	virtual ~enc_ivy() {  };
};

// Encounter with a mysterious figure, possibly leading to combat
class enc_mysterious_figure : public Encounters {
public:
	void encounter(Warrior& war) {
		Enemy fig(war);  // Creates a mysterious figure enemy
		BattleSystem battle;
		mysterious_figure();  // Displays the initial mysterious figure encounter

		switch (pickNr(3)) {
		case 1:
			// Outcome 1: The player takes 5 damage
			mysterious_figure_1();
			war.takeDamage(5);
			break;
		case 2:
			// Outcome 2: The player takes 2 damage
			mysterious_figure_2();
			war.takeDamage(2);
			break;
		case 3:
			// Outcome 3: Initiates a battle with the mysterious figure
			mysterious_figure_3();
			battle.battleTime(war, fig);
			battle.resetBattle();
			break;
		}
	}

	virtual ~enc_mysterious_figure() { }
};

// Encounter with the forsaken ruins, possibly leading to combat or treasure
class enc_forsaken_ruins : public Encounters {
public:
	void encounter(Warrior& war) {
		Enemy darkWraith(war);  // Creates an enemy (dark wraith)
		Items it;  // Item management system
		Items* relics = new relic;
		BattleSystem battle;

		forsaken_ruins();  // Displays the initial forsaken ruins encounter

		switch (pickNr(3)) {
		case 1:
			// Outcome 1: Leads to a battle with the dark wraith
			forsaken_ruins_1();
			battle.battleTime(war, darkWraith);
			battle.resetBattle();
			break;
		case 2:
			// Outcome 2: The player finds a relic (item ID 14)
			forsaken_ruins_2();
			itemList.push_back(relics);  // Adds item ID 14 to the inventory
			break;
		case 3:
			// Outcome 3: The player takes 10 damage
			forsaken_ruins_3();
			war.takeDamage(10);
			break;
		}
	}

	virtual ~enc_forsaken_ruins() { }
};

// Encounter with a cursed statue, leading to multiple damage outcomes
class enc_cursed_statue : public Encounters {
public:
	void encounter(Warrior& war) {
		cursed_statue();  // Displays the initial cursed statue encounter

		switch (pickNr(3)) {
		case 1:
			// Outcome 1: The player takes 8 damage
			cursed_statue_1();
			war.takeDamage(8);
			break;
		case 2:
			// Outcome 2: The player takes 4 damage
			cursed_statue_2();
			war.takeDamage(4);
			break;
		case 3:
			// Outcome 3: The player takes 3 damage
			cursed_statue_3();
			war.takeDamage(3);
			break;
		}
	}

	virtual ~enc_cursed_statue() { }
};

// Encounter with a cursed oasis, where the player can suffer damage or gain an item
class enc_cursed_oasis : public Encounters {
public:
	void encounter(Warrior& war) {
		Items it;  // Item management system
		Items* amulet = new cursed_amulet;
		bad_cursed_oasis();  // Displays the initial cursed oasis encounter

		switch (pickNr(3)) {
		case 1:
			// Outcome 1: The player takes 15 damage
			bad_cursed_oasis_1();
			war.takeDamage(15);
			break;
		case 2:
			// Outcome 2: The player receives a cursed amulet (item ID 13)
			bad_cursed_oasis_2();
			itemList.push_back(amulet);  // Adds item ID 13 to the inventory
			break;
		case 3:
			// Outcome 3: The player takes 20 damage
			bad_cursed_oasis_3();
			war.takeDamage(20);
			break;
		}
	}
	virtual ~enc_cursed_oasis() { }
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
		Items it;
		norm_fishing(itemList, it);
		switch (pickNr(3)) {
		case 1:
			if (it.findItem(itemList, 10)) {
				norm_fishing_1();
				war.heal(15);
				it.removeItem(itemList, 10);
			}
			else {
				system("cls");
				itemMissing();
				encounter(war);
			}
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
	virtual ~enc_fishing() { }
};
class enc_sun : public Encounters {
public:
	void encounter(Warrior& war) {
		Items* cloth = new mysterious_cloth;
		Items it;
		norm_sun();
		switch (pickNr(3)) {
		case 1:
			norm_sun_1();
			war.takeDamage(10);
			break;
		case 2:
			norm_sun_2();
			itemList.push_back(cloth);
			break;
		case 3:
			norm_sun_3();
			war.takeDamage(10);
			break;
		}
	}
	virtual ~enc_sun() { }
};
// Good outcome --------------------
class enc_whispering_glade : public Encounters {
public:
	void encounter(Warrior& war) {
		Items it;
		whispering_glade();  // Main Whispering Glade story prompt

		switch (pickNr(3)) {
		case 1:
			if (it.findItem(itemList, 14)) {  // Check if the player has the item (ID 10)
				whispering_glade_1();  // Offer a prayer and heal
				war.heal(15);  // Heal the warrior
				it.removeItem(itemList, 14);  // Remove the used item from inventory
			}
			else {
				system("cls");
				itemMissing();  // Show a message if the item is missing
				encounter(war);  // Re-run the encounter
			}
			break;
		case 2:
			whispering_glade_2();  // Dance with the forest spirits
			break;
		case 3:
			whispering_glade_3();  // Share a story with spirits
			break;
		}
	}

	virtual ~enc_whispering_glade() { }
};
class enc_witch : public Encounters {
public:
	Items* poison_p = new poison_potion;
	void encounter(Warrior& war) {
		Items it;
		good_witch();
		switch (pickNr(3)) {
		case 1:
			good_witch_1();
			itemList.push_back(poison_p);
			break;
		case 2:
			good_witch_2();
			break;
		}
	}
};
class enc_sacred_spring : public Encounters {
public:
	void encounter(Warrior& war) {
		Items it;
		sacred_spring(itemList, it);  // Pass `itemList` and `it` to dynamically update the options

		switch (pickNr(3)) {
		case 1:
			if (it.findItem(itemList, 15)) {  // Check if the player has an Empty Jar (ID 15)
				sacred_spring_1();  // Fill the jar with healing water
				it.removeItem(itemList, 15);  // Remove Empty Jar from inventory
				Items* healing_p = new healing_potion;  // Add Healing Potion (ID 16) to inventory
				itemList.push_back(healing_p);
			}
			else {
				system("cls");
				itemMissing();  // Show a message if the Empty Jar is missing
				encounter(war);  // Re-run the encounter
			}
			break;
		case 2:
			sacred_spring_2();  // Meditate by the water
			break;
		case 3:
			sacred_spring_3();  // Drink directly from the spring
			war.heal(10);  // Heal the warrior
			break;
		}
	}

	virtual ~enc_sacred_spring() { }
};
