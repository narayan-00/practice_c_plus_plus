/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void merge(int a[], int low,int mid, int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1];
    int right[n2];
    
    for(int i=0;i<n1;i++){
        left[i]=a[low+i];
    }
    for(int j=0;j<n2;j++){
        right[j]=a[mid+j+1];
    }
    
    int i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            a[k]=left[i];
            i++;
            k++;
        }
        else{
            a[k]=right[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        a[k]=left[i];
         i++;
        k++;
       
    }
    while(j<n2){
        a[k]=right[j];
        j++;
        k++;
    }
    
}
void mergeSort(int a[],int l,int r){
    if(r>l){
        int m=l+((r-l)/2);
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
   
}
int main()
{
  int a[]={10,1,98,5,3,2};
  int n=sizeof(a)/sizeof(a[0]);
  mergeSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
  return 0;
}
