// 11047: 동전 0
// 실버 4
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    stack<int> coin;
    int N, K;
    int min = 0;

    cin >> N >> K;
    for(int i=0; i<N; i++)
    {
        int won;
        cin >> won;
        coin.push(won);
    }

    while(K>0)
    {
        int tmp = coin.top();

        min += K/tmp;
        if(0<K/tmp)
        {
            K %= tmp;
        }

        coin.pop();
    }

    cout << min << '\n';

    return 0;
}