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
		//bool operator < (SinhVien another){
		//	return this->lop < another.lop;
		//}
};

istream& operator >> (istream& in, SinhVien &a){
	in >> a.msv;
	in.ignore();
	getline(in,a.name);
	in >> a.lop >> a.mail;
	return in;
}

ostream& operator << (ostream& out, SinhVien a){
	out << a.msv << " " << a.name << " " << a.lop << " " << a.mail;
	return out;
}

bool cmp (SinhVien a,SinhVien b){
	return a.getLop() < b.getLop();
}

int main(){
	int n;
	cin >> n;
	SinhVien a[n];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	sort (a,a+n,cmp);
	for (int i=0; i<n; i++){
		cout << a[i] << endl;
	}
	return 0;
}
