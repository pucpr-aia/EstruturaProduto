# Classes

Este documento tem como objetivo criar pseudo código das classes que possivelmente estarão presentes no projeto. Separar componentes em classes e atribuir characterísticas e funcionalidades para as classes, e clarificar com implementar.

```
ModelLoader {
    Lista com modelos 3D
    Quantidade de modelos
    Modelo ativo
    Cria modelo
    Remove modelo
}
```

```
Model {
    Nome do modelo
    Descrição do modelo
    
    Referência das peças
    Módulos do produto 
    Quantidade de peças

    Tipo de movimento habilitado

    Mover
    Redimensionar
}
```

```
Piece {
    Tipo
    Identificação numérica
    Monitorar se está conectada ou não
    
    Redimensionar
    Mover
    Conecta
    Desconecta
}
```

```
Module {
    Referência do produto a qual pertence
    Referência das peças no módulo
}
```

```
Wall {
    Liste de refências dos módulos do produto
    Módulo ativo
}
```
