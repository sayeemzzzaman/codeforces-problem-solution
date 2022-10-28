#include<iostream>
using namespace std;

int l,r;
int max(int arr[], int n){
    int max = -999999,index;
    //for(int i=0;i<n;i++){
        if(l<r){
            if(arr[l]<arr[r] && r>=0){
            max = arr[r];
            index = r;
            r--;
            }
            else if(arr[l]>arr[r] && l<=n){
                max = arr[l];
                index = l;
                l++;
            }
        }
        
    //}
    arr[index] = 0;
    return max;
}
int main(){
    int n;
    cin >> n;
    l=0,r=n-1;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count1=0,count2=0,flag=0;
    while(true){
        int m = max(arr,n);
        if(m!=0){
            if(flag==0){
                count1+=m;
                flag=1;
            }else if(flag==1){
                count2+=m;
                flag=0;
            }
        }else break;
    }
    cout << count1 << " " << count2 << endl;
}