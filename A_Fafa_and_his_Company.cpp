#include <bits/stdc++.h>
using namespace std;


//Swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

signed main()
{
    int n;
    cin>>n;
    vector<int> factors;
    for(int i=2; i<n; i++){
        if(n%i==0){
            factors.push_back(i);
        }
    }

    cout<<factors.size()+1;
	return 0;
}