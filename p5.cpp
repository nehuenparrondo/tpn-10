#include <iostream>  
#include <vector>  
#include <string>  
#include <algorithm>  
class Empleado {  
public:  
    std::string nombre;  
    float salario;  
    std::string departamento;  
    void ingresarDatos() {  
        std::cout << "Ingrese el nombre: ";  
        std::cin >> nombre;  
        std::cout << "Ingrese el salario: ";  
        std::cin >> salario;  
        std::cout << "Ingrese el departamento: ";  
        std::cin >> departamento;  
    }  
    void mostrarDatos() const {  
        std::cout << "Nombre: " << nombre   
                  << ", Salario: " << salario   
                  << ", Departamento: " << departamento << std::endl;  
    }  
};  

bool compararPorSalario(const Empleado &e1, const Empleado &e2) {  
    return e1.salario > e2.salario;  
}  
int main() {  
    std::vector<Empleado> empleados;  
    int cantidad;  

    std::cout << "Ingrese la cantidad de empleados: ";  
    std::cin >> cantidad;  
    for (int i = 0; i < cantidad; ++i) {  
        Empleado e;  
        e.ingresarDatos();  
        empleados.push_back(e);  
    }  

    std::sort(empleados.begin(), empleados.end(), compararPorSalario);  

    std::cout << "\nDatos de los empleados ordenados por salario (mayor a menor):\n";  
    for (const auto& empleado : empleados) {  
        empleado.mostrarDatos();  
    }  

    return 0;  
}
