// 소수 구하기(1929). 에라토스테네스의 체
// 실버 3
#include <iostream>
#include <cmath>
using namespace std;

bool check[1000001] = {false};

int main(void)
{
    int M, N;
    
    for(int i=2; i<=sqrt(1000000); i++)
    {
        if(check[i]) 
        {
            continue;
        }

        for(int j=i*i; j<=1000000; j+=i)
        {
            check[j] = true;
        }
    }

    cin >> M;
    cin >> N;

    for(int k = M; k<=N; k++)
    {
        if(k>1&&!check[k])
        {
            cout<<k<<"\n";
        }
    }
}