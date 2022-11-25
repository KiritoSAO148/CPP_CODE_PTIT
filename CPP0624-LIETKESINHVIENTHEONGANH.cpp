#include <bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string msv,name,lop,mail;
	public:
		friend istream& operator >> (istream&,SinhVien&);
		friend ostream& operator << (ostream&,SinhVien);
		string getLop(){
			return this->lop.substr(5,2);
		}
		string getLop2(){
			return this->lop.substr(0,1);
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

void vietHoa (string &s){
	for (int i=0; i<s.size(); i++){
		s[i]=toupper(s[i]);
	}
}

int main(){
	int n;cin >> n;
	SinhVien a[n];
	for (int i=0; i<n; i++) cin >> a[i];
	int q;cin >> q;
	while (q--){
		string s;cin >> s;
		vietHoa(s);
		string tmp="";
		tmp+=s.substr(0,1);
		tmp+=s.substr(2,1);
		for (int i=0; i<n; i++){
			if (tmp=="CN" || tmp=="AT"){
				if (a[i].getLop2()!="E") cout << a[i] << endl;
			}else if (a[i].getLop()==tmp) cout << a[i] << endl;
		}
	}
	return 0;
}
