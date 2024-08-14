// 1934: 최소공배수
// 실버3
// 최대공약수 & 최소공배수
// 유클리드 호제법
#include <iostream>
using namespace std;

int gcd(int num1, int num2)
{
    int num3;

    while(num2 != 0)
    {
        num3 = num1 % num2;
        num1 = num2;
        num2 = num3;
    }

    return num1;
}

int lcm(int num1, int num2)
{
    return (num1 * num2 / gcd(num1, num2));
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int T, A, B;
    int i;
    cin >> T;

    for(i=0; i<T; i++)
    {
        cin >> A >> B;

        cout << lcm(A,B) << "\n";
    }

    return 0;
}