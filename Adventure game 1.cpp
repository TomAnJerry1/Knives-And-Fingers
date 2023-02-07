#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	cout << "Welcome Player, Let's get started" << endl << endl;
	short health = 10, attack, block, turns = 0, enter;
	// Learned the hard way that using unsigned short caused the health to wrap once it hit zero causing you to gain 60,000 health suddenly
	srand(static_cast<unsigned int>(time(0)));
	// generates random seed
	int RNG = rand();
	int rng = rand();

	// I used two seperate RNG for attack and block, as when i used one it seems that the player wins everytime

	cout << "your starting health is 10" << endl << endl;
	// displays starting health
	do
	{
		turns++; // Counts the turns

		attack = (RNG % 4) + 1, block = (rng % 4) + 1; // Rolls for damge and block numbers
		if (block >= attack)
		{
			cout << "you blocked the attack" << endl << endl;
		}
		else
		{
			cout << "You take " << attack << " Damage" << endl << endl;
			health = health - attack; // Updates the health value

			cout << "Your health is " << health << endl << endl;
		}
		
		cout << "Turn " << turns << " Is over" << endl << endl; // Displays when the loop finishes and the turn ends

	} while (health > 0 && turns < 4); 

	if (health > 0) // Win condition
	{
		cout << "Congratulations, You beat the  foe" << endl << endl;

		cout << "With a remaining health of " << health << endl;
	}
	else // Lose condition
	{
		cout << "You've lost to the foe, You perish" << endl;
	}

		return 0;
}