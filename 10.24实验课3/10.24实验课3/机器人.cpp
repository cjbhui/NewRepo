#include <iostream>
#include <cstring>  //strlen()所在的头文件，用来算字母数
using namespace std;
#include"szys.h"
#include"cj.h"
#include"F-C.h"
#include"fjys.h"
#include"cszyx.h"
int main()
{
    int n;
    int N = 0,sz1=0,sz2=0;
    double a = 0, b = 0;
    float score = 0,c=0,f=0;
    const int Size = 15;
    char user[Size];
    char ChatRobort[Size] = "P.G.Kevin";
    cout << "Hello! I'm " << ChatRobort;
    cout << "! What's your name?\n";
    cin >> user;
    cout << "Well, " << user << ", your name has ";
    cout << strlen(user) << " letters and is stored\n";
    cout << "in an array of " << sizeof(user) << " bytes.\n";
    cout << "Your initial is " << user[0] << ".\n";
    ChatRobort[3] = '\0';                // 是第四个元素为空，则输出时输出前三个便停下
    cout << "Here is my first name: ";
    cout << ChatRobort << endl;
    do
    {
        cout << endl;
        cout << "what do you want me to do" << endl;
        cout << "1.简单四则运算" << endl;
        cout << "2.输入成绩判断水平" << endl;
        cout << "3.将华氏温度转换为摄氏温度" << endl;
        cout << "4.分解质因数" << endl;
        cout << "5.玩一个猜数字游戏" << endl;
        cout << "输入1/2/3/4/5选择程序，输入其他整数跟我再见" << endl;
        cin >> n;
        switch (n)
        {
        case(1):
            szys(a, b);
            cout << endl;
            break;
        case(2):
            cj(score);
            cout << endl;
            break;
        case(3):
            fc(f, c);
            cout << endl;
            break;
        case(4):
            fjys(N);
            cout << endl;
            break;
        case(5):
            csz(sz1, sz2);
            cout << endl;
            break;
        }
    }
    while (n<=5&&n>0);
    cout <<endl<< "Bye,have a nice day!";
}