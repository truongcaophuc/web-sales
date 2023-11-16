#include<iostream>
#include<math.h>
using namespace std;

int main(){
   int a[]={1,4,10,6,6,2,3,9};
   int b,c;
   if(a[1]>a[0]){
   	b=a[1];
   	c=a[0];
   }
   else {
   b=a[0];
   c=a[1];}
   for(int i=2;i<8;i++){
   	  if(a[i]>b && a[i]<=c){
   	  	b=a[i];
		 }
		else if(a[i]>c){
			b=c;
			c=a[i];
		} 
   }
   cout<<"dien tich lon nhat:"<<b*c;
  return 0;
}


