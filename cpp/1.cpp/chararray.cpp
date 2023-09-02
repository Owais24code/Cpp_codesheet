#include<iostream>
using namespace std;
// char tolowercase(char ch){
//     if(ch>='a' && ch<='z')
//     {
//         return ch;
//     }
//     else{
//         char temp=ch-'A'+'a';
//         return temp;
//     }
// }
// bool checkpalindrome(char a[],int n)
// {
//     int s=0;
//     int e=n-1;
//     while(s<=e){
//         if(tolowercase(a[s])!=tolowercase(a[e]))
//             return 0;
//         else{
//             s++;
//             e--;
//         }    
//     }
//     return true;
// }

// void reverse(char name[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<=e)
//     {
//         swap(name[s++],name[e--]);
//     }
    
// }
// int getlength(char name[]){
//     int count=0;
//     for(int i=0; name[i]!='\0';i++)
//     {
//         count++;
//     }
//     return count;
// }


char getmaxocc(string s){
    int arr[26]={0};
    for(int i=0; i<s.length(); i++){
        char ch=s[i];
        int count=0;
        //LOWERCASE
        if(ch>='a' && ch<='z'){
            count=ch-'a';
        }
        //UPPERCASE
        else{
            count=ch-'A';
        }
        arr[count]++;
    }

    int MAx=-1,ans=0;
    for(int i=0;i<26;i++)
    {
        if(MAx<arr[i]){
            ans=i;
            MAx=arr[i];
        }
    }
    char  finalans='a'+ans;
    return finalans;
}
int main()
{
    // char name[20];
    // cout << "enter your name "<<endl;
    // cin >> name;
    // cout << "name is " << name;
    // cout << endl;
    // int len=getlength(name);
    // cout << "length is:" << len<< endl;
    // reverse(name,len);
    // cout<< "reverse of string " << name ;
    // cout << endl;
    // cout << "palindrome" << " " << checkpalindrome(name,len);
    string s;
    cout<< "enter the string \n" ;
    cin >> s;
    cout << "most occuered string is \n"<<getmaxocc(s);
    

    return 0;
}