#include <iostream>  
#include <vector>  
#include <string>  
#include <algorithm>  
class Persona {  
public:  
    std::string nombre;  
    int edad;  
    void ingresarDatos() {  
        std::cout << "Ingrese el nombre: ";  
        std::cin >> nombre;  
        std::cout << "Ingrese la edad: ";  
        std::cin >> edad;  
    }  
    void mostrarDatos() const {  
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;  
    }  
};  
bool compararPorEdad(const Persona &p1, const Persona &p2) {  
    return p1.edad < p2.edad;  
}  
int main() {  
    std::vector<Persona> personas;  
    int cantidad;  
    std::cout << "Ingrese la cantidad de personas: ";  
    std::cin >> cantidad;  
    for (int i = 0; i < cantidad; ++i) {  
        Persona p;  
        p.ingresarDatos();  
        personas.push_back(p);  
    }  
    std::sort(personas.begin(), personas.end(), compararPorEdad);  

    std::cout << "\nDatos de las personas ordenadas por edad:\n";  
    for (const auto& persona : personas) {  
        persona.mostrarDatos();  
    }  
    return 0;  
}
