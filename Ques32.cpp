#include<iostream>
using namespace std;
int main(){
    int pos,n1=1,n2=-1;
    cout<<"Enter the position:\n";
    cin>>pos;
    for(int i=0;i<pos;i++){
        if(i%2==0){
            cout<<n1<<" ";
        }
        else{
            cout<<n2<<" ";
        }
    }

}