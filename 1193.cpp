#include <bits/stdc++.h>
using namespace std;

void fastio() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

int main() {
	fastio();
	int X;
	cin >> X;
	int nowx = 1;
	int nowy = 1;
	int cnt=1;
	int axis=1;
	for(int k=1; k<X; k++) {
		if(axis%2==0) {
			if(nowx==1) {
				nowy=axis+1;
				nowx=1;
				axis++;
			} else {
				nowy++;
				nowx--;
			}
		} else {
			if(nowy==1) {
				nowx=axis+1;
				nowy=1;
				axis++;
			} else {
				nowy--;
				nowx++;
			}
		}
	}
	cout << nowy << '/' << nowx;
}
