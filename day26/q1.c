#include<stdio.h>

int main(){
  
 int arr[]={45,33,77,43,44,23,56,96};
 int *b1,*b2,*b3,*b4,*b5,*b6,*b7,*b8;
 
  b1 = &arr[0];
  b2 = &arr[1];
  b3 = &arr[2];
  b4 = &arr[3];
  b5 = &arr[4];
  b6 = &arr[5];
  b7 = &arr[6];
  b8 = &arr[7];
 
   printf("%u => %d\n",b1,(*b1)*(*b1));
   printf("%u => %d\n",b2,(*b2)*(*b2));
   printf("%u => %d\n",b3,(*b3)*(*b3));
   printf("%u => %d\n",b4,(*b4)*(*b4));
   printf("%u => %d\n",b5,(*b5)*(*b5));
   printf("%u => %d\n",b6,(*b6)*(*b6));
   printf("%u => %d\n",b7,(*b7)*(*b7));
   printf("%u => %d\n",b8,(*b8)*(*b8));
   
return 0;

}
   