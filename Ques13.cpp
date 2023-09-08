#include <iostream>
using namespace std;
int main(){
    int note,count,amount;
    cout<<"Enter total Amount?\n";
    cin>>amount;
    cout<<"Enter the amount of note?\n";
    cin>>note;
    count=amount/10;
    cout<<"The count of notes required is "<<count;
}