#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int middle(int ar[],int n)
{int q2;
    if(n%2==0)
    {
        q2=( ar[(n-1)/2] + ar[((n-1)/2)+1] ) / 2;
        return q2;
        
    }
    else{
        q2=(ar[(n-1)/2]);
        return q2;
    }
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q1,q2,q3;
    cin>>n;
    int a[n],temp[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int m=n;                        
    if(n%2==0)                   
    {
        q2=middle(a,n);                    
        q1=middle(a,n/2);                    
        int j=0;
        for(int i=m-1;i>=0;i--)
        {
            temp[j]=a[i];
            j++;
        }

        q3=middle(temp,n/2);                 
    }   
    else
    {                 
        q2=middle(a,n);                  
        q1=middle(a,n/2);               
        int j=0;
        for(int i=m-1;i>=0;i--)
        {
            temp[j]=a[i];
            j++;
        }
        q3=middle(temp,n/2);           
    }
        cout<<q1<<endl<<q2<<endl<<q3;
        return 0;
}
