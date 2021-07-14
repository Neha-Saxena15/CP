    
            /* Binary Exponentiation.....
            sometime we want to find the value of 2**20 type values which is very large ....
			so condition are given to find ans %M.....where 
            M = 1e9 7;  */

// recursive approach....
#include<iostream>
long M = 1e9 +7;
using namespace std;
int recur(int a,int b)
   {
       if(b==0)
	      return 1;
	   int res = recur(a,b/2);	      
	 if(b&1)
	     return (a*res*res %M)%M;
	else
	  return (res*res)%M;	    	
   }
   

int main()
{
	int a,b;  // we want to find (a^b)%M
	cout<<"enter the value of a and b to find (a^b)%M ...where M is 10^9 + 7";
	cin>>a>>b;
  int ans = recur(a,b);
  cout<<ans;
	return 0;
}
