/*************************************************************************************
Programa: somador_de_numeros.cpp
Descrição: Soma dois numeros fornercidos pelo usuário
Autor: Matheus Regis
*************************************************************************************/
#include<iostream>

//função main
int main()
{
  //Variaveis
  int number1;
  int number2;
  int sum;

  //Data Entrance
  
  std::cout<<"Digite o primeiro número inteiro: ";//entrada do primeiro número
  std::cin>>number1;//leitura do primeiro número
  std::cout<<"Digite o segundo número inteiro: ";//entrada do segundo número
  std::cin>>number2;//leitura do segundo número

  //Soma dos números
  sum=number1+number2;//soma dos dois números//
  std::cout<<"A soma dos dois números é: "<<sum<<std::endl;//exibição do resultado
  
  return 0;
}//fim do programa
