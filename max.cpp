#include <iostream>

using namespace std;


int main() {


   int a[5];

   int i;

   for( i=0; i<5; i++) 

   {

       cin>>a[i];

   }

   int max = 0;


   for(i=0; i<5; i++)

   {

      if(a[i]>max) max = a[i]; 

   }


   for(i=0; i<4; i++)

   {

       if(a[i]+a[i+1] > max) max = a[i]+a[i+1];

   }

   for(i=0; i<3; i++)

   {

       if(a[i]+a[i+1]+a[i+2] > max) max = a[i]+a[i+1]+a[i+2];

   }

   for(i=0; i<2; i++)

   {

       if(a[i]+a[i+1]+a[i+2]+a[i+3] > max) max = a[i]+a[i+1]+a[i+2]+a[i+3];

   }


   int sum = 0;

   for(i=0; i<5; i++)

   {

       sum+= a[i];

   }

   if(sum>max) max = sum;


   cout<<max<<endl;


   return 0;

}
