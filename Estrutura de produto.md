<<<<<<< HEAD
# Estrutura de produto

=======
>>>>>>> 66a366b7ea09a979ab64be964b103a8e9d0f12cc
### Introdução
Este documento tem como objetivo documentar os detalhes técnicos utilizados na produção do software da experiência de estrutura de produto.

A experiência tem o intuito de desconstruir e reconstruir um produto através da manipulação.

##### Descrição técnica
As tecnologias que podem ser utilizadas no desenvolvimento da experiência são:
- Unreal Engine 4.27.2 sendo a programação feita em C++ ou blueprints.
- Git para controle de versão.

A plataforma alvo da build do software são os óculos de RV. Para a compilação e build são utilizados as ferramentas Unreal e o Android SDK Platform Tools que realiza dump do apk para o óculos. Ainda para testes, pode-se utilizar a ferramenta do óculos utilizado no desenvolvimento o Pico Preview Tool.

Mais instruções e configurações para desenvolvimento estão disponíveis em:
https://github.com/pucpr-aia/vrconfigs/blob/main/picoconfig.md

#### Arquitetura

<<<<<<< HEAD
![alt text](product.drawio%20(1).png)
=======
![[product.drawio (1).png]]

Imagem: [[Classes estrutura de produto]]
>>>>>>> 66a366b7ea09a979ab64be964b103a8e9d0f12cc

**Interfaces de usuário:** Componentes responsáveis por fornecer a interface do usuário para a experiência. Eles precisarão disparar exibição dos modelos através do carregador de modelos, lidar com input do usuário e fornecer feedbacks.

**Componente carregador de modelos:** Este componente será responsável por carregar e descarregar os modelos CAD 3D na experiência.

**Lógica para montagem e desmontagem de peças:**  Este componente será responsável por determinar o estado de um modelo. A princípio, um modelo possui 3 estados, sendo eles:
- Move: usuário pode movimentar a peça inteira mas não desmonta
- Dismantle: usuário pode remover a peça correta e movimentá-la
- Mount: usuário deve escolher peça correta e movimentá-la para posição de montagem

A lógica também determinará como o modelo pode ser desmontado em peças, monitorando a peça correta a ser removida, de acordo com a instrução física. Ele precisará definir os pontos de quebra e garantir que as peças possam ser destacadas sem causar colisões ou outros problemas.

**Player/Motion Controller:** Este componente será responsável por lidar com a entrada do usuário. Ele precisará detectar quando o usuário está tentando desmontar uma peça do modelo CAD e enviar os comandos apropriados para os outros componentes. A movimentação de outros componentes se dá pelo Grab Component. A ideia inicial é utilizar um feixe linear para detectar quando uma peça está no campo de visão e movimenta-la utlizando o conceito de spring arm.

### Escopo e funcionalidades
A seguir, estão listadas algumas funcionalidades a serem implementadas seguindo o documento de game design. Cada funcionalidade pode corresponder a um bloco de implementação. Não necessariamente deve ser realizado em sequência.

- Como sistema devo ser capaz de introduzir o usuário em como utilizar os controles
- Como sistema devo ser capaz de projetar modelos CAD de acordo com a capacidade da plataforma
- Como sistema devo ser capaz de habilitar a movimentação do modelo CAD inteiro ou apenas de peças
- Como jogador quero poder desmontar um produto utilizando os controles VR
- Como jogador quero poder movimentar as peças do produto usando a movimentação do controle à distância
- Como sistema devo ser capaz de desabilitar a colisão de uma peça quando for movimentada pelo usuário para não interfirir em outras peças
- Como sistema devo ser capaz de identificar qual a peça a ser retirada
- Como sistema devo ser capaz de monitorar quantas peças foram retiradas
- Como sistema devo ser capaz de separar as peças removidas em módulos
- Como jogador quero ser capaz que reconstruir o modelo 3D, inicialmente ligando peças dividas por módulos
- Como sistema devo ser capaz de monitorar qual a próxima peça a ser ligada
- Como sistema devo ser capaz de reconstruir um modelo desmontado

### Testes de validação & Riscos
- Testar performance do óculos VR com os modelos CAD adaptados
- Movimentar cubos com o motion controle à distância (testar springarm)
- Protótipo de modelo 3D com lógica de montagem e desmontagem
- Realizar testes de usuários para verificar melhorias e bugs