#include"cj.h"
int cj(float score)
{
    cout << "Please Enter your score:" << endl;
    cin >> score;
    if (score >= 90)
        cout << "����";
    else
    {
        if (score >= 75)
            cout << "����";
        else
        {
            if (score >= 60)
                cout << "�ϸ�";
            else
                cout << "���ϸ�";
        }
    }
    return 0;
}