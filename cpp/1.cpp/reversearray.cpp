#include<iostream>
#include<vector>

using namespace std;

vector<int>reverse(vector<int> v)
{
    int s=0;
    int e=v.size()-1;

    while(s<=e)
    {
        swap(s,e);
        s++;
        e--;
    }
    return v;
}

vector<int>v;

void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<< v[i] << " ";
    }
    cout << endl;
}
int main()
{
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    vector<int> ans=reverse(v);
    print(ans);

}



void rev_fun(int i , int arr[],int n)
{
   if(i >= n/2) return;
   swap(arr[i],arr[n-i-1]);
   rev_fun(i+1,arr, n);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    cout << " enter the array";
    for(int i=0;i<n;i++){
        cin  >> arr[i];
    }
    rev_fun(0,arr,n);
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
}