/*************************************************************************************
Programa: Euclid_sum.cpp
Descrição: Exibe uma soma euclidiana por coordenadas no plano cartesiano
Autor: Matheus Regis
*************************************************************************************/
#include<iostream>//declara iostream, entrada e saida
#include<cmath>//declara a biblioteca cmath que possui a função de raiz quadrada

//função main
int main()
{
  //Declarar variaveis
  
  //Posições
  int position1;//Declara x1
  int position2;//Declara x2
  int yosition1;//Declara y1
  int yosition2;//Declara y2
  
  //Variavies de diferença
  
  int diff_pos;//Declara a diferença de X1 com X2
  int diff_yos;//Declara a diferença de Y1 com Y2
  
  //Potências
  
  float pow_pos;//indica o resultado da diferença de x2 com x1 elevado ao quadrado
  float pow_yos;//indica o resultado da diferenca de y2 com y1 elevado ao quadrado
  
  //Variaveis de soma e resultado
  
  float sum;//soma das coordenadas ANTES de tirar a raiz
  float D;//Declara o resultado da Distância euclidiana, dada pela raiz, pela função sqrt
  
  //Fornercer ao usuario as coordenadas de X
  
  //X1
  std::cout << "Indique a coodernada de x1: ";
  std::cin >> position1;
  //X2
  std::cout << "Indique a coordernada de x2: ";
  std::cin >> position2;
  
  //Fornercer ao usuário as coordenadas de Y
  //Y1
  std::cout << "Indique a coordenada de y1: ";
  std::cin >> yosition1; 
  //Y2
  std::cout << "Indique a coordenad de y2: ";
  std::cin >> yosition2;
  
  //Diferença de X2 com X1
  diff_pos = position2 - position1;
  //Diferença de y2 com y1
  diff_yos = yosition2 - yosition1;
  
  //Resultado da diferença de x2 com x1 elevado ao quadrado
  pow_pos = pow(diff_pos,2);
  //Resultado da diferença de y2 com y1 elevado ao quadrado
  pow_yos = pow(diff_yos,2);
  
  //soma das coordenadas ANTes de tirar a raiz
  sum = pow_pos + pow_yos;
  //Resultado da Distância euclidiana
  D=sqrt(sum);
  std::cout << "A soma euclidiana das coordenadas são: "<< D << std::endl; //exibe na tela
  return 0; //se chegou aqui deu certo
}
  
  
