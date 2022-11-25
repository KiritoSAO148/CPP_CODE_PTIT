#include <bits/stdc++.h>
#define present(t, x) (t.find(x) != t.end())
using namespace std;

int tong(int n){
	int res = 0;
	while(n){
		res += n % 10;
		n/=10;
	}
	return res;
}
 
int sum(string s){
	int res = 0;
	for(char x : s){
		res += x-'0';
	}
	return res;
}

set<int> mm;

void init(){
	mm.insert(9);
	for(int i = 1; i <= 1000; i++){
		if(mm.find(tong(i)) != mm.end()){
			mm.insert(i);
		}
	}
}

int main(){
	init();
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int tong=sum(s);
		if (present(mm,tong)) cout << "1";
		else cout << "0";
		cout << endl;
	}
	return 0;
}
