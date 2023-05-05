/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int partition(int a[], int l, int h){
    int pivot=a[l];
    int i=l-1, j=h+1;
    while(true){
        do{
            i++;
        }
        while(a[i]<pivot);
        do{
            j--;
        }
        while(a[j]>pivot);
        if(i>=j)return j;
        swap(a[i],a[j]);
    }
}

void quickSort(int a[], int l,int h){
    if(l<h){
        int p=partition(a,l,h);
        quickSort(a,l,p);
        quickSort(a,p+1,h);
    }
    
}

int main()
{
  int a[]={10,1,98,5,3,2};
  int n=sizeof(a)/sizeof(a[0]);
  quickSort(a,0,n-1);
    for(int x: a)
	    cout<<x<<" ";
    
  return 0;
}
