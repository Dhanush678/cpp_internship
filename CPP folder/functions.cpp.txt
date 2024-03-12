#include<iostream>
using namespace std ;
//call by value
void func(int a){
for(int i=1;i<=10;i++){
int res=a*i;
cout<<res<<"\n";
}
}


//call by reference
void function(int *p){
for(int i=1;i<=10;i++){
int result=(*p)*i
}

}

}
int main(){
int a;

cout<<"enter the number";
cin>>a;
func(a);//call by value

function(&a);//call by reference
return 0;
}

//using recursion

int function_rec(int a){
cout<<"recursion loop"<<a;
a++;
function_rec(a);

}


//using array in function

int function_array(int a[5]){
int am=a[0];
int i;
while(i<5){
cout<<a[i]

}
int a[5]={1,2,3,4,4};


}