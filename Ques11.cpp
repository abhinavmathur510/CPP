#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    int max;
    cout<<"Enter 3 numbers\n";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a==b && b==c){
        cout<<"All the 3 numbers are equal\n";
        goto end;
    }
    else{
        if(a>b && a>c){
            max=a;
        }
        if(b>a && b>c){
            max=b;
        }
        if(c>a && c>b){
            max=c;
        }
    }
    cout<<"The maximum among all three inputs is "<<max;
    end:return 0;
}