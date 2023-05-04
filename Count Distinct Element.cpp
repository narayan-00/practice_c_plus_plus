/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int countDistinctElement(int a[],int n){
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    return s.size();
}
int main()
{
   int arr[]={15,12,13,12,13,13,18};
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<countDistinctElement(arr,n);
    

    return 0;
}
