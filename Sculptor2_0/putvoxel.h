#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "sculptor.h"
#include "figurageometrica.h"

/**
 * @brief A classe concreta PutVoxel é derivada da classe abstrata FiguraGeometrica.
 */
class PutVoxel : public FiguraGeometrica
{

protected:
    /**
     * @brief x recebe a coordenada x onde o voxel deve está posicionado;
     */
    int x;
    /**
     * @brief y recebe a coordenada y onde o voxel deve está posicionado;
     */
    int y;
    /**
     * @brief z recebe a coordenada z onde o voxel deve está posicionado;
     */
    int z;

    /**
     * @brief r armazena o valor do canal r(vermelho) para voxel selecionado. Varia no intervalo [0,1];
     */
    float r;
    /**
     * @brief g armazena o valor do canal g(verde) para voxel selecionado. Varia no intervalo [0,1];
     */
    float g;
    /**
     * @brief b armazena o valor do canal b(azul) para voxel selecionado. Varia no intervalo [0,1];
     */
    float b;
    /**
     * @brief a armazena o valor da transparência para voxel selecionado. Varia no intervalo [0,1];
     */
    float a;

public:

    /**
       * @brief putVoxel atribui a um elemento da matriz 3D a variável presente no struct Voxel isOn como true.
       *
       * @param x recebe a coordenada x onde o voxel deve está ativado;
       * @param y recebe a coordenada y onde o voxel deve está ativado;
       * @param z recebe a coordenada z onde o voxel deve está ativado;
       * @param r recebe o valor do canal r(vermelho) para voxel selecionado. Varia no intervalo [0,1];
       * @param g recebe o valor do canal g(verde) para o voxel selecionado. Varia no intervalo [0,1];
       * @param b recebe o valor do canal b(azul) para o voxel selecionado. Varia no intervalo [0,1];
       * @param a recebe o valor decimal no intervalo [1,0] para a transparência;
       */
    PutVoxel(int x, int y, int z, float r, float g, float b, float a);
     //!
    /*!
      @brief ~PutVoxel é o destrutor da classe responsável pela liberação da memória ao fim da execução do programa;
      */
    ~PutVoxel();
    /**
     * @brief draw é uma função que instrui o objeto a se desenhar em um objeto do tipo Sculptor;
     * @param t referencia uma variável do tipo Sculptor;
     */
    void draw(Sculptor &t);

};

#endif // PUTVOXEL_H
