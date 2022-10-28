#include<iostream>
using namespace std;

int main(){
    int n,count=0,max=-99999;
    cin >> n;
    for(int i=0; i<n; i++){
        int exit,enter;
        cin >> exit >> enter;
        count-=exit;
        count+=enter;
        if(max < count)max = count;
    }
    cout << max << endl;
}