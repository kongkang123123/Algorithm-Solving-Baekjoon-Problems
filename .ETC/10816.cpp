// 10816: 숫자 카드 2
// 실버 4
#include <iostream>
#include <algorithm>
using namespace std;

int N, M, card;
int arr[500001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N;

    for(int i=0; i<N; i++)
    {
        cin >> card;
        arr[i] = card;
    }

    sort(arr, arr+N);

    cin >> M;
    for(int j=0; j<M; j++)
    {
        cin >> card;
        cout << upper_bound(arr, arr+N, card) - lower_bound(arr, arr+N, card) << " ";
    }

    return 0;
}