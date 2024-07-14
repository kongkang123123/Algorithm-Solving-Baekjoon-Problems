// 1010: 다리 놓기
// 실버 5
#include <iostream>
using namespace std;

int main(void)
{
    int T;
    long long N, M;
    cin >> T;
    
    for(int i=0; i<T; i++)
    {
        cin >> N >> M;

        long long r = 1;
        for(long long j=M; j>M-N; j--)
        {
            r *= j;
            r /= (M-j+1);
        }
        cout << r << '\n';
    }
}