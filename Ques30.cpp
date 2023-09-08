#include<iostream>
using namespace std;
int main(){
    int pos,first=0,sec=1,sum;

    cout<<"Enter the position:\n";
    cin>>pos;
    if(pos<1){
        cout<<"Invalid\n";
        return 0;
    }
    

    for(int i=0;i<pos;i++){
        sum=first+sec;
        cout<<first<<" ";
        first=sec;
        sec=sum;
    }
}