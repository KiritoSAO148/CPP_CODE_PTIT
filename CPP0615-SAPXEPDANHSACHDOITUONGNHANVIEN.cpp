#include <bits/stdc++.h>
using namespace std;

int cnt=0;
class NhanVien{
	private:
		string ma,ten,gt,ns,dc,mst,hd;
	public:
		friend istream& operator >> (istream&,NhanVien&);
		friend ostream& operator << (ostream&,NhanVien);
		string getNs(){
			return ns;
		}
};

istream& operator >> (istream& in,NhanVien &a){
	++cnt;
	string s=to_string(cnt);
	while(s.size()<5){
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

bool cmp (NhanVien a,NhanVien b){
	string s1=a.getNs();
	string s2=b.getNs();
	int ng1=(s1[3]-'0')*10+s1[4]-'0'; int t1=(s1[0]-'0')*10+s1[1]-'0'; int n1=stoi(s1.substr(6));
	int ng2=(s2[3]-'0')*10+s2[4]-'0'; int t2=(s2[0]-'0')*10+s2[1]-'0'; int n2=stoi(s2.substr(6));
	if (n1!=n2) return n1<n2;
	if (t1!=t2) return t1<t2;
	return ng1<ng2;
}

void sapxep (NhanVien a[],int n){
	sort(a,a+n,cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
