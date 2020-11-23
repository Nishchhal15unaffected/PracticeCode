#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int d;
    cin>>d;
    int temp;
    for(int i=0;i<d;i++){
        temp=arr[0];
        for(int j=0;j<5;j++){
            arr[j]=arr[j+1];
        }
        arr[4]=temp;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}
