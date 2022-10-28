#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    string arr;
    cin >> arr;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]=='1')sum+=a;
        else if(arr[i]=='2')sum+=b;
        else if(arr[i]=='3')sum+=c;
        else if(arr[i]=='4')sum+=d;
    }
    cout << sum;
}