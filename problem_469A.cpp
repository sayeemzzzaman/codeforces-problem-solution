#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n+1] = {0};
    int p;
    cin >> p;
    for(int i=1; i<=p; i++){
        int temp;
        cin >> temp;
        arr[temp]++;
    }
    int q;
    cin >> q;
    for(int i=1; i<=q; i++){
        int temp;
        cin >> temp;
        arr[temp]++;
    }

    for(int i=1; i<=n; i++){
        if(arr[i]==0){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}