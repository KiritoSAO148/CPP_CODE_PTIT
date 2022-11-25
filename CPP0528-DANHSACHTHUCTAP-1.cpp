#include <bits/stdc++.h>
using namespace std;

int cnt=0;
struct SinhVien{
	int stt;
	string msv,ten,lop,mail,dn;
};

void nhap (SinhVien a[], int n){
	for (int i=0; i,n; i++){
		++cnt;
		cin >> a[i].msv;
		cin.ignore();
		getline(cin,a[i].ten);
		cin >> a[i].lop >> a[i].mail >> a[i].dn;
	}
}

void in (SinhVien a){
	cout << cnt << " " << a.msv << " " << a.ten << " " << a.lop << " " << a.mail << " " << a.dn << endl;
}

int main(){
	int n;cin >> n;
	SinhVien a[n];
	nhap(a,n);
	int q;cin >> q;
	while (q--){
		string s;cin >> s;
		for (int i=0; i<n; i++){
			if (a[i].dn.find(s) != string::npos){
				in(a[i]);
			}
		}
	}
	return 0;
}
