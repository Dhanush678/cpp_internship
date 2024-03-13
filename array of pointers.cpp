#include<stdio.h>

int main()
{
int arr[5] = { 1, 2, 3, 4, 5 };
int *ptr[5]=&arr;
int i=0;
while(i<5){
cout<<ptr++;
}
}
