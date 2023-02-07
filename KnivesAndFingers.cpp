#include <iostream>
using namespace std;

int main()
{
	enum Knife{ ButcherKnife = 3, KitchenKnife = 2, ButterKnife = 1 };
	unsigned short Fingers, Slices = 0, MyKnife, KnifeDamage = 0;
	int count = 100, FingersLeft;
	const short Butcher = 3, Kitchen = 2, Butter = 1;

	

	cout << "Knives & Fingers" << endl << endl;

	cout << "How many fingers have you got?" << endl << endl;

	cin >> Fingers;




	if (Fingers <= 5)
	{
		cout << "I take pity on you, you may leave" << endl << endl;

		cout << "You leave with your fingers intact" << endl << "see you next time Player";

		return 0;
	}
	if( Fingers > 5 && Fingers < 8)
	{
		cout << "Lost some have we" << endl << endl;
	}
	if (Fingers >= 9 && Fingers <= 10)
	{
		cout << "Fine by me" << endl << endl;
	}
	if (Fingers > 10)
	{
		cout << "Ummm... okayy..." << endl << endl;
	}
	
	


	cout << "What would you like me to use on you?" << endl << "1. ButterKnife" << endl << "2. KitchenKnife" << endl << "3. ButcherKnife" << endl;

	cin >> MyKnife;




	if (MyKnife == ButcherKnife)
	{
		cout << "You are sick" << endl << endl;;
		KnifeDamage = 3;
	}
	if (MyKnife == KitchenKnife)
	{
		cout << "Kitchen Knife my old friend" << endl << endl;;
		KnifeDamage = 2;
	}
	if (MyKnife == ButterKnife)
	{
		cout << "It's sharper than you'd think" << endl << endl;
		KnifeDamage = 1;
	}




	cout << "How many slices should i take?" << endl;

	cin >> Slices;




	if (Slices == 0)
	{
		cout << "NO" << endl;

		cout << "He stabs you in your stomach, You bleed out" << endl << endl;

		cout << "GAME OVER";

		return 0;
	}




	for (int i = 1; Slices >= i; i++)
	{
		cout << "**SLASH**" << endl;
		count -= 2;
		count--;
		count += 25;
		// This is to randomize the number of fingers the  guy has on his wall at the end
	}




	KnifeDamage = Slices * KnifeDamage;

	FingersLeft = Fingers - KnifeDamage;




	if (FingersLeft <= 0)
	{
		cout << "You have no fingers left" << endl << endl;
	}
	if (FingersLeft == 1)
	{
		cout << "You have one finger left" << endl << endl;
	}
	if (FingersLeft >= 2)
	{
		cout << "You have " << FingersLeft << " Fingers left" << endl << endl;
	}
	if (FingersLeft > 1)
	{
		cout << "I'll put these on my wall of fingers, i am now up to " << count << " fingers" << endl << endl;
	}
	if (FingersLeft == 1)
	{
		cout << "I'll put this on my wall of fingers, i am now up to " << count << " fingers" << endl << endl;
	}




	count = 10000 % count;

	cout << "only " << count << " more fingers to be released from this purgatory" << endl << endl;

	cout << "Until we meet again Player" << endl << endl << "GAME OVER";

	
	return 0;
}
