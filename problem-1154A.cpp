#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int t=3;
    int max=-9999,flag;
    if(a>b && a>c && a>d)max=a;
    if(b>a && b>c && b>d)max=b;
    if(c>a && c>b && c>d)max=c;
    if(d>a && d>b && d>c)max=d;

    if(max == a){
        cout << max-b << " " << max-c << " " << max-d;
    }
    if(max == b){
        cout << max-a << " " << max-c << " " << max-d;
    }
    if(max == c){
        cout << max-a << " " << max-b << " " << max-d;
    }
    if(max == d){
        cout << max-a << " " << max-b << " " << max-c;
    }
}