#include"fjys.h"
int fjys(int N)
{
	cout << "������һ������"<<endl;
	cin >> N;
	cout << N << "=";
	for (int i = 2; i <= N; i++)
	{
		while (N % i == 0)
		{
			cout << i;
			N /= i;
			if (N != 1)
			{
				cout << "*";
			}
		}

	}
	if (N > 1)
		cout << N;
	return 0;
}