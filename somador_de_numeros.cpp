//Esse programa é simples,soma apenas dois números inteiros :)//
#include<iostream>

//função main//
int main()
{
  int number_one,number_two,sum;//basicamente essas váriaveis são do tipo inteiro e elas guardam o que o usuário necessitar//
  sum = number_one + number_two;//a soma em si//
  std::cout << "Digite um número:\n";
  std::cin >> number_one;
  std::cout << "Digite outro número:\n";
  std::cin >> number_two;
  std:: cout << "a soma dos dois números digitados são:\n" << sum << endl;
  return 0;//retorno do zero//
}//fim do programa
