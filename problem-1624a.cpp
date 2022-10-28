#include<iostream>
using namespace std;
int maxim(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i])max=arr[i];
    }
    return max;
}
int minim(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i])min=arr[i];
    }
    return min;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        if(n==1)cout<<"0"<<endl;
        else if(n==2)cout<<abs(arr[0]-arr[1])<<endl;
        else {
            int max = maxim(arr,n);
            int min = minim(arr,n);
            cout << max-min << endl;
        }
    }
}