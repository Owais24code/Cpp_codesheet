#include <bits/stdc++.h> 

bool isPossible(vector<int>time, int n, int m,int mid)
{
	int dayscount=1;
	int TIMEsum=0;
	for(int i =0 ;i<m;i++)
	{
		if(TIMEsum + time[i] <=mid)
		{
			TIMEsum +=time[i];
		}
		else
		{
			dayscount++;
			if(dayscount > n && time[i] > mid)
			{
				return false;
			}

			TIMEsum+=time[i];
		}
	}
	return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	int s=0;//start
	int sum=0;
	for(int i =0 ;i<m;i++)
	{
		sum+=time[i];
	}
	int e=sum;//end
	long long int ans=0;//to store the ans
	long long int mid=s+(e-s)/2;

	while(s<=e)
	{
		if(isPossible(time,n,m,mid))
		{
			ans=mid;
			e=mid-1;
                }
		else {
          s = mid + 1;
            }
        mid=s+(e-s)/2;	
	}
	return ans;
}