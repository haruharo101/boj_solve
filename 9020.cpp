#include <bits/stdc++.h>
using namespace std;

void fastio() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

vector<bool> eratos() {
	vector<int> primes;
	vector<bool> state(10001, true);
	for(int i=2; i*i<=10000; i++) {
		if(!state[i]) continue;
		for(int j=i*i; j<=10000; j+=i) {
			state[j]=false;
		}
	}
	return state;
}
int main() {
	fastio();
	vector<bool> p = eratos();
	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		int cha = 999999999;
		int l = 0;
		int r = 0;
		for(int i=2; i<=N/2; i++) {
			int k = i;
			if(p[k] && p[N-k] && (abs(k-(N-k)) <= cha)) {
				l = k;
				r = N-k;
				cha = abs(k-(N-k));
			}
		} 
		cout << l << ' ' << r << '\n';
	}
}
