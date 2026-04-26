#include "Dynamic.h"
#include <iostream>

using namespace std;

int i;

Dynamic ::Dynamic (int n,int m)
{
    size1=n;
    size2=m;
    mergedsize=m+n;

    ar1= new int[size1];
    ar2= new int[size2];
    merged= new int[mergedsize];
}

void Dynamic :: inputdata()
{
    cout<<"Enter The Element of First Array  ";
    for(i=0;i<size1;i++)
    {
        cin>>ar1[i];
    }

    cout<<"Enter The Element of Second Array  ";
    for(i=0;i<size2;i++)
    {
        cin>>ar2[i];
    }
}

void Dynamic :: mergedata()
{
    int a,b;

    for(i=0;i<size1;i++)
    {
        merged[b]=ar1[i];
        b++;
    }

    for(i=0;i<size2;i++)
    {
        merged[b]=ar2[i];
        b++;
    }

    for(i=0;i<mergedsize;i++)
    {
       for(a=i+1;a<mergedsize-1;a++)
       {
           if(merged[i]==merged[a])
           {
               merged[a]=-1;
           }
       }
    }
}

void Dynamic :: display()
{
    for(i=0;i<mergedsize;i++)
    {
        if(merged[i]>=0)
        {
            cout<<merged[i]<<endl;
        }
    }
}

Dynamic :: ~Dynamic ()
{
   delete[] ar1;
   delete[] ar2;
   delete[] merged;
}
