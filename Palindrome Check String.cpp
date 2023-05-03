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
