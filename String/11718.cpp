// 11718: 그대로 출력하기
// 브론즈 3
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;

    while(true) 
    {
		getline(cin, str);
		if(str == "") 
        {
            break;
        }

		cout << str << '\n';
	}
}