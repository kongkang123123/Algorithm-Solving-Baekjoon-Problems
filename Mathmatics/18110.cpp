// 18110: solved.ac
// 실버 4
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main(void)
{
    vector<double> levels;
    int N;
    double sum = 0;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        double input;
        cin >> input;
        levels.push_back(input);
    }

    sort(levels.begin(), levels.end());

    int exclude = round(N * 0.15);
    int low = exclude;
    int high = N - exclude;

    for (int i = low; i < high; i++)
    {
        sum += levels[i];
    }

    if (high > low) {
        sum = sum / (high - low);
    } else {
        sum = 0; // in case all elements are excluded
    }

    cout << static_cast<int>(round(sum)) << endl;

    return 0;
}