// 11726: 2xn 타일링
// 실버 3
#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    long long dp[1001]={0,1,2};

    for(int i=3; i<1001; i++)
    {
        dp[i] = (dp[i-2] + dp[i-1]) % 10007;
    }

    cin >> n;

    cout << dp[n]<< '\n';

    return 0;
}