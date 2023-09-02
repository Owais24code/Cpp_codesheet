#include<iostream>

using namespace std;
bool ispresent(int arr[][4],int target , int row  ,int col)
{
    for(int row=0;row <3;row++){
        for(int col =0;col<4;col++)
        {
            if(arr[row][col]== target)
                return 1;
        }
    }
    return 0;
    
}

int printsumrow(int arr[][4],int row, int col){
    int sum=0;
    for(int row=0;row<3;row++){
        for(int col =0;col<4;col++){
            sum+=arr[row][col];
        }
        cout <<sum<<endl;
    }
    cout << endl;
}


//largest sum row
int largestsum(int arr[][4],int row ,int col)
{ 
    int sum=0;
    int maxi=INT32_MIN;
    int rowindex=-1;
    for(int row=0;row<3;row++){
        for(int col =0;col<4;col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowindex=row;
        }
    }
    cout<< "largest sum row is :" <<maxi << endl;
    return rowindex;
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,11,12,13};
    // cout << "enter 2-D array\n" ;
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    //print 
    cout << "2-D array:" <<endl;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            cout << arr[row][col]<<" ";
        }
        cout << endl;
    }
    cout << "enter the element to found" << endl;
    int target;
    cin >> target;

    if(ispresent(arr,target,3,4))
    {
        cout<< "element found"<<endl;
    }
    else {
        cout << "enter the valid element , no such element";
    }
    cout << "sum is \n";
    printsumrow(arr,3,4);
    int ansindex= largestsum(arr,3,4);
    cout<< "present at"<< " "<<ansindex;
    
}   
    