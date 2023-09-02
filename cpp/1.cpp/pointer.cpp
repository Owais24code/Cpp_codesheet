#include<iostream>
using namespace std;

// int getsum(int a[ 5],int n)
// {
//     cout << sizeof(a) <<endl;
//     int sum =0;
//     for(int i =0;i<n;i++)
//     {
//         sum+=a[i];
//     }
//     return sum;
// }



int main()
{

    // int a[5]={2,3,4,5,6};
    // cout << "sum is : " <<" " <<getsum(a,5) <<endl;
    int i=7;
    int *p=&i;
    int **p2=&p;
    cout << "content of p" <<p <<endl;//adress of i which store at p
    cout <<"address of p" <<  &p << endl;//address of p
    cout << endl;

    cout << "address of p2" << &p2 << endl;
    cout << "content of p2" << p2;

    cout << endl;
    cout << "value at p2 and p:  " << *p << " - " << *p2<<endl;



    // int num=5;

    // //initilization
    // int *ptr=&num;
    // cout << num <<endl;
    // cout << *ptr <<endl;
    // int num2=9;
    // int *q=&num2;
    // cout << *q <<endl;
    // // cout << ptr << endl;
    // // ptr++;
    // // cout << ptr << endl;
    // int add=*ptr+*q;
    // cout <<endl;
    // cout <<add <<endl;


    // /int arr[10]={2,3,4,5,6,6,7,8,9,2};
    // char ch[8]="abcdefg";

    // cout << "memory address of first element of array" << arr <<endl;
    // cout << &arr <<endl;
    // arr[0]={2};
    // cout << &arr[0] <<endl;
    // cout << *arr <<endl;
    // cout << *arr+1 <<endl;
    // cout <<*(arr+1) <<endl;
    // cout<<(*arr)+1 <<endl;
    // cout << arr[3] <<endl;
    // cout << *(arr +3);

    // int i=5;
    // cout <<i[arr] <<endl;
    // cout <<&arr[i] <<endl;

    // cout << arr <<endl;
    // cout <<"character array" << ch ;

    // int *p=&arr[1];

    // cout << &arr[1] <<endl;
    // cout <<sizeof(arr[0]) <<endl;
    // cout << *p <<endl;
    // cout << &p <<endl;
}