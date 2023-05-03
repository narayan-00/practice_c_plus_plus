#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    string rev=str;
    reverse(rev.begin(),rev.end());
    
    return(str==rev); 
    
}

int main()
{
    string str="ABBA";
    cout<<isPalindrome(str);
    
}
_______________________________________________________________________________________________
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

bool isPalindrome(string str){
    int begin=0,end=str.length()-1;
    while(begin<end){
        if(str[begin]!=str[end]){
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int main()
{
    // string str="ABBA";
    string str="geeks skeeg";
    cout<<isPalindrome(str);
    
}
