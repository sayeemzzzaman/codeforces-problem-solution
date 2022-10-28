#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        if(num>999)cout<<(num/1000)*10<<endl;
        else if(num>99)cout<<(((num/100)-1)*10)+6<<endl;
        else if(num>9)cout<<(((num/10)-1)*10)+3<<endl;
        else cout<<((num-1)*10)+1<<endl;
    }
}
/*
int MIN = INT_MAX;
int MAX = INT_MIN;
for (int i = 0; i < n; ++i) {
    MIN = min(MIN, a[i]);
    MAX = max(MAX, a[i]);
}
cout << MAX - MIN << '\n';

*/