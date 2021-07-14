    
            /* Binary Exponentiation.....
            sometime we want to find the value of 2**20 type values which is very large ....
			so condition are given to find ans %M.....where 
            M = 1e9 7;  */
            
           //iterative approach..... 
#include<iostream>
long M = 1e9 +7;
using namespace std;
int iter(int a,int b)
   {
       int ans =1;
	   while(b)
	      {
	        if(b&1) 
			  ans = (ans*1LL*a)%M;
			  
			 a = (a*1LL*a)%M;
			 b >>= 1; 	
		  }  	
		 return ans; 
   }
   

int main()
{
	int a,b;  // we want to find (a^b)%M
	cout<<"enter the value of a and b to find (a^b)%M ...where M is 10^9 + 7"<<endl;
	cin>>a>>b;
  int ans = iter(a,b);
  cout<<ans;
	return 0;
}
