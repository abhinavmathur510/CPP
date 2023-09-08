#include<iostream>
using namespace std;
int main(){
    int flag;
    for(int i=102;i<=250;i++){
        for(int j=2;j<i;j++){
            flag=1;
            if(i%j==0){
                flag=0;
                break;
            }
            
        }
        if(flag==1){
                cout<<i<<"\n";
            }
    }
    
}
