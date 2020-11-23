#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0){
            return false;
        }
    }
        return true;
}
int main(){
    int T;
    cin>>T;
    while(T--){
int N;
cin>>N;
if(isprime(N)){
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}
    }
}
