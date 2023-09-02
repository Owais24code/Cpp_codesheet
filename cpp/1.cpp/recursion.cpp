#include<iostream>
using namespace std;


// int factorial(int n)
// {
//     if(n==0)
//     return 1;//base case 

//     return n*factorial(n-1);//recursive relation f(n)=n*f(n-1)
// }
// int  main(){
//   int n;
//   cin >> n;
//   int ans=factorial(n);
//   cout << "answer :" <<ans;
// }



// int power(int n){
//     if(n==0)
//         return 1;


// //     return 2*power(n-1);    
// // }
// // int main(){
// //     int n;
// //     cin >> n;
// //     int ans =power(n);
// //     cout << "answer : " << ans;
// // }

/*----count the number using recursion------*/

// int count(int n)
// {
//     if(n==0)
//         return 0;
//     //tail  recursive call
//     // cout << n <<endl;
//     // return count(n-1);
//     // cout << "\n" << endl;
//     //head recursive call
//     count(n-1);
//     cout << endl;
//     cout << n <<endl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << count(n) <<endl;
// }

//say digits

                /*----change digits to string using recursion------*/

// int saydigits(int n,string a[]){
//     //base case
//     if(n==0)
//     return 0;
// //processing 
//     int digits=n%10;
//     n=n/10;

// //recursion relation
// saydigits(n,a);
// cout << a[digits] <<" ";

// }
// int main()
// {

//     string a[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//     int n;
//     cout << "enter the number" <<endl;
//     cin >> n;

//     saydigits(n,a);
// }
                        /*----check for sorted array using recursion------*/

// bool issorted(int arr[], int size){
//     if(size==0 || size==1)
//     return true;
//     if(arr[0]>arr[1])
//     return false;

//     bool ans=issorted(arr+1,size-1);
//     return ans;
// }

// int main()
// {
//     int arr[1]={1};

//     bool results=issorted(arr,1);
//     if(results){
//         cout << "array is sorted " <<endl;
//     }
//     else {
//         cout << "unsorted array";
//     }
// }


                /*----sum of array using recursion------*/



// int getsum(int arr[], int n)
// {
//     if(n==0)
//     return 0;
//     if(n==1){
//         return arr[0];
//     }
//     int ans=getsum(arr+1,n-1);
//     int sum=arr[0]+ans;
//     return sum;

// }
// int main()
// {
//     int arr[5]={1,3,6,33,100};

//     int result=getsum(arr,5);
//     cout << "sum of the array using recursion is " << "-> " << result ;
// }


                /*----linear search using recursion------*/


// bool linearSearch(int arr[],int size, int key)
// {
//     if(size==0)//base case 
//     {return false;}
//     if(arr[0]==key)//searched for first element (RR)
//     {
//         return true;
//     }
//     else{
//     bool find=linearSearch(arr+1,size-1,key);//for remaining part
//     return find;
// }
// }

// int main()
// {
//     int arr[6]={1,3,5,6,22,2};
//     int key;
//     cout << "enter the  key to be searched :\n";
//     cin >> key;

//     int result=linearSearch(arr,6,key);
//     if(result){
//         cout << "element found" <<endl;
//     }
//     else 
//     cout << "no such element exist" <<endl;
// }



                /*----Binary search using recursion------*/

// void print(int arr[],  int start, int end)
// {
//     for(int i =start;i<=end;i++)
//     {
//         cout << arr[i] <<" " ;
//     }
//     cout << endl;
// }
// bool  binarySearch(int *arr,int start,int end , int key)
// {
//     cout << endl;
//     print(arr,start,end);
//     //base case 
//     if(start>end)
//     return 0;

//     int mid =start+(end-start)/2;
//     cout << "mid element : " << arr[mid];
//     cout << endl;

//     if(arr[mid]==key)
//     {
//         return key;
//     }
//     //processing 
//     if(arr[mid] < key){
//     return binarySearch(arr,mid+1,end,key);//start=mid+1;
//     }
//     else {
//     return binarySearch(arr,start,mid-1,key);//when end=mid-1
// }
// }
// int main(){
//     int arr[6]={1,2,3,44,55,109};
//     int key;
//     cout << "element to search:\n";
//     cin >> key;

//     int ans=binarySearch(arr,0,6,key);
    
//     if(ans){
//         cout << "element found";
//     }
//     else 
//     cout << "please ! research with new element";
// }



                    /*----reverse string using recursion------*/
// void reverse(string &str, int i,int j)
// {
//     if(i>j)
//     {
//         return ;
//     }
//     swap(str[i],str[j]);
//     i++;
//     j--;
//     reverse(str,i,j);
// }
// int main()
// {
//     string name="abcde";
//     int size=name.length()-1;
//     reverse(name,0,size);
//     cout << name;
// }


// void reverse(string &s)
// {
//     int i=0;
//     int j=s.length()-1;
//     while(i<j)
//     {
//         swap(s[i],s[j]);
//         i++;
//         j--;
//     }
// }
// int main(){
//     string s="abcde";
//     reverse(s);
//     cout << s;
// }


// string reverseString(string &str)
// {
// int n = str.length();
 
//     for (int i = 0; i < n / 2; i++)
//         swap(str[i], str[n - i - 1]);
//   return str;
// }
// int main()
// {
//     string str="owais";
//     reverseString(str);
//     cout <<str <<endl;
// }

            /*--------check palindrome -------*/



// bool ispalindrome(string str,int i )
// {
//     //base case
//     int n=str.length();
//     if(i>=n/2)
//     return true;
//     if(str[i]!=str[n-i-1]){
//     return false;}
//     else {
//      return ispalindrome(str,i+1);
// }
// }
// int main()
// {
//     string name="MadaM";
//     int check =ispalindrome(name,0);
//     if(check){
//         cout << "its palindrome" <<endl;
//     }
//     else{
//     cout << "not a palindrome";
// }
// }

            /*---------get power------*/
// int power(int a ,int b)
// {
//     //base case
//     if(b==0)//when power b==0 then answer is 1
//     return 1;
//     if(b==1) //when power is 1 then number is the output
//     {
//         return a;
//     }

//     //recursive call
//     int ans=power(a,b/2);  

//     if(b%2==0)  //when power is even then
//     {
//         return ans*ans;
//     }
//     else{      //when then power is odd
//         return a *ans*ans;
//     }

// }

// int main()
// {
//     int a,b;
//     cin >> a >>b;
//     int ans =power(a,b);
//     cout << "answer is " <<ans;
// }