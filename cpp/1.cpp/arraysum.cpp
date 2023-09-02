#include<iostream>
using namespace std;


int sumarray(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    int x=sumarray(a,8);
    cout << "sum of the element : " <<  " " << x;
    return 0;
}