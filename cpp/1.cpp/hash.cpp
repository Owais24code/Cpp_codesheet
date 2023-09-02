#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

                                     /*integer hashing*/

// int main(){
//     int n;//size of array
//     cout << "enter the size of array" << endl;
//     cin >> n;
//     int arr[n]; //input array
//     for(int i =0;i<n;i++){
//         cin >> arr[i];
//     }

//     //precalculation 
//     int hash[13]={0};//hash array 
//     for(int i=0;i <n;i++){
//         hash[arr[i]] += 1;//goto hash array and increase the count from 0 to 1
//     }

//     int q;//number of query or number to find
//     cout << "number of query or number to find\n";
//     cin >> q;
//     while(q--){
//         int num;//enter number which count you have find
//         cin >> num;
//         //fetch
//         cout << hash[num] ;
//     }
//     return 0;
// }

                                        /*character hashing*/


int main(){
    string s;
    cout << "input the string\n";
    cin >> s;

    //precalcalculation

    int hasharr[256]={0};
    for(int i =0;i<s.size();i++){
        hasharr[s[i]]++;//[s[i]-'a']for lowercase alphabet //for upper case s[i]-'A
    }


    int q;
    cout << "input the number of query \n";
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        //fetch
    cout<< hasharr[ch];
    }
    return 0;
}