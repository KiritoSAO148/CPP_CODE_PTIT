#include <bits/stdc++.h>
using namespace std;

struct MatHang{
	int ma;
	string ten,nhom;
	double mua,ban;
	double loiNhuan;
};

void nhap (MatHang a[],int n){
	for (int i=0; i<n; i++){
		a[i].ma=i+1;
		cin.ignore();
		getline(cin,a[i].ten);
		getline(cin,a[i].nhom);
		cin >> a[i].mua >> a[i].ban;
		a[i].loiNhuan=a[i].ban-a[i].mua;
	}
}

void in (MatHang a[],int n){
	for (int i=0; i<n; i++){
		cout << a[i].ma << " " << a[i].ten << " " << a[i].nhom << " " << fixed << setprecision(2) << a[i].loiNhuan << endl;
	}
}

bool cmp (MatHang a,MatHang b){
	return a.ban-a.mua>b.ban-b.mua;
}

int main(){
	int n; cin >> n;
	MatHang a[n];
	nhap (a,n);
	sort (a,a+n,cmp);
	in (a,n);
	return 0;
}
