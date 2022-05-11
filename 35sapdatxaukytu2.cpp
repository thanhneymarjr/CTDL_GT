#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
string s;
int d;
int cnt[400];
bool cmp(int x, int y) {
	return x > y;
}
 
void solve() {
	int i = 0, check = 0;
	while (cnt[i] != 0) {
		int time = cnt[i];
		for (int j = 0; j < time; j++) {
			if ((i + (j * d)) >= s.length()) {
				check = 1;
				break;
			}
		}
		if (check == 1)
			break;
		i++;
	}
	if (check == 0) {
		cout << 1 << endl;
	}
	else
		cout << -1 << endl;
}
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> d >> s;
		memset(cnt, 0, 400);
		for (int i = 0; i < s.length(); i++) {
			cnt[s[i] - '\0']++;
		}
		sort(cnt, cnt + 400, cmp);
		solve();
	}
}
