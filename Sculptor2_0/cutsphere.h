#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"
/**
 * @brief A classe concreta CutSphere é derivada da classe abstrata FiguraGeometrica.
 */
class CutSphere : public FiguraGeometrica
{

protected:

    /**
     * @brief xcenter armazena a coordenada no eixo x onde a esfera deve estar centrada;
     */
    int xcenter;
    /**
     * @brief ycenter armazena a coordenada no eixo y onde a esfera deve estar centrada;
     */
    int ycenter;
    /**
     * @brief zcenter armazena a coordenada no eixo z onde a esfera deve estar centrada;
     */
    int zcenter;
    /**
     * @brief radius armazena comprimento(em voxels) do raio da esfera;
     */
    int radius;


public:
    /**
     * @brief CutSphere realiza uma ou várias chamadas da função cutVoxel para desativar o(s) voxel(s) presentes dentro de uma esfera com raio e coordenadas de centro definidas na chamada.
     * @param xcenter armazena a coordenada no eixo x onde a esfera deve estar centrada;
     * @param ycenter armazena a coordenada no eixo y onde a esfera deve estar centrada;
     * @param zcenter armazena a coordenada no eixo z onde a esfera deve estar centrada;
     * @param radius armazena comprimento(em voxels) do raio da esfera;
     */
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);
    //!
   /*!
     @brief ~CutSphere é o destrutor da classe responsável pela liberação da memória ao fim da execução do programa;
     */
    ~CutSphere();
    /**
     * @brief draw é uma função que instrui o objeto a se desenhar em um objeto do tipo Sculptor;
     * @param t referencia uma variável do tipo Sculptor;
     */
    void draw(Sculptor &t);

};

#endif // CUTSPHERE_H
