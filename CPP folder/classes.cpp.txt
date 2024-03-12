#include<iostream>
using namespace std;
class person{
int age;
int weight;
public:int func(int age){
    if(age>18){
        cout<<"eligible";
    }
    else{
        cout<<"not eligible";
    }
    
}
};


int main(){
    person p1;//creating objects
    p1.func(7);
}
inclass and out class declaration
#include<iostream>
using namespace std;
class person{
int age;
int weight;
public:
void in_clasdef(){
    cout<<"in class def working";
}
void inclas_demo();

int func(int age){
    if(age>18){
        cout<<"eligible";
    }
    else{
        cout<<"not eligible";
    }
    return age;  
}

};
void person::inclas_demo(){
    cout<<"checkin for out class";
}
int main(){
    person p1;
    p1.func(7);
    p1.inclas_demo();
}


//constructor
#include<iostream>
using namespace std;
class person{
int age;
int weight;
public:



person(){
    cout<<"constructor called\n";
}
person(int a){
    cout<<"parameter construcotr called\n";
}
void in_clasdef(){
    cout<<"in class def working\n";
}
void inclas_demo();

int func(int age){
    if(age>18){
        cout<<"eligible\n";
    }
    else{
        cout<<"not eligible\n";
    }
    return age;
    
}

};
void person::inclas_demo(){
    cout<<"checkin for out class\n";
}



int main(){
    person p1;
    p1.func(7);
    p1.inclas_demo();
    person p2;
    person p3(2);



}