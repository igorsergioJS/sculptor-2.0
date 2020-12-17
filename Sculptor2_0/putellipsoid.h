#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"
/**
 * @brief A classe concreta PutEllipsoid é derivada da classe abstrata FiguraGeometrica.
 */
class PutEllipsoid : public FiguraGeometrica
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

    /**
     * @brief r recebe o valor decimal no intervalo [1,0] para o canal r;
     */
    float r;
    /**
     * @brief g recebe o valor decimal no intervalo [1,0] para o canal g;
     */
    float g;
    /**
     * @brief b recebe o valor decimal no intervalo [1,0] para o canal b;
     */
    float b;
    /**
     * @brief a recebe o valor decimal no intervalo [1,0] para a transparência;
     */
    float a;

public:
    /**
     * @brief PutEllipsoid realiza uma ou várias chamadas da função putVoxel para formar uma elipsóide com raios e coordenadas de centro definidas na chamada.
     * @param xcenter armazena a coordenada no eixo x onde a elipsóide deve estar centrada;
     * @param ycenter armazena a coordenada no eixo y onde a elipsóide deve estar centrada;
     * @param zcenter armazena a coordenada no eixo z onde a elipsóide deve estar centrada;
     * @param rx armazena comprimento(em voxels) do raio da elipsóide em relação ao eixo x;
     * @param ry armazena comprimento(em voxels) do raio da elipsóide em relação ao eixo y;
     * @param rz armazena comprimento(em voxels) do raio da elipsóide em relação ao eixo z;
     * @param r recebe o valor decimal no intervalo [1,0] para o canal r;
     * @param g recebe o valor decimal no intervalo [1,0] para o canal g;
     * @param b recebe o valor decimal no intervalo [1,0] para o canal b;
     * @param a recebe o valor decimal no intervalo [1,0] para a transparência;
     */
    PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);
    //!
   /*!
     @brief ~PutBox é o destrutor da classe responsável pela liberação da memória ao fim da execução do programa;
     */
    ~PutEllipsoid();
    /**
     * @brief draw é uma função que instrui o objeto a se desenhar em um objeto do tipo Sculptor;
     * @param t referencia uma variável do tipo Sculptor;
     */
    void draw(Sculptor &t);
};

#endif // PUTELLIPSOID_H
