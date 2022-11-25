#include<bits/stdc++.h>
using namespace std;

class DoanhNghiep{
	private:
		string ma,ten;
		int num;
	public:
		friend istream& operator >> (istream&,DoanhNghiep&);
		friend ostream& operator << (ostream&,DoanhNghiep);
		int getNum(){
			return this->num;
		}
		string getMa(){
			return this->ma;
		}
};

istream& operator >> (istream& in,DoanhNghiep& a){
	in >> a.ma;
	in.ignore();
	getline(in,a.ten);
	in >> a.num;
	return in;
}

ostream& operator << (ostream& out,DoanhNghiep a){
	out << a.ma << " " << a.ten << " " << a.num;
	return out;
}

bool cmp (DoanhNghiep a,DoanhNghiep b){
	if (a.getNum() == b.getNum())
		return 	a.getMa() < b.getMa();
	return a.getNum() > b.getNum();
}

int main(){
	int n;cin >> n;
	DoanhNghiep a[n];
	for (int i=0; i<n; i++) cin >> a[i];
	sort (a,a+n,cmp);
	int q;cin >> q;
	while (q--){
		int x,y; cin >> x >> y;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << x << " DEN " << y << " SINH VIEN:" << endl;
		for (int i=0; i<n; i++){
			if (a[i].getNum() >= x && a[i].getNum() <= y) cout << a[i] << endl;
		}
	}
	return 0;
}
