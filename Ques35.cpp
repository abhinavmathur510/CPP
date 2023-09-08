#include<iostream>
using namespace std;
int main(){
    int pos;
    int count=0;
    cout<<"Enter the Position:\n";
    cin>>pos;
    int num=2;
    cout<<1<<"\n"<<2<<"\n";
    while(count<pos){
        int flag=0;
        for(int i=2;i<num;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
        if(flag=0){
                cout<<num<<"\n";
                count++;
            }  
        num++;    
    }
}
/*#include <iostream>

int main() {
    int n;
    std::cout << "Enter the position of prime numbers you want to print: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input. Please enter a positive number greater than 0." << std::endl;
        return 1;
    }

    std::cout << "Prime numbers until position " << n << " are: ";

    int count = 0;
    int num = 2;

    while (count < n) {
        bool is_prime = true;

        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            std::cout << num << " ";
            ++count;
        }

        ++num;
    }

    std::cout << std::endl;
    return 0;
}
*/

