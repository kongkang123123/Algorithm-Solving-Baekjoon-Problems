// 1236: 성 지키기
// 브론즈 1
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char castle[50][50];
    int x, y;
    int i, j;

    cin >> y >> x;
    for(i=0; i<y; i++)
    {
        for(j=0; j<x; j++)
        {
            cin>>castle[i][j];
        }
    }

    int y_min=0;
    for(i=0; i<y; i++)
    {
        bool check = 0;         // true, false로 해도 될듯
        for(j=0; j<x; j++)
        {
            if(castle[i][j]=='X')
            {
                check = 1;
                break;
            }
        }
        if(!check)
        {
            y_min += 1;
        }
    }

    int x_min=0;
    for(i=0; i<x; i++)
    {
        bool check = 0;
        for(j=0; j<y; j++)
        {
            if(castle[j][i]=='X')
            {
                check = 1;
                break;
            }
        }
        if(!check)
        {
            x_min += 1;
        }
    }

    int maxi = max(x_min, y_min);

    cout << maxi;
}