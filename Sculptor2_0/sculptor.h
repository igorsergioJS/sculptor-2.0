#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <iostream>

using namespace std;

/**
 * @brief O struct Voxel é responsável por definir as variáveis onde os valores dos canais RGB,
 * a transparência(alpha) de cada Voxel criado, além da utilização de um booleano para identificar se
 * determinado voxel será incluído ou não na visualização.
 */

struct Voxel {
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
  float b; // Colors
  /**
     * @brief a armazena o valor da transparência para voxel selecionado. Varia no intervalo [0,1];
     */
  float a;
  /**
     * @brief isOn aramazena um valor lógico em relação ao voxel selecionado. Varia entre true e false;
     */
  bool isOn; // Included or not
};

/**
 * @brief A classe escultor apresenta variáveis privadas e funções públicas.
 * @details As variáveis privadas acessadas apenas por membros da mesma classe e as funções públicas
 * podem ser acessadas fora do objeto, onde este estiver definido.
 */
class Sculptor {
protected:
    /**
       * @brief v é um ponteiro para um ponteiro para um ponteiro auxilia na alocação dinâmica
       * de memória da matriz 3D, onde os voxels ficam "armazenados".
       */
  Voxel ***v;
  // 3D matrix
    /**
     * @brief nx armazena a dimensão em x da matriz 3D;
     */
  int nx;
  /**
     * @brief ny armazena a dimensão em y da matriz 3D;
     */
  int ny;
  /**
     * @brief nz armazena a dimensão em z da matriz 3D;
     */
  int nz;
  /**
     * @brief r armazena o valor de r para ser usado dentro da classe;
     */
  float r;
  /**
     * @brief g armazena o valor de g para ser usado dentro da classe;
     */
  float g;
  /**
     * @brief b armazena o valor de b para ser usado dentro da classe;
     */
  float b;
  // Current drawing color
  /**
     * @brief a armazena o valor da transparência para ser usado dentro da classe;
     */
  float a;
public:
  /**
     * @brief Sculptor é o construtor da classe responsável por receber as dimensões (x,y,z)
     * e pela alocação dinâmica de memória para a matriz 3D.
     *
     * @param _nx armazena a dimensão em x;
     * @param _ny armazena a dimensão em y;
     * @param _nz armazena a dimensão em z;
     */
  Sculptor(int _nx, int _ny, int _nz);
  //!
    /*!
      @brief ~Sculptor é o destrutor da classe responsável pela liberação da memória ao fim da execução do programa.
    */
  ~Sculptor();
  /**
     * @brief setColor é uma função que atribui valores aos parâmetros que representam os canais RGB e sua transparência.
     * @param _r recebe o valor decimal no intervalo [1,0] para o canal r;
     * @param _g recebe o valor decimal no intervalo [1,0] para o canal g;
     * @param _b recebe o valor decimal no intervalo [1,0] para o canal b;
     * @param alpha recebe o valor decimal no intervalo [1,0] para a transparência;
     */
  void setColor(float _r, float _g, float _b, float alpha);
  /**
     * @brief putVoxel atribui a um elemento da matriz 3D as variáveis presentes no struct Voxel
     * tornando o voxel selecionado visível e ativo.
     * @details
     * @param x recebe a coordenada x onde o voxel deve está posicionado;
     * @param y recebe a coordenada y onde o voxel deve está posicionado;
     * @param z recebe a coordenada z onde o voxel deve está posicionado;
     */
  void putVoxel(int x, int y, int z);
  /**
     * @brief cutVoxel atribui a um elemento da matriz 3D a variável presente no struct Voxel isOn como false.
     *
     * @param x recebe a coordenada x onde o voxel deve está desativado;
     * @param y recebe a coordenada y onde o voxel deve está desativado;
     * @param z recebe a coordenada z onde o voxel deve está desativado;
     */
  void cutVoxel(int x, int y, int z);
  /**
     * @brief writeOFF é responsável pela criação de um arquivo OFF da figura criada pelos métodos da classe
     *  possibilitando a visualização em um software gráfico.
     * @param filename armazena o nome escolhido para o arquivo a ser criado;
     * @details A criação do arquivo segue os padrões apresentados para um arquivo OFF padrão, contendo:
     * - "OFF" na primeira linha do arquivo de texto;
     * - Número de vértices e faces;
     * - Coordenadas dos vértices e faces;
     */
  void writeOFF(string filename);
};


#endif // SCULPTOR_H
