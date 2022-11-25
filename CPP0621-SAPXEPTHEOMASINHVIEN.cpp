#include <bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string msv,name,lop,mail;
	public:
		friend istream& operator >> (istream&,SinhVien&);
		friend ostream& operator << (ostream&,SinhVien);
		bool operator < (SinhVien another){
			return this->msv < another.msv;
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
	vector<SinhVien>v;
	SinhVien tmp;
	while (cin>>tmp){
		v.push_back(tmp);
	}
	sort (v.begin(),v.end());
	for (SinhVien x : v)
		cout << x << endl;
	return 0;
}
