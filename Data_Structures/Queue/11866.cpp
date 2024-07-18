// 11866: 요세푸스 문제 0
// 실버 5
#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    int josephus[1000];
    bool check[1000]={false,};
    
    for(int i=0; i<N; i++) 
    {
        josephus[i] = i+1;
    }

    int num_print = 0;
    int cur = -1;   // -1 초기화. 아직 실행되지 않음을 의미
    int cycle=0;

    cout << '<';
    while(num_print<N)
    {
        cur++;
        if(cur % N == 0)
        {
            cur = 0;
        }
        if(check[cur])
        {
            continue;
        }

        cycle++;

        if(cycle%K==0 && !check[cur])
        {
            cout << josephus[cur];
            check[cur] = true;
            (num_print<N-1)?(cout <<", "): (cout<<'>');
            cycle = 0;
            num_print++;
        }
    }
}