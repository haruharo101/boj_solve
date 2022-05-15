/* 
   CODE BY HARU_101
   github : haruharo101
*/

#include <bits/stdc++.h>
using namespace std;

void fastio() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

vector<bool> eratos() {
	vector<int> primes;
	vector<bool> state(123456*2+1, true);
	state[1]=false;
	for(int i=2; i*i<=123456*2; i++) {
		if(!state[i]) continue;
		for(int j=i*i; j<=123456*2; j+=i) {
			state[j]=false;
		}
	}
	for(int i=2; i<=123456*2; i++) {
		if(state[i]) primes.push_back(i);
	}
	return state;
}

int dp[300000];
int main() {
	fastio();
	vector<bool> p = eratos();
	dp[1]=0;
	for(int i=2; i<=123456*2; i++) {
		dp[i] = dp[i-1];
		if(p[i]) dp[i]++;
	}
	while(true) {
		int N;
		cin >> N;
		if(N==0) break;
		else {
			cout << dp[2*N]-dp[N] << '\n';
		}
	}
}
