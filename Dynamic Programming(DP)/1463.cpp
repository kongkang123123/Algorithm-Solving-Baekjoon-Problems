// 1463: 1로 만들기
// 실버 3
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

	int n;
	cin >> n ;
	vector<int> dp(n + 1);

	//bottom-up
	dp[1] = 0;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;

		if(!(i % 3)) 
        {
            dp[i] = min(dp[i],dp[i / 3] + 1);
        }
		if(!(i % 2))
        {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }
	}

	cout << dp[n] << '\n';
	return 0;
}