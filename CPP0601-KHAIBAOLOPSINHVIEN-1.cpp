#include <bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string msv,ten,lop,ns;
		float gpa;
	public:
		SinhVien(){
			msv=ten=lop=ns="";
			gpa=0;
		}
		void nhap(){
			msv="B20DCCN001";
			getline(cin,ten);
			cin >> lop >> ns;
			if (ns[1]=='/') ns="0"+ns;
			if (ns[4]=='/') ns.insert(3,"0");
			cin >> gpa;
		}
		void xuat(){
			cout << msv << " " << ten << " " << lop << " " << ns << " " << fixed << setprecision(2) << gpa;
		}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
