#include <iostream>
#include <string>
#include <vector>

class Piece {
public:
    std::string Name;
    bool bIsConnected = false;

    void Connect(bool *status);
    void Disconnect(bool *status);

    void Resize(bool *status);
    /*
        Tipo
    Identificação numérica
    Monitorar se está conectada ou não
    
    Redimensionar
    Mover
    Conecta
    Desconecta
    */
};

class Module {
public:
    std::string Name;
    std::vector<Piece> Pieces;
    /*
    Referência do produto a qual pertence
    Referência das peças no módulo
    */
};

class Product {
public:
    std::string Name;
    std::string Description;

    std::vector<Module> Modules;
    /*
        Nome do modelo
    Descrição do modelo
    
    Referência das peças
    Módulos do produto 
    Quantidade de peças

    Tipo de movimento habilitado

    Mover
    Redimensionar
    */
};

class ModelManager {
public:
    std::vector<Product> Products;
    int ProductQuantity;
    Product *ActiveProduct;

    /*
    Lista com modelos 3D
    Quantidade de modelos
    Modelo ativo
    Cria modelo
    Remove modelo
    */
};

/*
Wall {
    Liste de refências dos módulos do produto
    Módulo ativo
}
*/

int main() {
    return 0;
}