#include <bits/stdc++.h>
using namespace std;

#define int long long

int ceil2(int a, int b){
    int c = a / b;
    if (c * b < a) c++;
    return c;
}

//Swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

signed main()
{
    int n, k;
    cin>>n>>k;
    int red = n*2;
    int green = n*5;
    int blue = n*8;
    int total = ceil2(red,k) + ceil2(green,k) + ceil2(blue,k);
    cout<<total;
	return 0;
}