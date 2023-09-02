#include<iostream>
using namespace std;

// bool isprime(int n){
//     if(n<=1){
//         return false;
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0)
//             return false;
//     }
//     return true;
// }

// int main()
// {
//     int n;
//     cin>> n;
//     if(isprime(n)){
//         cout <<n<< " is prime number" <<endl;
//     }
//     else{
//         cout <<n << " is not a prime" <<endl;
//     }
// }
int gcd(int a, int b){
    if(a==0)
        return b;
    
    if(b==0)
        return a;
    if(a!=b)
    {
        if(a<b)
        {
            b=b-a;
        }
        else{
            a=a-b;
        }
    }
    return a;
}


int main(){
    int a,b;
    cin >> a >> b;
    int  ans=gcd(a,b);
    cout<< "gcd of two number are\n" << ans <<endl;

}