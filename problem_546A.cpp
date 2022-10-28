#include<iostream>

using namespace std;

int main(){
    int firstBananaCost,dollarHave,bananaWant,totalCost=0;

    cin >> firstBananaCost >> dollarHave >> bananaWant;

    for(int i=1; i<=bananaWant; i++){
        totalCost = totalCost + (firstBananaCost*i);
    }
    int output = totalCost - dollarHave;

    if(output<0) cout << "0" << endl;
    else cout << output << endl;
}