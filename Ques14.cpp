#include<iostream>
using namespace std;
int main(){
    int month;
    cout<<"Enter the Month number\n";
    cin>>month;
    if(month==2){
        cout<<"Days=28\n";
    }
    else if(month==1){
        cout<<"Days=31\n";
    }
    else if(month/2==0){
        cout<<"Days=30\n";
    }
    else{
        cout<<"Days=31\n";
    }

}