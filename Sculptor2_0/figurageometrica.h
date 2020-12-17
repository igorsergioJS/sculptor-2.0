#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "sculptor.h"

/**
 * @brief FiguraGeometrica é uma classe abstrata que representa objetos primitivos genéricos;
 */
class FiguraGeometrica
{
public:

   /**
    * @brief ~FiguraGeometrica é o construtor da classe responsável pela alocação da memória no início da execução do programa;
     */
  FiguraGeometrica();
  //!
 /*!
   @brief ~FiguraGeometrica é o destrutor da classe responsável pela liberação da memória ao fim da execução do programa;
   */
  virtual ~FiguraGeometrica();
  /**
   * @brief draw é uma função virtual que instrui o objeto a se desenhar em um objeto do tipo Sculptor;
   * @param t referencia uma variável do tipo Sculptor;
   */
  virtual void draw(Sculptor &t)=0;
};


#endif // FIGURAGEOMETRICA_H
