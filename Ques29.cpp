#include<iostream>
using namespace std;
int main(){
    int num,count=0,r,subs;
    cout<<"Enter a number:\n";
    cin>>num;
    int numo=num;
    while(numo>0){
        r=numo%10;
        count++;
        numo=numo/10;
    }
    int array[count];
    for(int i=count-1;i>=0;i--){
        while(num>0){
            r=num%10;
            array[i]=r;
            num=num/10;
            break;
        }
    }
    subs=array[count-1];
    array[count-1]=array[0];
    array[0]=subs;
    cout<<"Changed number is: ";
    for(int i=0;i<count;i++){
        cout<<array[i];
    }

}