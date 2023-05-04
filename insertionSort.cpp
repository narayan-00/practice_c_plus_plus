/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[],int n){
    
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}
int main()
{
  int a[]={10,1,98,5,3,2};
  int n=sizeof(a)/sizeof(a[0]);
  insertionSort(a,n);
    
    
  return 0;
}
