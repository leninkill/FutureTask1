#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int k, m;

    cin >> k;
    cin >> m;

    int hour = 8;
    int minute = 0;

    int time1 = k;
    int time2 = (k + 10) % 60;
    int time3 = (k + 20) % 60;
    int time4 = (k + 30) % 60;
    int time5 = (k + 40) % 60;
    int time6 = (k + 50) % 60;

    vector<int> times{time1, time2, time3, time4, time5, time6};
    sort(times.begin(), times.end());

    for (int time:times) {
        if (time >= m) {
            cout << "8 " << time;
            return 0;
        }
    }

    cout << "9 " << times[0];

    return 0;
}