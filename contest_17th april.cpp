#include <iostream>
#include<bits/stdc++.h>
#define ll long long


using namespace std;

int main()
{

   int t;
   ll n;
   cin>>t;

   while(t--)
   {


     int n,problem=0,move;
     cin>>n;

     int arr[n+1];

     for(int i=1;i<=n;i++)
        cin>>arr[i];

     for(int i=1;i<=n;i++)
     {
         if(arr[i] == i )
            problem++;
     }

     if(problem%2==1)
     {
         move=(problem/2)+1;
     }
     else
        move=problem/2;

     cout<<move<<endl;




   }




    return 0;
}






