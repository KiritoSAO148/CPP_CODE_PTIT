#include <bits/stdc++.h>
using namespace std;

int cnt=0;
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

istream& operator >> (istream& in,SinhVien& a){
	++cnt;
	string tmp=to_string(cnt);
	while (tmp.size()<3) tmp="0"+tmp;
	a.ma="B20DCCN"+tmp;
	in.ignore();
	getline(in,a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	if (a.ns[1]=='/') a.ns="0"+a.ns;
	if (a.ns[4]=='/') a.ns.insert(3,"0");
	return in;
}

ostream& operator << (ostream& out,SinhVien a){
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
