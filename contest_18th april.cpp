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

       int x;
       cin>>x;

       int arr[4];

       for(int i=1;i<=3;i++)
          cin>>arr[i];

       vector<int> vec;
       int newkey=-1;
       vec.push_back(x);
       if( arr[x] !=0 )
       {
           newkey=arr[x];
       }


       if(newkey== -1)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           if(arr[newkey]==0)
            cout<<"NO"<<endl;
           else
            cout<<"YES"<<endl;
       }






   }




    return 0;
}






