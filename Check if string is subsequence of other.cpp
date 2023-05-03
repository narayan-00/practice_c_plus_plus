/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSUbSequence(string str1,string str2,int m,int n){
    if(n>m) return false;
    int j=0
;    for(int i=0;i<m&&j<n;i++){
    if(str1[i]==str2[j]){
        j++;
    }
        
    }
    return(j==n);
    
}

int main()
{
    // string str="ABBA";
    string str1="GEEKSFORGEEKS";
    string str2="GRGES";
    int m=str1.length();
    int n=str2.length();
    cout<<isSUbSequence(str1,str2,m,n);
    
}
