#include"F-C.h"
int fc(float c, float f)
{
	cout << "�����뻪���¶�" << endl;
	cin >> f;
	c = 5 * (f - 32) / 9;
	cout << "c=" << fixed << setprecision(2) << c << endl;
	return(0);
}