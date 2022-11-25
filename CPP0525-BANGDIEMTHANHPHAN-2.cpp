#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv,ten,lop;
	double diem1,diem2,diem3;
};

void nhap (SinhVien &a){
	cin >> a.msv;
	cin.ignore();
	getline(cin,a.ten);
	cin >> a.lop >> a.diem1 >> a.diem2 >> a.diem3;
}

void in (SinhVien a){
	cout << a.msv << " " << a.ten << " " << a.lop << " " << fixed << setprecision(1) << a.diem1 << " " << a.diem2 << " " << a.diem3 << endl;
}

bool cmp (SinhVien a,SinhVien b){
	return a.ten < b.ten;
}

int main(){
	int n;cin >> n;
	SinhVien a[n];
	for (int i=0; i<n; i++) nhap(a[i]);
	sort (a,a+n,cmp);
	for (int i=0; i<n; i++){
		string s=to_string(i+1);
		cout << s << " ";
		in(a[i]);
	}
	return 0;
}
