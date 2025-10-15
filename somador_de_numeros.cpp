//Esse programa é simples,soma apenas dois números inteiros :)//
#include<iostream>

//função main//
int main()
{
  int numberone = 0, numbertwo = 0; //basicamente essas váriaveis são do tipo inteiro e elas guardam o que o usuário necessitar//
  float sum = 0.0f; //essa variável é do tipo float,ela guarda o resultado da soma//
  std::cout << "Digite um número:\n";
  std::cin >> numberone;
  std::cout << "Digite outro número:\n";
  std::cin >> numbertwo;
  sum = numberone + numbertwo; //a soma em si, feita após ler os valores//
  std::cout << "a soma dos dois números digitados são:\n" << sum;
  return 0;//retorno do zero//
}//fim do programa
