#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int middle(int ar[],int n)
{
    int q2;
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
    int a[n],f[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];              //reading numbers
    }

    for(int i=0;i<n;i++)
    {
        cin>>f[i];              //reading frequeny
    }

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=f[i];              //calculating size of new array
    }
    int newarray[sum],temp[sum],k=0;
    for(int i=0;i<n;i++)
    {
        while(f[i]>0)
       { 
         newarray[k]=a[i];          //intializing new array with numbers with given-
         k++;                       //-frequencies
         f[i]--;
       }
    }
    sort(newarray,newarray+sum);        //sorting new array in increasing order.

    int m=sum; 

    if(sum%2==0)                   
    {
                        
        
        q1=middle(newarray,sum/2);                    
        int j=0;
        for(int i=m-1;i>=0;i--)
        {
            temp[j]=newarray[i];
            j++;
        }

        q3=middle(temp,sum/2);                 
    }   
    else
    {                 
                       
        q1=middle(newarray,sum/2);               
        int j=0;
        for(int i=m-1;i>=0;i--)
        {
            temp[j]=newarray[i];
            j++;
        }
        q3=middle(temp,sum/2);           
    }
   
        printf("%0.1f\n",(float)(q3-q1));
        return 0;
}
