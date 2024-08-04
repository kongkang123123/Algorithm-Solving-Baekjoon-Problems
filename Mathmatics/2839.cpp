// 2839: 설탕 배달
// 실버 4
#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N;
    int total = 0;

    cin >> N;

    if(N==4 || N == 7)
    {
        cout << -1;
    }

    else
    {
        if(N % 5 == 0)
        {
            cout << N/5;
        }

        else    // If N is not a multiple of 5
        {
            while(N % 5 != 0)
            {
                N -= 3;
                total++;
            }

            total += N/5;

            cout << total;
        }
    }

    return 0;
}