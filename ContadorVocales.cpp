#include "ContadorVocales.hpp"
#include <iostream>
#include <cctype>

namespace ProcesamientoTexto {

    ContadorVocales::ContadorVocales(const std::string& texto_usuario) : cadena(texto_usuario) {
        inicializarContadores();
        procesarCadena();
    }

    void ContadorVocales::inicializarContadores() {
        frecuencias['a'] = 0;
        frecuencias['e'] = 0;
        frecuencias['i'] = 0;
        frecuencias['o'] = 0;
        frecuencias['u'] = 0;
    }

    void ContadorVocales::procesarCadena() {
        // Uso de punteros para recorrer los caracteres de la cadena
        const char* ptr = cadena.c_str();

        while (*ptr != '\0') {
            // Convertir a minúscula para manejar mayúsculas y minúsculas uniformemente
            char caracterActual = std::tolower(*ptr);

            // Verificar si el carácter apuntado es una vocal bajo la estructura interna
            if (frecuencias.find(caracterActual) != frecuencias.end()) {
                frecuencias[caracterActual]++;
            }
            ptr++; // Avanzar el puntero a la siguiente dirección de memoria
        }
    }

    int ContadorVocales::obtenerCantidad(char vocal) const {
        char vocalMinuscula = std::tolower(vocal);
        auto it = frecuencias.find(vocalMinuscula);
        if (it != frecuencias.end()) {
            return it->second;
        }
        return 0;
    }

    void ContadorVocales::mostrarResultados() const {
        std::cout << "\n--- Resultados del Conteo de Vocales ---\n";
        // Recorremos la estructura interna con punteros implícitos (iteradores) de forma limpia
        for (const auto& par : frecuencias) {
            std::cout << "Vocal '" << par.first << "': " << par.second << " veces.\n";
        }
    }

} // namespace ProcesamientoTexto
