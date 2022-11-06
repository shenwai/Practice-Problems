#include <bits/stdc++.h>
using namespace std;


//Swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int n;
    cin>>n;
    int yes=0;
    int no=0;
    char temp2;

    for(int i=0; i<n; i++){

        char temp;
        cin>>temp;
        if(i==0){
            temp2 = temp; 
            continue;
        }
        
        if(temp == temp2){
            continue;
        }else{
            if(temp2 == 'S'){
                yes++;
                temp2 = temp;
            }else if(temp2=='F'){
                no++;
                temp2 = temp;
            }
        }
    }

    if(yes>no){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

	return 0;
}