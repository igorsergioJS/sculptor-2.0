#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"
#include "sculptor.h"
/**
 * @brief A classe concreta CutVoxel é derivada da classe abstrata FiguraGeometrica.
 */
class CutVoxel : public FiguraGeometrica
{

protected:
    /**
     * @brief x recebe a coordenada x onde o voxel deve está desativado;
     */
    int x;
    /**
     * @brief y recebe a coordenada y onde o voxel deve está desativado;
     */
    int y;
    /**
     * @brief z recebe a coordenada z onde o voxel deve está desativado;
     */
    int z;

public:
    /**
       * @brief cutVoxel atribui a um elemento da matriz 3D a variável presente no struct Voxel isOn como false.
       *
       * @param x recebe a coordenada x onde o voxel deve está desativado;
       * @param y recebe a coordenada y onde o voxel deve está desativado;
       * @param z recebe a coordenada z onde o voxel deve está desativado;
       */
    CutVoxel(int x, int y, int z);
    //!
   /*!
     @brief ~CutVoxel é o destrutor da classe responsável pela liberação da memória ao fim da execução do programa;
     */
    ~CutVoxel();
    /**
     * @brief draw é uma função que instrui o objeto a se desenhar em um objeto do tipo Sculptor;
     * @param t referencia uma variável do tipo Sculptor;
     */
    void draw(Sculptor &t);

};

#endif // CUTVOXEL_H
