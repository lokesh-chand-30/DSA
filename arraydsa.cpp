#include<iostream>
using namespace std;

void reverse(int arr[5],int start, int stop)
{
    while(start<stop)
    {
        swap(arr[start],arr[stop]);
    
        start++;
        stop--;
   
    }

}


int main()
{

    int arr[5]={1,2,3,4,5};
    int size=5;
   int start=0;
   int stop=size-1; 
   reverse(arr,start,stop);
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<endl;
    }

}