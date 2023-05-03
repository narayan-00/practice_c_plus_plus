/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


int maxSubArraySum(int a[], int n){
   int ans=a[0];
   for(int i=0;i<n;i++){
       int curr=0;
       for(int j=i;j<n;j++){
           curr=curr+a[j];
           ans=max(ans,curr);
       }
   }
    
    return ans;
}


int main()
{
    cout<<"Hello World"<<endl;
    
    
    int a[]={2,3,-8,7,-1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<maxSubArraySum(a,n)<<endl;
    return 0;
}

------------------------------------------------------------------------------
  (Optimized)
  
  /******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


int maxSubArraySum(int a[], int n){
   int res=a[0];
   int maxEnding=a[0];
   for(int i=0;i<n;i++){
       maxEnding=max(maxEnding+a[i],a[i]);
       res=max(res,maxEnding);
   }
    
    return res;
}


int main()
{
    cout<<"Hello World"<<endl;
    
    
    int a[]={2,3,-8,7,-1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<maxSubArraySum(a,n)<<endl;
    return 0;
}
