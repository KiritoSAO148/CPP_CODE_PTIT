#include<bits/stdc++.h>
using namespace std;
class thoigian
{
    private:
    int ngay;
    int gio;
    public:
        thoigian(int x,int y)
        {
            this->ngay=x;
            this->gio=y;
        }
        thoigian()
        {
            this->ngay=0;
            this->gio=0;
        }
        void nhapbp()
        {
            cin>>this->ngay;
            cin>>this->gio;
        }
        void xemmh()
        {
            cout<<this->ngay<<" ";
            cout<<this->gio<<"\n";
        }
        void rutgon()
        {
            this->ngay=this->ngay + (this->gio /24);
            this->gio=this->gio%24;
        }
        friend thoigian operator + (thoigian a, thoigian b)
        {
            thoigian c(1,1);
            c.ngay=a.ngay+b.ngay;
            c.gio=a.gio+b.gio;
            c.rutgon();
            return c;
        }
        friend thoigian operator - (thoigian a, thoigian b)
        {
            thoigian c(1,1);
            a.rutgon();
            b.rutgon();
            if( a.ngay<b.ngay || a.ngay==b.ngay && a.gio<b.gio ) 
            swap(a,b);
            c.ngay=a.ngay-b.ngay;
            if(a.gio<b.gio)
            {c.ngay-=1;
            c.gio=a.gio-b.gio + 24;}
            else c.gio=a.gio-b.gio;
            return c;
        }
        friend thoigian operator * (thoigian a, int x)
        {
            thoigian c(1,1);
            c.ngay=a.ngay*x;
            c.gio=a.gio*x;
            c.rutgon();
            return c;
        }
        friend thoigian operator / (thoigian a, int x)
        {
            thoigian c(1,1);
            c.ngay=0;
            c.gio= (a.ngay*24+a.gio)/x;
            c.rutgon();
            return c;
        }
};
int main()
{
    thoigian a,b(2,10),c;
    a.nhapbp(); a.rutgon(); a.xemmh();
    
    c=a+b; c.xemmh(); c=a-b; c.xemmh();
    c=a*2; c.xemmh(); c=a/2; c.xemmh();

}