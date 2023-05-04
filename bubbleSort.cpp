/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                flag=true;
                swap(a[j],a[j+1]);
            }
        }
        if(flag==false)break;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
  int a[]={10,1,98,5,3,2};
  int n=sizeof(a)/sizeof(a[0]);
  bubbleSort(a,n);
    
    
  return 0;
}
