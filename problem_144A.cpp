#include<iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    int min = 9999,max = -9999,minIndex,maxIndex;
    for(int i=1; i<=n;i++){
        int a;
        cin >> a;
        if(min>=a){
            min = a;
            minIndex = i;
        }
        if(max<a){
            max=a;
            maxIndex = i;
        }
    }
    if(maxIndex>minIndex){
        cout << (maxIndex-1) + (n-minIndex)-1;
    }
    else{
        cout << (maxIndex-1) + (n-minIndex);
    }
    
}