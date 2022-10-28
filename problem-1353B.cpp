#include<iostream>
using namespace std;

int max(int arr[], int n){
    int max=-99999,index=0;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
            index = i;
        }
    }
    return index;
}
int min(int arr[], int n){
    int min=99999,index=0;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
            index = i;
        }
    }
    return index;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int arr1[n],arr2[n];
        for(int i=0; i<n; i++)cin >> arr1[i];//1 2
        for(int i=0; i<n; i++)cin >> arr2[i];//3 4
        while(k!=0){
            int maxIndex = max(arr2,n);// 4
            int maxArr1 = min(arr1,n); //1
            if(arr2[maxIndex]>arr1[maxArr1]){
                arr1[maxArr1] = arr2[maxIndex];
                arr2[maxIndex] = 0;
                k--;
            }
            else break; 
        }
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=arr1[i];
        }
        cout << sum << endl;
    }
}