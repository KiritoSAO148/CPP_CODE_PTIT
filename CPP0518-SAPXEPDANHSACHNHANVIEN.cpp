#include <bits/stdc++.h>
using namespace std;

int cnt=0;
struct NhanVien{
	string ma,ten,gt,ns,dc,mst,hd;
};

void nhap (NhanVien &a){
	++cnt;
	string s=to_string(cnt);
	while (s.size()<5){
		s="0"+s;
	}
	a.ma=s;
	cin.ignore();
	getline(cin,a.ten);
	cin >> a.gt >> a.ns; 
	cin.ignore();
	getline(cin,a.dc);
	cin >> a.mst >> a.hd;
}

void inds (NhanVien a[],int n){
	for (int i=0; i<n; i++){
		cout << a[i].ma << " " << a[i].ten << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].mst << " " << a[i].hd << endl;
	}
}

bool cmp (NhanVien a,NhanVien b){
	string s1=a.ns,s2=b.ns;
	int ng1=(s1[3]-'0')*10+s1[4]-'0';int t1=(s1[0]-'0')*10+s1[1]-'0';int n1=stoi(s1.substr(6));
	int ng2=(s2[3]-'0')*10+s2[4]-'0';int t2=(s2[0]-'0')*10+s2[1]-'0';int n2=stoi(s2.substr(6));
	if (n1!=n2) return n1<n2;
	if (t1!=t2) return t1<t2;
	return ng1<ng2;
}

void sapxep (NhanVien a[],int n){
	sort(a,a+n,cmp);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
