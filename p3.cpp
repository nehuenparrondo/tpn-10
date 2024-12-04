#include <iostream>  
#include <vector>  

class Rectangulo {  
public:  
    float base;  
    float altura;  

    void ingresarDatos() {  
        std::cout << "Ingrese la base: ";  
        std::cin >> base;  
        std::cout << "Ingrese la altura: ";  
        std::cin >> altura;  
    }  

    float area() const {  
        return base * altura;  
    }  

    float perimetro() const {  
        return 2 * (base + altura);  
    }  
};  

int main() {  
    std::vector<Rectangulo> rectangulos;  
    int cantidad;  

    std::cout << "Ingrese la cantidad de rectángulos: ";  
    std::cin >> cantidad;  

    for (int i = 0; i < cantidad; ++i) {  
        Rectangulo r;  
        r.ingresarDatos();  
        rectangulos.push_back(r);  
    }  

    std::cout << "\nÁrea y perímetro de los rectángulos:\n";  
    for (const auto& rectangulo : rectangulos) {  
        std::cout << "Área: " << rectangulo.area()   
                  << ", Perímetro: " << rectangulo.perimetro() << std::endl;  
    }  

    return 0;  
}
