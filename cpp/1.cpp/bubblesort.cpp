#include<iostream>
using namespace std;


void bubblesort(int *arr,int size)
{
    //base case -- when array is sorted 
    if(size==0 || size==1)
    {
        return ;
    }
  //processing solving ith round
  for(int i=0; i <size-1; i++)
  {
    if(arr[i] > arr[i+1])
    {
        swap(arr[i],arr[i+1]);
    }
  }
  //recursive call
  bubblesort(arr,size-1);
}
int main()
{
    int arr[6]={0};
    cout << "enter the array " <<endl;
    for(int i=0;i<6;i++)
    {
        cin >> arr[i];
    }

    bubblesort(arr,6);
    // print the array
    cout << "sorted array"<<endl;
    for(int i=0;i<6;i++)
    {
        cout << arr[i] <<"  ";
    }
}