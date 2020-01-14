#include "automata.h"
#include <conio.h>

int main()
{
	int money, num, l = -1;
	automata lulerz = automata();
	lulerz.on();
	lulerz.on();
	cin >> money;
	lulerz.coin(money);

	lulerz.printSugarLvl();
	lulerz.add_sugar();
	lulerz.add_sugar();
	lulerz.printSugarLvl();
	lulerz.add_sugar();
	cout << "Drink number?" << "\n";
	cin >> num;
	if (lulerz.choice(num) != -1) 
	{ 
		lulerz.cancel();
	}
	else {
		if (lulerz.check() == -1)
		{
			lulerz.cook();
			lulerz.finish();
		}
		else
		{
			lulerz.cancel();
			lulerz.return_coins();
		}
	}
	lulerz.off();
	_getch();
	return 0;
}
