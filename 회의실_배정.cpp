// 그리디 알고리즘
#include <iostream>
#include <algorithm>
using namespace std;    

int N;  // 사용하고자 하는 N개의 회의
pair<int, int> p[100000]; 

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> p[i].second >> p[i].first;
    }

    sort(p, p+N);   //pair 오름차순 정렬

    int ans = 0;    // 최대 사용할 수 있는 회의의 최대 개수 출력
    int a = 0;      // 시간

    for (int i = 0; i < N; i++) {
        if (a > p[i].second){  
            continue;    // a가 끝나는 시간보다 크다면 skip
        }

        a = p[i].first;     
        ans++;
    }

    cout << ans;
    
}