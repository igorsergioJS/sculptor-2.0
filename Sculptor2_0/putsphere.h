#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"
/**
 * @brief A classe concreta PutSphere é derivada da classe abstrata FiguraGeometrica.
 */
class PutSphere : public FiguraGeometrica
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
     * @brief PutSphere realiza uma ou várias chamadas da função putVoxel para formar uma esfera com raio e coordenadas de centro definidas na chamada.
     * @param xcenter armazena a coordenada no eixo x onde a esfera deve estar centrada;
     * @param ycenter armazena a coordenada no eixo y onde a esfera deve estar centrada;
     * @param zcenter armazena a coordenada no eixo z onde a esfera deve estar centrada;
     * @param radius armazena comprimento(em voxels) do raio da esfera;
     * @param r recebe o valor decimal no intervalo [1,0] para o canal r;
     * @param g recebe o valor decimal no intervalo [1,0] para o canal g;
     * @param b recebe o valor decimal no intervalo [1,0] para o canal b;
     * @param a recebe o valor decimal no intervalo [1,0] para a transparência;
     */
    PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
    //!
   /*!
     @brief ~PutBox é o destrutor da classe responsável pela liberação da memória ao fim da execução do programa;
     */
    ~PutSphere();
    /**
     * @brief draw é uma função que instrui o objeto a se desenhar em um objeto do tipo Sculptor;
     * @param t referencia uma variável do tipo Sculptor;
     */
    void draw(Sculptor &t);
};


#endif // PUTSPHERE_H
