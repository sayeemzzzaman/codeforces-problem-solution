#include<iostream>
using namespace std;
int main(){
    int t,n,flag=0;
    cin >> t >> n;
    t = t/2+1;
    for(int j=0; j<t; j++){
        for(int i=0; i<n; i++){
            cout << "#";
        }
        cout << endl;
        
        if(j!=t-1){
            int check=0;
            for(int i=0; i<n; i++){ 
            if(i==n-1 && flag==0 && check==0){
                cout<<"#";
                flag=1;
            }
            else if(i==0 && flag==1){
                cout<<"#";
                flag=0;
                check = 1;
            }
            else cout << ".";
            }
        }
        cout << endl;
        
    }
}