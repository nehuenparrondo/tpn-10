#include <iostream>  
#include <vector>  

class CuentaBancaria {  
public:  
    std::string numeroCuenta;  
    std::string nombreTitular;  
    float saldo;  

    void ingresarDatos() {  
        std::cout << "Ingrese el número de cuenta: ";  
        std::cin >> numeroCuenta;  
        std::cout << "Ingrese el nombre del titular: ";  
        std::cin >> nombreTitular;  
        std::cout << "Ingrese el saldo inicial: ";  
        std::cin >> saldo;  
    }  

    void mostrarDatos() const {  
        std::cout << "Número de cuenta: " << numeroCuenta   
                  << ", Titular: " << nombreTitular   
                  << ", Saldo: " << saldo << std::endl;  
    }  

    void depositar(float monto) {  
        saldo += monto;  
    }  
    void retirar(float monto) {  
        if (saldo >= monto) {  
            saldo -= monto;  
        } else {  
            std::cout << "Fondos insuficientes." << std::endl;  
        }  
    }  
};  
int main() {  
    std::vector<CuentaBancaria> cuentas;  
    int cantidad;  
    std::cout << "Ingrese la cantidad de cuentas bancarias: ";  
    std::cin >> cantidad;  
    for (int i = 0; i < cantidad; ++i) {  
        CuentaBancaria c;  
        c.ingresarDatos();  
        cuentas.push_back(c);  
    }  
    std::cout << "\nDatos de las cuentas bancarias:\n";  
    for (const auto& cuenta : cuentas) {  
        cuenta.mostrarDatos();  
    }  
    std::string numeroCuenta;  
    float monto;  
    std::cout << "Ingrese el número de cuenta para hacer un depósito: ";  
    std::cin >> numeroCuenta;  
    std::cout << "Ingrese el monto a depositar: ";  
    std::cin >> monto;  

    for (auto& cuenta : cuentas) {  
        if (cuenta.numeroCuenta == numeroCuenta) {  
            cuenta.depositar(monto);  
            std::cout << "Depósito realizado." << std::endl;  
            break;  
        }  
    }  

    std::cout << "Ingrese el número de cuenta para hacer un retiro: ";  
    std::cin >> numeroCuenta;  
    std::cout << "Ingrese el monto a retirar: ";  
    std::cin >> monto;  

    for (auto& cuenta : cuentas) {  
        if (cuenta.numeroCuenta == numeroCuenta) {  
            cuenta.retirar(monto);  
            std::cout << "Retiro realizado." << std::endl;  
            break;  
        }  
    }  

    std::cout << "\nDatos actualizados de las cuentas bancarias:\n";  
    for (const auto& cuenta : cuentas) {  
        cuenta.mostrarDatos();  
    }  
    return 0;  
}
