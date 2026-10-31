#ifndef CONTADOR_VOCALES_HPP
#define CONTADOR_VOCALES_HPP

#include <string>
#include <map>

namespace ProcesamientoTexto {

    class ContadorVocales {
    private:
        std::string cadena;
        std::map<char, int> frecuencias;

        void inicializarContadores();
        void procesarCadena();

    public:
        // Corregido: cambié "texto del usuario" por "texto_usuario"
        ContadorVocales(const std::string& texto_usuario);
        
        int obtenerCantidad(char vocal) const;
        void mostrarResultados() const;
    };

} // namespace ProcesamientoTexto

#endif // CONTADOR_VOCALES_HPP
