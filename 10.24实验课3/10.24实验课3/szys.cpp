#include"szys.h"
int szys(double a, double b)
{
    cout << "输入数字a" << endl;//输入第一位数
    cin >> a;
    char ch = '+';
    char ch1 = '-';
    char ch2 = '*';
    char ch3 = '/';
    cout << "选择符号" << ch << ch1 << ch2 << ch3 << endl;
    char t;
    cin >> t;
    cout << "请输入另一位数b" << endl;//输入另一位数，
    cin >> b;
    switch (t)//进行运算
    {
    case '+':
        cout << a << "+" << b << "=" << a + b << endl;
        break;
    case'-':
        cout << a << "-" << b << "=" << a - b << endl;
        break;
    case'*':
        cout << a << "*" << b << "=" << a * b << endl;
        break;
    case'/':
        cout << a << "/" << b << "=" << a / b << endl;
        break;
    }
    return 0;
}