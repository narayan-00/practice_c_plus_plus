/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool isAnagram(string &s1, string &s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2);
}

int main()
{
    
    string s1="listen";
    string s2="slient";
    cout<<isAnagram(s1,s2);
    return 0;
}

-----------------------------------------------------------------------------------------------
  
  (optimized)
  
  /******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>

using namespace std;



bool isAnagram(string &s1, string &s2,int m,int n){
  int arr[256]={0};
  if(m!=n) return false;
   for(int i=0;i<m;i++){
       arr[s1[i]]++;
       arr[s2[i]]--;
   }
 
   for(int i=0;i<256;i++){
       if(arr[i]!=0){
           return false;
       }
   }
   return true;
   
}

int main()
{
    
    string s1="listen";
    string s2="silent";
    int m=s1.length(),n=s2.length();
    cout<<(isAnagram(s1,s2,m,n)?"Yes":"No");
    return 0;
}

--------------------------------------------------------------------
    
    Using map
    
    
  /******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>

using namespace std;



bool isAnagram(string &s1, string &s2,int m,int n){
 
  if(m!=n) return false;
   
   map<char,int>mpp;
   
   for(int i=0;i<m;i++){
       mpp[s1[i]]++;
   }
   
   for(int i=0;i<n;i++){
       if(mpp.find(s2[i])!=mpp.end()){
           mpp[s2[i]]--;
       }
       else return false;
   }
   for(auto it:mpp){
       if(it.second!=0){
           return false;
       }
   }
   return true;
   
}

int main()
{
    
    string s1="listen";
    string s2="silent";
    int m=s1.length(),n=s2.length();
    cout<<(isAnagram(s1,s2,m,n)?"Yes":"No");
    return 0;
}
