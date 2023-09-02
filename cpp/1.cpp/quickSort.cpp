#include<iostream>
using namespace std;

int parition(int arr[],int start , int end)
{
    //pivot element
    int pivot=arr[start];

    //for element less then pivot
    int count=0; 
    for(int i=start+1;i<=end ;i++)
    {
        if(arr[i] <= pivot)
        count++;
    }

    //moving pivot to right position
    int pivotindex=start+count;
    swap(arr[pivotindex],arr[start]);

    //moving all the element less than pivot to left and greater to right
    int i=start,j=end;
    while(i< pivotindex && j>pivotindex){

        while(arr[i]<=pivot)
        {
            i++;
        }

        while(arr[j] >= pivot)
        {
            j--;
        }
         if(i< pivotindex && j>pivotindex)
            
                {
                    swap(arr[i++],arr[j--]);
                }
        }
        return pivotindex;
}



void quickSort(int arr[],int start,int end)
{
    //base case
    if(start>=end){
    return ;
    }
    //parition part for pivot element
    int p = parition(arr,start,end);
    // left sort
    quickSort(arr,start,p-1);

    //right sort
    quickSort(arr,p+1,end);
}
int main()
{
    // int arr[6];
    // cout << "enter the array:" <<endl;
    // for(int i=0;i<6 ;i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << endl;
    int arr[6]={3,5,1,8,2,4};

    quickSort(arr,0,5);
    cout << "sorted array :\n";
    for(int i=0;i<6;i++)
    {
        cout << arr[i] <<" ";
    }
}