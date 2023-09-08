#include <iostream>
using namespace std;

int main() {
    int departmentCode, designationCode;
    double basicSalary, HRA, DA, PA, TA, PF, netSalary;

   
    cout << "Enter department code (10, 20, 30, or 40): ";
    cin >> departmentCode;
    cout << "Enter designation code (1, 2, or 3): ";
    cin >> designationCode;
    cout << "Enter basic salary: ";
    cin >> basicSalary;

    
    if (departmentCode == 10 || departmentCode == 20) {
        HRA = 0.3 * basicSalary;
        DA = 0.12 * basicSalary;
        PA = 0.16 * basicSalary;
        TA = (departmentCode == 10) ? 500 : 0;
        netSalary = basicSalary + HRA + DA + PA + TA;
    } else if (departmentCode == 30 || departmentCode == 40) {
        HRA = 0.35 * basicSalary;
        DA = 0.15 * basicSalary;
        PF = 0.1 * basicSalary;
        TA = 400;
        netSalary = basicSalary + HRA + DA - PF + TA;
    } else {
        cout << "Invalid department code. Please enter a valid code (10, 20, 30, or 40)." << endl;
        return 1;
    }

    
    cout << "Net salary: " << netSalary << endl;

    return 0;
}
