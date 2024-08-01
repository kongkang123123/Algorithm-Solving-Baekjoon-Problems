// 15829: Hashing
// 브론즈 2
#include <iostream>
#include <string>
using namespace std;

const int M = 1234567891;
const int r = 31;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int L;
    string str;

    cin >> L >> str;

    unsigned long long hash_value = 0;
    unsigned long long r_power = 1;
    for(int i=0; i<L; i++)
    {
        int num = str[i]-'a'+ 1;
        // 각 연산마다 M으로 나눠주는 건 overflow방지하기 위함
        hash_value = (hash_value + num * r_power) % M;
        r_power = (r_power * r) % M;
    }

    cout << hash_value;

    return 0;
}