#include<iostream>
using namespace std;

int main(void) {
    int N; cin >> N;    //배달해야 하는 설탕의 키로수

    int ans = 0;

    while (N >= 0) {
        if (N % 5 == 0) {
            ans += N / 5;
            cout << ans << endl;
            return 0; }
        else {
            N -= 3;
            ans++;
        }
    }
    cout << -1 << endl;
}