#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
const int MOD = (int) 1e9+7;

struct DanhBa{
	string ten;
	string name;
	string ngay;
	string sdt;
};

int cmp (DanhBa a, DanhBa b){
	if (a.ten!=b.ten) return a.ten<b.ten;
	return a.name<b.name;
}

int main(){
	// #ifndef ONLINE_JUDGE
 //  	freopen("input.txt", "r", stdin);
 //  	freopen("output.txt", "w", stdout);
 //  	#endif
	FastIO;
	ifstream f1;
	f1.open("SOTAY.txt");
	string s, date;
	DanhBa a[1001];
	int i=0;
	while (getline(f1,s)){
		if (s[7]=='/'){
			date=s;
			date=date.substr(6,15);
		}else{
			a[i].name=s;
			getline(f1,a[i].sdt);
			a[i].ngay=date;
			stringstream ss(a[i].name);
			while (ss>>a[i].ten) continue;
			++i;
		}
	}
	f1.close();
	sort(a,a+i,cmp);
	ofstream f2;
	f2.open("DIENTHOAI.txt");
	for (int j=0; j<i; j++) f2 << a[j].name << ": " << a[j].sdt << " " << a[j].ngay << "\n";
	f2.close();
	return 0;
}