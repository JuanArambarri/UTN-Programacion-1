#include <iostream>

int main() {
    int num1,num2;
    std::cout << "Porfavor ingrese dos numeros" << std::endl;
    std::cin >> num1 >> num2;
    if (num1!=num2){
        if (num1<num2) std::cout << num1 << " es menor a " << num2 << std::endl;
        else std::cout << num1 << " es mayor a " << num2 << std::endl;
    }else std::cout << "Ambos numeros son iguales." << std::endl;
    system("pause");
    return 0;
}
