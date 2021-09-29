#include <math.h>
#include <stdio.h>
#include <stdlib.h>
char repetir(){
    printf("\nFechar Aplicacao? Sim(s) Nao(n): ");
	char valor_charA;
	scanf("%c",&valor_charA);
	printf("--------------------------\n");
	return valor_charA;
	}
void soma(){
	printf("\n-----Soma-----\n");
	double a = 0,b = 0;
	
	
	printf("Numero: ");
	scanf("%lf",&b);
	printf("Numero a ser somado: ");
	scanf("%lf",&a);
	printf(" RESULTADO : %lf",a+b);
	}
void subtrair(){
 printf("\n-----Subtracao-----\n");
	double a,b;
	//char valor_charA[10];
	//char valor_charB[10];
	printf("Numero: ");
	scanf("%lf",&a);
	printf("Subtraendo: ");
	scanf("%lf",&b);
	//a = atoi(valor_charA);
	//b = atoi(valor_charB);
	printf(" RESULTADO : %lf",a-b);
 	}
 void multiplicar(){
 printf("\n-----Multiplicacao-----\n");
	double a,b;
	//char valor_charA[10];
	//char valor_charB[10];
	printf("Numero: ");
	scanf("%lf",&a);
	printf("Multiplicador :");
	scanf("%lf",&b);
	//a = atoi(valor_charA);
	//b = atoi(valor_charB);
	printf(" RESULTADO : %lf",a*b);
 	}
void divisao(){
 printf("\n-----Divisao-----\n");
    //float f;
  double d;
 	double d2;
  
  /*printf("Digite um float: ");
  scanf("%f",&f);
  printf("O float digitado foi %.20f\n",f);*/
  
  printf("Digite o dividendo: ");
  scanf("%lf",&d);
 	printf("Digite o divisor: ");
  scanf("%lf",&d2);
 	printf(" RESULTADO : %lf",d/d2);
 	}
 void others(){
 	char selector = 'o';
 	printf("\nIMC(i) Raiz quadrada(r): ");
 	scanf("%c",&selector);
 	if(selector == 'i')
 	{
 	double peso;
 	double altura;
	printf("Peso: ");
	scanf("%lf",&peso);
	printf("Altura :");
	scanf("%lf",&altura);
	printf(" RESULTADO IMC: %lf",peso/(pow(altura, 2)));
 	}if(selector == 'r')
 	{
 		double valor1;
 		printf("\nNumero a ser extraida a raiz: ");
 		scanf("%lf",&valor1);
 		printf("Raiz de %lf => %lf :",valor1, sqrt(valor1));
 	}
 	else
 	{
 		printf("\nErro de operacao: opcao invalida! \n\n");
 	}
 }
int main()
{
	char isRepeating = 'n';
	int operacao;
	char valor_charA;
	printf("-----CALCULADORA EM C-----\n\n");
	
	//sprintf(string,"%d",valor);
	while(isRepeating < 's')
	{
		printf("Selecione uma Operacao:\n");
		printf("Digite o que deseja fazer: \nmultiplicacao(*)\nadicao(+),\nsubtracao(-)\ndivisao(/)\nOutras opcoes(o)\nFechar aplicacao(x)\n");
		scanf("%c",&valor_charA);
	   // operacao = atoi(valor_charA);
		switch(valor_charA)
		{
			case '+':
             soma();
			 isRepeating = repetir();
			 break;
			case '-':
			 subtrair();
			 isRepeating = repetir();
			 break;
			case '*':
			 multiplicar();
			 isRepeating = repetir();
			 break;
			case '/':
			 divisao();
			 isRepeating = repetir();
			 break;
			 
			case 'o':
			 others();
			 isRepeating = repetir();
			 break;
			case 'x':
			 isRepeating = repetir();
			 break;
			default:
			 printf("\nErro de operacao: opcao invalida! \n\n");
			 break;
		}
	}
	printf("-----FIM DA APLICACAO-----");
	printf("\n--------------------------\n");
	return 0;
}

