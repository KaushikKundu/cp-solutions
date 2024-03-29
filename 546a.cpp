#include<iostream>
using namespace std;
int main(){
    int n,k,w;
    cin >> k >> n >> w;
    int cost = k*w*(w+1)/2;
    int b = cost - n;
    if(b<0){
        cout << 0;
    }
    else{
        cout << b;
    }
}