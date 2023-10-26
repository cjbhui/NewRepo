#include"cszyx.h"
int csz(int sz1, int sz2)
{
	int c = 0;
	srand(time(0));
	sz1 = 1 + rand() % 100;

	cout << "»¶Ó­À´µ½²ÂÊý×ÖÓÎÏ·" << endl;
	cout << "ÇëÊäÈëÄãµÄ²Â²â ";

	do
	{
		cin >> sz2;
		if (sz2 < sz1)
			cout << endl << "wrong,too small!" << endl;
		else
		{
			if (sz2 > sz1)
				cout << endl << "wrong,too big!"<<endl;
			else
				cout << endl << "you are right!!!!";
		}
		c++;
	} while (sz2 != sz1);
	cout << endl << "you have tried for " << c << " times.";
	return 0;
}