#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==1||n==0)
    return 1;
    else
    return n*factorial(n-1);
}

int main() {
  

    float boy,girl;
    float sum=0;
    cin>>boy>>girl;
    boy=boy/(boy+girl);
   
    int factn,factx,factn_x,n=6;

    for(int i=3;i<=6;i++)
    { 
        sum+=factorial(n)/(factorial(i)*factorial(n-i))*pow(boy,i) * pow(1-boy,n-i);        
    }
    printf("%0.3f",sum);
        return 0;
}
