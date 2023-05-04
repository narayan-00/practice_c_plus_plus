/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>

using namespace std;



string reverseString(string &s1, int m){
 
 string rev="";
 
 for(int i=m-1;i>=0;i--){
     if(s1[i]!=' '){
     rev+=s1[i];
 }
 }
   return rev;
}

int main()
{
    
    string s1="   listen ";
    
    int m=s1.length();
    cout<<(reverseString(s1,m));
    return 0;
}
