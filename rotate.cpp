#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v{10,20,30,40,50,60};

    rotate(v.begin(),v.begin()+2,v.end());

    for(auto x:v){
        cout<<x<<" ";
    }


    return 0;
}