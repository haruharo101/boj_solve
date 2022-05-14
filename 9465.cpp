#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastio() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

ll dp[100005][2];
ll arr[100005][2];

int main() {
	fastio();
	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		for(int i=0; i<N; i++) {
			cin >> arr[i][0];
		}
		for(int i=0; i<N; i++) {
			cin >> arr[i][1];
		}
		for(int i=0; i<N; i++) {
			dp[i+1][0] = max(dp[i][0], dp[i][1] + arr[i][1]);
			dp[i+1][1] = max(dp[i][1], dp[i][0] + arr[i][0]);
		}
		cout << max(dp[N][0], dp[N][1]) << '\n';
	}
}
