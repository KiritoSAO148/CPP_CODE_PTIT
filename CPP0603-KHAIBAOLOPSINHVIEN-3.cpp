#include <bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string ma,ten,lop,ns;
		float gpa;
	public:
		SinhVien(){
			ma=ten=lop=ns="";
			gpa=0;
		}
		friend istream& operator >> (istream&,SinhVien&);
		friend ostream& operator << (ostream&,SinhVien);
};

string chuanHoa (string &s){
	string tmp;
	string res="";
	stringstream ss(s);
	while (ss >> tmp){
		res+=toupper(tmp[0]);
		for (int i=1; i<tmp.size(); i++){
			res+=tolower(tmp[i]);
		}
		res+=" ";
	}
	res.erase(res.size()-1);
	return res;
}

istream& operator >> (istream& in,SinhVien &a){
	a.ma="B20DCCN001";
	getline(in,a.ten);
	a.ten=chuanHoa(a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	if (a.ns[1]=='/') a.ns="0"+a.ns;
	if (a.ns[4]=='/') a.ns.insert(3,"0");
	return in;
}

ostream& operator << (ostream& out,SinhVien a){
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
	return out;
}

#define a() a

int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
