#include <bits/stdc++.h>
using namespace std;

struct monHoc{
	string mmh;
	string tmh;
	int stc;
	double cc,kt,thi;
};

struct sinhVien {
	string msv;
	string name;
	string lop;
};

void nhapMonHoc(monHoc &n){
	cin >> n.mmh;
	cin.ignore();
	getline (cin,n.tmh);
	cin >> n.stc >> n.cc >> n.kt >> n.thi;
}

void nhapSinhVien (sinhVien &m){
	cin >> m.msv;
	cin.ignore();
	getline(cin,m.name);
	cin >> m.lop;
}



int main(){
	int n,m;
	cin >> m;
	struct monHoc a[n];
	struct sinhVien b[m];
	for (int i=0; i<m; i++){
		nhapSinhVien(b[i]);
		cin >> n;
		for (int j=0; j<n; j++){
			nhapMonHoc(a[j]);
		}
	}
	return 0;
}
