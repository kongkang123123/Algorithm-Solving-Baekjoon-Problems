// 11659: 구간 합 구하기 4
// 실버 3
#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int num;
    int que;

    cin >> num >> que;
    long long list[num+1];

    int calc = 0;
    list[0] = 0;

    for(int i=1; i<=num; i++)
    {
        long long a;
        cin >> a;
        list[i] = list[i-1] + a;
    }

    for(int i=0; i<que; i++)
    {
        int begin, end;
        cin >> begin >> end;
        int res = list[end] - list[begin - 1];
        cout << res << '\n';
    }
    
    return 0;
}