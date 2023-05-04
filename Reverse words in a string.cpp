/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>

using namespace std;



void reverseWordsinString(string &s, int m){
 string temp="";
 stack<string>stk;
 int j=0;
 for(int i=0;i<m;i++){
     if(s[i]==' '){
         stk.push(temp);
         temp="";
     }
     else{
         temp+=s[i];
     }
 }
 stk.push(temp);    //for last word
 while(!stk.empty()){
     temp=stk.top();
     cout<<temp<<" ";
     stk.pop();
 }
 cout<<endl;
}

int main()
{
    
    string s1="I love to code";
   
    int m=s1.length();
   
    reverseWordsinString(s1,m);
    return 0;
}

-----------------------------------------------------------------------------------
{optimized}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

//1. take string input
//2. reverse each words in a string
//3. reverse entire string

void reverse(char str[],int l,int r){
    while(l<=r){
        char temp=str[l];
        str[l]=str[r];
        str[r]=temp;
        l++;
        r--;
    }
    
}
void reverseWordsinString(char str[], int m){
    int start=0;
    for(int end=0;end<m;end++){
        if(str[end]==' '){
            reverse(str,start,end-1);
            start=end+1;
            
        }
    }
        reverse(str,start,m-1);//reverse last words
       
        reverse(str,0,m-1);//reverse entire string
   
}
int main()
{
    string s1="welcome love to code";
    int m=s1.length();
    char str[m];
    strcpy(str,s1.c_str());
    reverseWordsinString(str,m);
   for(int i=0;i<m;i++){
       cout<<str[i];
   }
    return 0;
}
