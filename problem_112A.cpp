#include<iostream>

using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    int flag = 0;

    for(int i=0; i<a.size(); i++){

        char aChar = tolower(a[i]);
        char bChar = tolower(b[i]);

        if(aChar > bChar){
            cout << "1" << endl;
            flag = 1;
            break;
        }
        else if(aChar < bChar){
            cout << "-1" << endl;
            flag = 1;
            break;
        }
        else {
            flag = 0;
        }
    }
    if(!flag) cout << "0" << endl;
}