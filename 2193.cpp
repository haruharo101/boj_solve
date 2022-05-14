#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastio() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

pair<int, int> p[50];
ll dp[50];
int main() {
	fastio();
	int N;
	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> p[i].first >> p[i].second;
	}
	for(int i=0; i<N; i++) {
		if(i!=0) {
			dp[i] = max(dp[i-1], dp[i]);
		}
		dp[i+p[i].first] = max(dp[i+p[i].first], dp[i] + p[i].second);
	}
	ll a=0;
	for(int i=0; i<=N; i++) {
		a = max(a, dp[i]);
	}
	cout << a;
}
