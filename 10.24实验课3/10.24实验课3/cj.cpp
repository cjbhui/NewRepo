#include"cj.h"
int cj(float score)
{
    cout << "Please Enter your score:" << endl;
    cin >> score;
    if (score >= 90)
        cout << "优秀";
    else
    {
        if (score >= 75)
            cout << "良好";
        else
        {
            if (score >= 60)
                cout << "合格";
            else
                cout << "不合格";
        }
    }
    return 0;
}