#include <bits/stdc++.h>
using namespace std;

struct Nguoi{
	string ten,ns;
};

bool cmp (Nguoi a,Nguoi b){
	string s1=a.ns;string s2=b.ns;
	int ng1=(s1[0]-'0')*10+s1[1]-'0'; int t1=(s1[3]-'0')*10+s1[4]-'0'; int n1=stoi(s1.substr(6));
	int ng2=(s2[0]-'0')*10+s2[1]-'0'; int t2=(s2[3]-'0')*10+s2[4]-'0'; int n2=stoi(s2.substr(6));
	if (n1!=n2) return n1>n2;
	if (t1!=t2) return t1>t2;
	return ng1>ng2;
}

int main(){
	int n;cin >> n;
	Nguoi a[n];
	for (int i=0; i<n; i++) cin >> a[i].ten >> a[i].ns;
	sort (a,a+n,cmp);
	cout << a[0].ten << endl << a[n-1].ten;
	return 0;
}
