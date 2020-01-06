#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int x[n],w[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        
    }
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
        
    }

    float wmean,wsum;
    for(int i=0;i<n;i++)
    {   wsum+=w[i];
        wmean+=x[i]*w[i];
    }

    printf("%0.1f",wmean/wsum);
    return 0;
}
