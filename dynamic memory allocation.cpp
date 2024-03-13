//malloc
#include<iostream>
using namespace std;
int main(){
int *ptr;
int index=0,i=0;
ptr=(int*)malloc(3*sizeof(int));
if(ptr==NULL){
    cout<<"memory allocation failed";
}
else{
    for(i=0;i<3;i++){
        ptr[i]=i;
    }
}
for(i=0;i<3;i++){
    cout<<ptr[i];
}
 
}
    
//calloc
#include<iostream>
using namespace std;
int main(){
int *ptr;
int index=0,i=0;
ptr=(int*)calloc(3,sizeof(int));
if(ptr==NULL){
    cout<<"memory allocation failed";
}
else{
    for(i=0;i<3;i++){
        ptr[i]=i;
    }
}
for(i=0;i<3;i++){
    cout<<ptr[i];
}
 
}
    
//realloc
#include<iostream>
using namespace std;
int main(){
int *ptr;
int index=0,i=0;
ptr=(int*)calloc(3,sizeof(int));
if(ptr==NULL){
    cout<<"memory allocation failed";
    ptr=realloc(ptr,3*sizeof(int));
    if(ptr==NULL){
        cout<<"failed again";
    }
}
else{
    for(i=0;i<3;i++){
        ptr[i]=i;
    }
}
for(i=0;i<3;i++){
    cout<<ptr[i];
}
 
}
    
//free
free(ptr);