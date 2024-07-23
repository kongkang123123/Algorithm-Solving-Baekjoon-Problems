// 1920: 수 찾기
// 실버 4
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;

    cin >> N;
    vector<int> v(N);

    for(int i=0; i<N; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cin >> M;

    for(int j=0; j<M; j++)
    {
        int find;
        cin >> find;

        if(binary_search(v.begin(), v.end(), find))
        {
            cout << '1' << '\n';
        }
        else
        {
            cout << '0' << '\n';
        }
    }
}