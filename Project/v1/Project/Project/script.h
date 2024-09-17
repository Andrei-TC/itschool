#pragma once
#include "warning.h"
#include "loadingBar.h"


void pIntro() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                Hello ~person! Do you want to start your adventure?         #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t1 -> Start game \t\t\t\t\t\t2 -> Exit\n";
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->> ";
}

void pWellcome() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#          Wellcome traveler! You have enter the gates of the Paradise!      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#              From now on, you can enjoy every wonder of this land.         #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                   But be carefull and don't bite the apple!                #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;

	cout << "\t\t\t\t\t\t{}__/}\n\t\t\t\t\t\t(•_•)\n\t\t\t\t\t\t( >HELLO YOU! <3";
	std::cout << endl;
}

void pActionBar(Warrior& war) {

	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "# Life: ";
	normalBar(war.getCurrentHp(), war.getMaxHp());
	cout << war.getCurrentHp() << "/" << war.getMaxHp();
	cout << "  \t Experience: "
		<< war.getCurrentXP() << "/" << war.getXpToNextLvl() << " \tLevel: "
		<< war.getCurrentLevel() << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "1 -> CONTINUE  \t\t\t 2 -> CHARCTER \t\t\t 3 -> EXIT" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->> ";
}


void two_roads() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   The road is forking into 2 other roads. To the left seems ok, but the    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                   but the right path... has a mistirious aura.             #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                             Which one do you choose?                       #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Left \t\t\t\t2 -> Right";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void three_roads() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                     The road is forking into 3 other roads.                #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    Left is glowing with   |   Middle: all the wild  |  The right one has   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    a redish color...      |   life seems alive here |  the clouds over it  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                             Which one do you choose?                       #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Left \t\t\t2 -> Middle \t\t\t3 -> Right";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}

void bad_dog() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "# You encountered a purple dog. Is moving his tail uncontrolablly when he    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                        sees you. Do you pet him ?                          #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Pet him \t\t\t2 -> Walk away \t\t\t3 -> Attack him";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void bad_dog_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "# You moved slowly to pet him. The dog smiled at you and started to bite you.#" << endl;
	std::cout << "\t\t\t";
	std::cout << "#               You tried to run, but he catched you again.                  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               -3 Health points                             #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void bad_dog_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "# You turned around and runned as fast as you can... unfortunatly, he got    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#              you by your leg. You are tierd and in pain. :(                #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                -7 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void bad_dog_3() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "# -------------Not implemented yet :( try again later------------------------#" << endl;  // Implement combat
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void bad_path() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#      The path is cursed with a demonic script. You move extrmely slowly    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                             through it. What do you do?                    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Go through \t\t2 -> Wait to disapper\t\t3 -> Nothing";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void bad_path_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    You tried to go through the cursed path. The more you go the slower     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  you are. You got exhausted and fainted to the ground. When you woke up,   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                     your skin is burned. You are in pain.                  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                -4 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void bad_path_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "# You waited for the curse to disapper. You got to sleep for some hours.     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#            The curse is still there, but the power is weaker.              #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                +4 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void bad_path_3() {
	system("cls");
	std::cout << "\n\n\n";
	std::cout << "\t\t\t";
	std::cout << "-----*  You stood there and did nothing. Sundenly, a purple dog aproches you. *-----" << endl;
}
void bad_ivy() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#      On your way forward, there is poisoned ivy on the ground. You can     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#               cover it with some cloth or try to pass through it.          #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                            What do you choose to do?                       #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Go through \t\t2 -> Cover it(item missing) \t\t3 -> Use potion(item missing)"; // Implement items -> cloth, poison resistens potion
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void bad_ivy_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    You pass through the poisoned ivy. Your legs are iching and you feel    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    them burn. You scratch yourself tring to recover from this, but the     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#           scratches are too deep and now you are bleeding.                 #" << endl; // Implement effect-> Bleeding effect
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void bad_ivy_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "# You covered the poison ivy with a misterious cloth. From the ground a      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                  faceless monster rises. Prepare to fight!                 #" << endl; // Implement combat
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void bad_ivy_3() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "# You dropped a poison resistence potion on the ivy. The leafs begins to     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                melt. Now the path is clear and you can continue.           #" << endl; 
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void norm_normal_road() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#             This road seems suspiciosly normal. Continue...                #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void norm_fishing() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#      You found a river! The water is so clean you can see every fish.      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                  At the same time, seems good to drink from.               #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                            What do you choose to do?                       #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Fish(missing item) \t\t2 -> Drink \t\t3 -> Take a rest"; // Implement items -> fishing rod
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void norm_fishing_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    You placed yourself besides the river, with the fishing rod in your     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    hands, ready to catch some fish. Finally, after a few minutes you got   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#           one! You made a fire to prepare the fish and got some sleep.     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               +15 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void norm_fishing_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   You drink a small amount of water. Is very salty... now your are even    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                              thirstier than before.                        #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               -2 Health points                             #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void norm_fishing_3() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#     You laid down under a tree and took a nap. Refreshing and not bodered  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                   by anyone.                               #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               +5 Health points                             #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void norm_sun() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#      The sun is shinning so bright and hot, you feel your body melting.    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#           There is a tree, an wooden house and a hole in the ground.       #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                         How do you choose to cover?                        #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Tree \t\t2 -> Wooden house \t\t3 -> Hole"; // Implement items -> fishing rod
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void norm_sun_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    You pick to cover under a tree. Right away the leafs are bursting into  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    fire. The is no shade no more. You skin is boiling and full of burning  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#              marks. You are in much pain and needing aid kit.              #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               -10 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void norm_sun_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   You entered the house. There are a lot of stuff throwed around, but it   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#         seems that no one is home. You are desgusted by all the rats       #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                    and bugs that are climbing on you.                      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                    You found an item! A misterious cloth.                  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void norm_sun_3() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#     As soon as you tried to enter the hole, a creature grabs you by the    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#         hand and pulls you in. You tried to escape, but no succes.         #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#         You wake up after a while with sever cuts and broken bones.        #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               -10 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

// Good outcome ----------------------

void good_witch() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#      You walk apon a witch. She needs help with the grave that is digging. #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                            Do you help her?                                #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Yes \t\t\t\t2 -> No thank you"; 
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void good_witch_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    You choose to help the witch. After digging the grave, she throwed      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    inside her unalive cat. The witch thank you for your help and gifted    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#             a green potion, that she said it will cure any poison.         #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                     Item recived: Poison resistent potion x1               #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void good_witch_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                        She will remember that...                           #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}