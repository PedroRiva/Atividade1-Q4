#include <iostream>
#include<bitset>

using namespace std;

int main() {
  int num1=0,num2=0,soma=0,escolha=0,diferenca=0,prod=0,div=0,modulo=0;

  cout<<"Digite um numero entre 0 a 255"<<endl;
  cin>>num1;
  cout<<"Digite outro numero entre 0 a 255"<<endl;
  cin>>num2;

cout<<"Selecione uma operacao a ser realizada!"<<endl;
cout<<"1- Soma"<<endl;
cout<<"2- Subtracao"<<endl;
cout<<"3- Multiplicacao"<<endl;
cout<<"4- Divisao"<<endl;
cout<<"5- Operador Modulo"<<endl;
cin>>escolha;

switch (escolha){
  case 1:
  soma = num1+num2;
  cout<<"A soma eh: "<< bitset<10>(soma);
  break;

  case 2:
  diferenca = num1-num2;
  cout<<"A diferenca eh: "<< bitset<10>(diferenca);
  break;

  case 3:
  prod = num1*num2;
  cout<<"O produto eh: "<< bitset<10>(prod);
  break;

  case 4:
  div = num1/num2;
  cout<<"A divisao eh: "<< bitset<10>(div);
  break;

  case 5:
  modulo = num1%num2;
  cout<<"O resultado do operador module eh: "<<bitset<10>(modulo);
  break;

}
}