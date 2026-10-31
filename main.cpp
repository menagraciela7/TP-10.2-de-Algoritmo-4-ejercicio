#include <iostream>
#include <string>
#include "ContadorVocales.hpp"

int main() {
    std::string textoIngresado;

    std::cout << "Ingrese una cadena de caracteres: ";
    std::getline(std::cin, textoIngresado);

    // Instanciación del objeto y procesamiento
    ProcesamientoTexto::ContadorVocales analizador(textoIngresado);

    // Muestra los resultados en pantalla
    analizador.mostrarResultados();

    // --- AGREGADO PARA PAUSAR LA CONSOLA ---
    std::cout << "\nPresione ENTER para salir...";
    std::cin.get(); // Espera a que el usuario presione la tecla Enter
    // ----------------------------------------

    return 0;
}
