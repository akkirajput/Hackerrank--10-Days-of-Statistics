#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int a[n];
    float stddev,mean=0,sum=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }  
    for(int i=0;i<n;i++)
    {
        mean+=a[i]/n;
    }
    for(int i=0;i<n;i++)
    {
        sum+=pow((a[i]-mean),2);
    }
    stddev=sqrt((sum/n));
    printf("%0.1f\n",stddev);
    return 0;
}
