#include <iostream>  
#include <vector>  
#include <string>  
class Alumno {  
public:  
    std::string nombre;  
    float nota1, nota2, nota3;  
    void ingresarDatos() {  
        std::cout << "Ingrese el nombre del alumno: ";  
        std::cin >> nombre;  
        std::cout << "Ingrese nota 1: ";  
        std::cin >> nota1;  
        std::cout << "Ingrese nota 2: ";  
        std::cin >> nota2;  
        std::cout << "Ingrese nota 3: ";  
        std::cin >> nota3;  
    }  
    void mostrarDatos() const {  
        std::cout << "Nombre: " << nombre   
                  << ", Nota 1: " << nota1   
                  << ", Nota 2: " << nota2   
                  << ", Nota 3: " << nota3 << std::endl;  
    }  
};  
int main() {  
    std::vector<Alumno> alumnos;  
    int cantidad;  
    std::cout << "Ingrese la cantidad de alumnos: ";  
    std::cin >> cantidad;  
    for (int i = 0; i < cantidad; ++i) {  
        Alumno a;  
        a.ingresarDatos();  
        alumnos.push_back(a);  
    }  

    std::cout << "\nDatos de los alumnos:\n";  
    for (const auto& alumno : alumnos) {  
        alumno.mostrarDatos();  
    }  

    return 0;  
}
