#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n for the ndigit line";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n+i;j++){
            if(i==j || j>i){
                cout<<"*" ; 
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    }
    
****
 ****
  ****
   ****
