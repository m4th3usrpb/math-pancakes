//Esse programa é simples,soma apenas dois números inteiros :)//
#include<iostream>

//função main//
int main()
{
  int number1;
  int number2;
  int sum;
  std::cout<<"Digite o primeiro número inteiro: ";//entrada do primeiro número//
  std::cin>>number1;//leitura do primeiro número//
  std::cout<<"Digite o segundo número inteiro: ";//entrada do segundo número//
  std::cin>>number2;//leitura do segundo número//
  sum=number1+number2;//soma dos dois números//
  std::cout<<"A soma dos dois números é: "<<sum<<std::endl;//exibição do resultado//
  
  return 0;//retorno do zero//
}//fim do programa
