#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	char s;
	cin >> n;
	int a = 0, d = 0;
	for(int i = 0; i < n; i++){
		cin >> s;
		if(s == 'A'){
			a++;
		} else{
			d++;
		}
	}
	if(a == d){
		cout << "Friendship";
	} else if(a > d){
		cout << "Anton";
	} else{
		cout << "Danik";
	}
	cout << "\n";
	return 0;
}
