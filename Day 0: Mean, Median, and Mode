#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
float median(int a[],int n)
{  
    sort(a,a+n);
    if(n%2==0)
    {
     float res=(float)(a[(n-1)/2]+a[(n+1)/2])/2;
     return res;
    }
    else
    {
        float res=(float)(a[n/2]);
        return res;
    }
}

int mode(int a[],int n)
{   
int value[n],max=0,count=1;
sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
                if(a[i]==a[j])
                {   
                    count++;
                    value[i]=count;
                }               

                else if(count==1)
                {
                    value[i]=count;
                    if(count>value[i-1])
                    max=0;
                }
        }

        if(i>0)
        {
         if(value[i]>value[i-1]&&value[i]>max)
         {
            max=i;
         }
        }
        count=1;
    }

    return a[max];
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

int sum =0;
    for(int i=0;i<n;i++)
    {
        
         sum += a[i];              // For mean
    }
    cout<<(float)sum/n<<endl;
    float res=median(a,n);  //calling median method
    cout<<res<<endl;
    int moderes=mode(a,n);  //calling mode method
    cout<<moderes;
    return 0;
}
