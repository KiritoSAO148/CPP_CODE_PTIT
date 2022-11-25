#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
	string msv;
	string name;
	string lop;
	string date;
	float gpa;
};

void nhap (SinhVien &a){
	a.msv="B20DCCN001";
	getline (cin,a.name);
	cin >> a.lop >> a.date >> a.gpa;
}

void in (SinhVien a){
	cout << a.msv << " " << a.name << " " << a.lop;
	if (a.date[1]=='/') a.date="0"+a.date;
	if (a.date[4]=='/') a.date.insert(3,"0");
	cout << " " << a.date << " " << fixed << setprecision(2) << a.gpa;
}

int main(){
	struct SinhVien a;
	nhap(a);
	in(a);
	return 0;
}
