#ifndef CUTBOX_H
#define CUTBOX_H
#include "figurageometrica.h"
/**
 * @brief A classe concreta CutBox é derivada da classe abstrata FiguraGeometrica.
 */
class CutBox : public FiguraGeometrica
{

protected:

    /**
     * @brief x0 armazena a coordenada inicial da caixa no eixo x;
     */
    int x0;
    /**
     * @brief x1 armazena a coordenada final da caixa no eixo x;
     */
    int x1;
    /**
     * @brief y0 armazena a coordenada inicial da caixa no eixo y;
     */
    int y0;
    /**
     * @brief y1 armazena a coordenada final da caixa no eixo y;
     */
    int y1;
    /**
     * @brief z0 armazena a coordenada inicial da caixa no eixo z;
     */
    int z0;
    /**
     * @brief z1 armazena a coordenada final da caixa no eixo z;
     */
    int z1;
    /**
     * @brief r recebe o valor decimal no intervalo [1,0] para o canal r;
     */
public:
    /**
     * @brief PutBox realiza uma ou várias chamadas da função putVoxel para formar uma caixa com dimensões definidas pelos parâmetros da função putBox.
     * @param x0 armazena a coordenada inicial da caixa no eixo x;
     * @param x1 armazena a coordenada final da caixa no eixo x;
     * @param y0 armazena a coordenada inicial da caixa no eixo y;
     * @param y1 armazena a coordenada final da caixa no eixo y;
     * @param z0 armazena a coordenada inicial da caixa no eixo z;
     * @param z1 armazena a coordenada final da caixa no eixo z;
     */
    CutBox(int x0, int x1, int y0, int y1, int z0, int z1);
    //!
   /*!
     @brief ~CutBox é o destrutor da classe responsável pela liberação da memória ao fim da execução do programa;
     */
    ~CutBox();
    /**
     * @brief draw é uma função que instrui o objeto a se desenhar em um objeto do tipo Sculptor;
     * @param t referencia uma variável do tipo Sculptor;
     */
    void draw(Sculptor &t);
};

#endif // CUTBOX_H
