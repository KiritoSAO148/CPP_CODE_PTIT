#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
	string mnv, name, gioiTinh, date, diaChi, masothue, date2;
};

void nhap (NhanVien &a){
	a.mnv = "00001";
	getline(cin,a.name);
	cin >> a.gioiTinh >> a.date;
	cin.ignore();
	getline(cin,a.diaChi);
	cin >> a.masothue >> a.date2;
}

void in (NhanVien a){
	cout << a.mnv << " " << a.name << " " << a.gioiTinh << " " << a.date << " " << a.diaChi << " " << a.masothue << " " << a.date2;
}

int main(){
	struct NhanVien a;
	nhap(a);
	in(a);
	return 0;
}
