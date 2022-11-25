#include <bits/stdc++.h>
using namespace std;

bool check (string s){
	int m=s.length();
	int tong_chan=0;
	int tong_le=0;
	for (int i=0; i<m; i++){
		if (i%2==0){
			tong_chan+=s[i]-'0';
		}else{
			tong_le+=s[i]-'0';
		}
	}
	int hieu=tong_le-tong_chan;
	if (hieu%11==0){
		return true;
	}else{
		return false;
	}
}

int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		if (check(s)){
			cout << "1" << endl;
		}else{
			cout << "0" << endl;
		}
	}
	return 0;
}
