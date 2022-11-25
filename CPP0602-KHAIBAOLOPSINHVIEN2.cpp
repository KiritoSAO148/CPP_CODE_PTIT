#include <bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma, ten, lop, ns;
		double gpa;
	public:
		SinhVien(){
			ma = ten = lop = ns = "";
			gpa = 0;
		}
		friend ostream& operator << (ostream& , SinhVien );
		friend istream& operator >> (istream& , SinhVien&);
};
 
ostream& operator << (ostream& out, SinhVien a){
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}
 
istream& operator >> (istream& in, SinhVien &a){
	a.ma = "B20DCCN001";
	getline(in, a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	if(a.ns[2] != '/') a.ns = "0" + a.ns;
	if(a.ns[5] != '/') a.ns.insert(3, "0");
	return in;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
