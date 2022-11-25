#include <bits/stdc++.h>
using namespace std;

bool check (string s){
	if (s.size()<2) return false;
	string t=s;
	reverse (s.begin(),s.end());
	return t==s;
}

bool cmp (string a,string b){
	return (a.size() != b.size() ? a.size() > b.size() : a>b);
}

int main(){
	int j=0;
	while (cin){
		cin >> x;
		if (check(x)){
			if (a[j]==x) j++;
		}
	}
	sort ()
	return 0;
}
