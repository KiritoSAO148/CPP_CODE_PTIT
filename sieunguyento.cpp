#include <iostream>
#include <cmath>

bool nt (int n)
{
    if (n == 1)
        return false;
 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
 
    return true;
}

bool check (int n)
{
    do 
    {
    	n/=10;
        if (nt(n) == false)
            return false;
    } while (n != 0);
    return true;
}


int main()
{
    int n; scanf("%d", &n);
    if (check(n)==true)
        printf("%d La so sieu nguyen to", n);
    else
        printf("%d khong phai La so sieu nguyen to", n);
    return 0;
}
