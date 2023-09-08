#include<iostream>
using namespace std;

void tri1(int rows){
    for(int i=1;i<=rows;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<"\n\n\n";
}


void tri2(int rows){
    for(int i=1;i<=rows;i++){
        if(i%2!=0){
            for(int j=1;j<i;j++){
                cout<<j<<" ";
                cout<<"\n";
                break;
            }
        }
        if(i%2==0){
            for(int k=i;k>=1;k--){
                cout<<k<<" ";
            }
        }
        cout<<"\n";

    }
}




int main(){
    int rows;
    cout<<"Enter the number of rows:\n";
    cin>>rows;
    tri1(rows);
    tri2(rows);
    //tri3(rows);
    //tri4(rows);
    //tri5(rows);
    //tri6(rows);
}