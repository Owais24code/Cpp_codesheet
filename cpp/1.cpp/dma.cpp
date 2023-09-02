

// int getsum(int a[], int n)
// {
//     int sum=0;
//     for(int i=0; i<n;i++)
//     {
//         sum+=a[i];
//     }
//     return sum;
// }

// int main(){
//     // int i=5;
//     // i++;
//     // cout << i <<endl;


//     // //refrence variable

//     // int &j=i;
//     // j++;
//     // i++;
//     // cout << i  << " -" << j <<endl;


//     int n;
//     cin >> n;
//     //create memory in heap or DMA

//     int *a=new int[n];

//     for(int i =0;i<n;i++)
//     {
//         cin >> a[i];
//     }

//     int ans=getsum(a,n);
//     cout << "answer is " << ans;
// }


#include<iostream>
using namespace std;


int main(){

    int row;
    cin >> row;
    int col;
    cin >> col;

//creation of 2d array in heap memory 
    int** arr=new int*[row];
    for (int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            arr[i]=new int[col];
        }
    }


//input
for (int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }
    
//ouput 
cout << "2-D array is :" << endl;
for (int i=0; i<row; i++)
    {
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    //delete 

    for (int i=0;i<row;i++)
    {
        delete [] arr[i];//column
    }

    delete []arr;//row
return 0;
 } 