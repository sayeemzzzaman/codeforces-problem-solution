#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a==b)cout<<pow((a+a),2)<<endl;
        else if(a<b){
            int x = a+a;
            if(x>=b)cout<<pow(x,2)<<endl;
            else cout<< pow(b,2)<<endl;
        }
        else {
            int x = b+b;
            if(x>=a)cout<<pow(x,2)<<endl;
            else cout<<pow(a,2)<<endl;
        }
    }
}