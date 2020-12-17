#ifndef CUTELLOPSOID_H
#define CUTELLOPSOID_H

#include "figurageometrica.h"
/**
 * @brief A classe concreta CutEllipsoid é derivada da classe abstrata FiguraGeometrica.
 */
class CutEllipsoid : public FiguraGeometrica
{

protected:

    /**
     * @brief xcenter armazena a coordenada no eixo x onde a elipsóide deve estar centrada;
     */
    int xcenter;
    /**
     * @brief ycenter armazena a coordenada no eixo y onde a elipsóide deve estar centrada;
     */
    int ycenter;
    /**
     * @brief zcenter armazena a coordenada no eixo z onde a elipsóide deve estar centrada;
     */
    int zcenter;
    /**
     * @brief rx armazena comprimento(em voxels) do raio da elipsóide em relação ao eixo x;
     */
    int rx;
    /**
     * @brief ry armazena comprimento(em voxels) do raio da elipsóide em relação ao eixo y;
     */
    int ry;
    /**
     * @brief rz armazena comprimento(em voxels) do raio da elipsóide em relação ao eixo z;
     */
    int rz;

public:

    /**
     * @brief CutEllipsoid realiza uma ou várias chamadas da função cutVoxel para desativar o(s) voxel(s) presentes dentro de uma elipsóide com raios e coordenadas de centro definidas na chamada.
     * @param xcenter armazena a coordenada no eixo x onde a elipsóide deve estar centrada;
     * @param ycenter armazena a coordenada no eixo y onde a elipsóide deve estar centrada;
     * @param zcenter armazena a coordenada no eixo z onde a elipsóide deve estar centrada;
     * @param rx armazena comprimento(em voxels) do raio da elipsóide em relação ao eixo x;
     * @param ry ry armazena comprimento(em voxels) do raio da elipsóide em relação ao eixo y;
     * @param rz rz armazena comprimento(em voxels) do raio da elipsóide em relação ao eixo z;
     */
    CutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    //!
   /*!
     @brief ~CutEllipsoid é o destrutor da classe responsável pela liberação da memória ao fim da execução do programa;
     */
    ~CutEllipsoid();
    /**
     * @brief draw é uma função que instrui o objeto a se desenhar em um objeto do tipo Sculptor;
     * @param t referencia uma variável do tipo Sculptor;
     */
    void draw(Sculptor &t);
};

#endif // CUTELLOPSOID_H
