#pragma once
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// ITEMS:
/*
Fishing rod - 10
Mysterious cloth - 11
Poison potion - 12
Cursed amulet - 13
Relic - 14
Empty Jar - 15
Healing potion - 16
*/

class Items {
public:
	Items() {
		item = 1;
		name = "default";
	}

	// Find an item in the item list based on its ID
	bool findItem(vector<Items*>& itemList, int i) {
		auto it = find_if(itemList.begin(), itemList.end(), [i](Items* itm) { return itm->item == i; });
		return it != itemList.end();
	}

	// Remove an item from the item list based on its ID
	void removeItem(vector<Items*>& itemList, int i) {
		auto it = find_if(itemList.begin(), itemList.end(), [i](Items* itm) { return itm->item == i; });
		if (it != itemList.end()) {
			itemList.erase(it);  // Remove the item from the list
		}
	}
	string getName() {
		return name;
	}
	void showItems(vector<Items*>& itemList) {
		std::cout << "\n\t\t\t";
		std::cout << "##############################################################################" << endl;
		std::cout << "\t\t\t";
		for (auto el : itemList) {
			std::cout << el->name << ", ";
		}
		std::cout << "\n\t\t\t";
		std::cout << "##############################################################################" << endl;
	}

protected:
	int item;  // Item ID
	string name;  // Item name
};

// Fishing rod
class fishing_rod : public Items {
public:
	fishing_rod() {
		item = 10;  // Unique ID for the fishing rod
		name = "Fishing rod";  // Name of the item
	}
};

// Mysterious cloth
class mysterious_cloth : public Items {
public:
	mysterious_cloth() {
		item = 11;  // Unique ID for the mysterious cloth
		name = "Mysterious cloth";  // Name of the item
	}
};

// Poison potion
class poison_potion : public Items {
public:
	poison_potion() {
		item = 12;  // Unique ID for the poison potion
		name = "Poison potion";  // Name of the item
	}
};

// Cursed amulet
class cursed_amulet : public Items {
public:
	cursed_amulet() {
		item = 13;  // Unique ID for the cursed amulet
		name = "Cursed amulet";  // Name of the item
	}
};

// Relic
class relic : public Items {
public:
	relic() {
		item = 14;  // Unique ID for the relic
		name = "Mysterious Relic";  // Name of the item
	}
};

// Empty Jar
class empty_jar : public Items {
public:
	empty_jar() {
		item = 15;  // Unique ID for the empty jar
		name = "Empty Jar";  // Name of the item
	}
};

// Healing Potion
class healing_potion : public Items {
public:
	healing_potion() {
		item = 16;  // Unique ID for the healing potion
		name = "Healing Potion";  // Name of the item
	}
};
