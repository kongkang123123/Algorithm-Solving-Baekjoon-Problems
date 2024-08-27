// 11399: ATM
// 실버 4
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N;
    int sum = 0;
    vector<int> ATM;

    cin >> N;

    for(int i=0; i<N; i++)
    {
        int tmp;
        cin >> tmp;
        ATM.push_back(tmp);
    }
    
    sort(ATM.begin(), ATM.end());

    for(int i=0; i<N; i++)
    {
        sum += (N-i) * ATM[i];
    }

    cout << sum << '\n';
}