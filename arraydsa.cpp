#include<iostream>
using namespace std;



void Changearr(int arr[3], int size)
{
    for(int i=0; i<size; i++)
    {
        arr[i]= 2*arr[i];
    }
    cout<<"hi";
}
int main()
{
int arr[3]={2,4,6};
Changearr(arr,3);
cout<<"In main"<<endl;
for(int i=0; i<3; i++)
{
    cout<<arr[i];
}





}