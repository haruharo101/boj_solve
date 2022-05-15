#include <bits/stdc++.h>
using namespace std;

void fastio() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

int arr[105][105];
int dp[105][105];

int main() {
	fastio();
	int T;
	cin >> T;
	for(int i=1; i<15; i++) {
		arr[0][i] = i;
		if(i==1) dp[0][i] = i;
		else {
			dp[0][i] = i + dp[0][i-1];
		}
	}
	for(int i=1; i<15; i++) {
		for(int j=1; j<15; j++) {
			arr[i][j] = dp[i-1][j];
			if(j==1) {
				dp[i][j]=arr[i][j];
			} else {
				dp[i][j] = dp[i][j-1] + arr[i][j];
			}
		}
	}
	while(T--) {
		int K, N;
		cin >> K >> N;
		cout << arr[K][N] << '\n';
	}
	
}
