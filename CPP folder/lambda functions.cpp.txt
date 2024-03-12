#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> a={1,2,3,4,4};

//generating a lambda functions

auto lam=[&](int d){
    for(int i=0;i<a.size();i++){
        a[i]+=d;
        
        
    }
};
lam(3);
for(auto x:a){
    cout<<x<<"\n";
}

}