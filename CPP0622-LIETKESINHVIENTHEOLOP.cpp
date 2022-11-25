#include <bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string msv,name,lop,mail;
	public:
		friend istream& operator >> (istream&,SinhVien&);
		friend ostream& operator << (ostream&,SinhVien);
		string getLop(){
			return this->lop;
		}
};

istream& operator >> (istream& in,SinhVien& a){
	in >> a.msv;
	in.ignore();
	getline(in,a.name);
	in >> a.lop >> a.mail;
	return in;
}

ostream& operator << (ostream& out,SinhVien a){
	out << a.msv << " " << a.name << " " << a.lop << " " << a.mail;
	return out;
}

int main(){
	int n;
	cin >> n;
	SinhVien a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	int q;
	cin >> q;
	while (q--){
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
		for (int i=0; i<n; i++){
			if (a[i].getLop()==s){
				cout << a[i] << endl;
			}
		}
	}
	return 0;
}
