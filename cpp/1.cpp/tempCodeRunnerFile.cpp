#include<iostream>
using namespace std;

void mergeArray(int *arr,int start ,int end)
{
    int mid =start +(end-start)/2;

    int len1=mid-start+1;
    int len2=end-mid;

    //creating the two sorted array 
    int *firstArray=new int[len1];
    int *secondArray=new int[len2];

    //copying element in new array 
    int mainArrayindex=start;
    for(int i=0;i<len1;i++)
    {
        firstArray[i]=arr[mainArrayindex+i];
    }

    mainArrayindex=mid+1;
    for(int j=0;j<len2;j++)
    {
        secondArray[j]=arr[mainArrayindex+j];
    }
    //merging two new array to one 

    int index1=0;
    int index2=0;
    int MAinArrayindex=start;
    if(index1 < len1 && index2 <len2)
    {
        if(firstArray[index1] <= secondArray[index2])
        {
            arr[MAinArrayindex]=firstArray[index1++];
        }
        else 
        {
            arr[MAinArrayindex]=secondArray[index2++];
        }
        MAinArrayindex++;
    }
    while(index1 < len1)
    {
        arr[MAinArrayindex++]=firstArray[index1++];
    }

    while(index2 <len2)
    {
        arr[MAinArrayindex++]=secondArray[index2++];
    }
}

void mergeSort(int *arr, int start, int end)
{
    //base case
    if(start>=end)
        return ;//array is sorted 
    int mid =start +(end-start)/2;
    ///left sort
    mergeSort(arr,start,mid);

    //right sort
    mergeSort(arr,mid+1,end);

    //merge two array function 
    mergeArray(arr,start,end);
}
int main()
{
    int arr[6]={0};
    cout << "enter the array " <<endl;
    for(int i=0;i<6;i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    mergeSort(arr,0,5);
    cout << "sorted array : ";
    for(int i=0;i<6;i++)
    cout << arr[i] <<" ";
    
}