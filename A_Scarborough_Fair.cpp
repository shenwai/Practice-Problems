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
    int n,m,l,r;
    cin>>n;
    cin>>m;
    char c1, c2;
    vector<char> str;

    for(int i=0; i<n; i++){
        char temp;
        cin>>temp;
        str.push_back(temp);
    }
    
    for(int i=0; i<m; i++){

         cin>>l>>r;
         cin>>c1;
         cin>>c2;
         

         for(int k=l; k<=r; k++){
            if(str[k-1] == c1){
                str[k-1] = c2;
            }
         }

        
    }

    for(int j=0; j<n; j++){
           cout<<str[j];
        }
	return 0;
}