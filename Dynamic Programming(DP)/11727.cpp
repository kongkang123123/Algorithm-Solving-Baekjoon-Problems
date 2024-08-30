// 11727: 2xn 타일링 2
// 실버 3
#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int dp[1001] = {0, 1, 3};
    int n;

    cin >> n;
    for(int i=3; i<=n; i++)
    {
        dp[i] = 2*dp[i-2] + dp[i-1];
    }

    cout << dp[n] << '\n';
}