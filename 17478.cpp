#include <bits/stdc++.h>
using namespace std;

void fastio() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

void underbar(int k) {
	for(int i=0; i<k; i++) {
		cout << "____";
	}
}

void ans(int cur, int A) {
	if(cur < A) {
		underbar(cur);
		cout << "\"����Լ��� ������?\"\n";
		underbar(cur);
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		underbar(cur);
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		underbar(cur);
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		ans(cur+1, A);
		underbar(cur);
		cout << "��� �亯�Ͽ���.\n";
	} else if(cur == A) {
		underbar(cur);
		cout << "\"����Լ��� ������?\"\n";
		underbar(cur);
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		underbar(cur);
		cout << "��� �亯�Ͽ���.\n";
	} else {
		return;
	}
}
int main() {
	int N;
	cin >> N;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n"; 
	ans(0, N);
}
