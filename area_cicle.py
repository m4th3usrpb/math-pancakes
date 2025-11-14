#***************************************************************#
#Primeiro programa em Python do math-pancakes
#Este programa é simples, calcula a área da circunferenica
#Autor: Matheus Regis
#Versão do Python: 3.13
#***************************************************************#

#Boas Vindas
print('Bem vindo ao meu programa que calcula áreas de circunferênicancias')

#importar a biblioteca math 
import math 

#Pedir ao usuáro para digitar o raio da circunferênica 
radius = float(input('Digite o raio da circunferência:'))

#Calcular a área da circunferência

area = math.pi * pow(radius,2)
print('A área da sua circunferência é:' ,area)
print('Fim do programa,obrigado pelo uso')
