#include"szys.h"
int szys(double a, double b)
{
    cout << "��������a" << endl;//�����һλ��
    cin >> a;
    char ch = '+';
    char ch1 = '-';
    char ch2 = '*';
    char ch3 = '/';
    cout << "ѡ�����" << ch << ch1 << ch2 << ch3 << endl;
    char t;
    cin >> t;
    cout << "��������һλ��b" << endl;//������һλ����
    cin >> b;
    switch (t)//��������
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