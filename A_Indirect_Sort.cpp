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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        int flag = 0;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            if(i==0){
                if(temp == 1){
                    flag++;
                }
            }  
        } 
        
        if(flag==1){
            cout<<"Yes"<<"\n";
        }else{
            cout<<"No"<<"\n";
        }
    }
	return 0;
}