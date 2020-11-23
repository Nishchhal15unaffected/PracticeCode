#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int temp[2];
for(int i=0;i<2;i++){
    temp[i]=arr[i];
}
int j;
for(j=0;j+2<5;j++){
    arr[j]=arr[j+2];
}
for(int i=0;i<2;i++){
    arr[j++]=temp[i];
}
for(int k=0;k<5;k++){
    cout<<arr[k];
}
}
