#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv,name,lop,ns;
	float gpa;
};

void nhapThongTinSV (SinhVien &a){
	a.msv="N20DCCN001";
	getline (cin,a.name);
	cin >> a.lop >> a.ns >> a.gpa;
	if (a.ns[1]=='/') a.ns="0"+a.ns;
	if (a.ns[4]=='/') a.ns.insert(3,"0");
}

void inThongTinSV (SinhVien a){
	cout << a.msv << " " << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) <<  a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
