#include <bits/stdc++.h>
using namespace std;

int cnt=0;
class NhanVien{
	private:
		string ma,ten,gt,ns,dc,mst,hd;
	public:
		friend istream& operator >> (istream&,NhanVien&);
		friend ostream& operator << (ostream&,NhanVien);
};

istream& operator >> (istream& in,NhanVien& a){
	++cnt;
	string s=to_string(cnt);
	while (s.size()<5){
		s="0"+s;
	}
	a.ma=s;
	in.ignore();
	getline(in,a.ten);
	in >> a.gt >> a.ns;
	in.ignore();
	getline(in,a.dc);
	in >> a.mst >> a.hd;
	return in;
}

ostream& operator << (ostream& out,NhanVien a){
	out << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl;
	return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
