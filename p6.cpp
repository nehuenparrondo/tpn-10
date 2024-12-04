#include <iostream>  
#include <vector>  
#include <string>  
#include <algorithm>  

class Libro {  
public:  
    std::string titulo;  
    std::string autor;  
    int anioPublicacion;  

    void ingresarDatos() {  
        std::cout << "Ingrese el título: ";  
        std::cin >> titulo;  
        std::cout << "Ingrese el autor: ";  
        std::cin >> autor;  
        std::cout << "Ingrese el año de publicación: ";  
        std::cin >> anioPublicacion;  
    }  
    void mostrarDatos() const {  
        std::cout << "Título: " << titulo   << ", Autor: " << autor<< ",

