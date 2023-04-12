#include <stdio.h>

float calcularFahrenheit (float temperatura){
	int resultado;
	resultado = (9.0 / 5.0) * temperatura + 32.0;	
	return resultado;	
}

float calcularCelsius (float temperatura){
	int resultado;
	resultado = (temperatura - 32) * 5.0 / 9.0;	
	return resultado;	
}




int main() {
   int escolha;
   float temperatura, resultado;

   printf("Qual conversao de temperatura deseja realizar?\n");
   printf("1. Celsius para Fahrenheit\n");
   printf("2. Fahrenheit para Celsius\n");
   scanf("%d", &escolha); //1
   printf("Digite a temperatura em graus Celsius: ");
   scanf("%f", &temperatura); //20
   
   switch (escolha){
		case 1: 
	      	printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", temperatura, calcularFahrenheit(temperatura));
      	break;
      	case 2: 
	      	printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", temperatura, calcularCelsius (temperatura));
      	break;
      	default: printf("Opcao invalida.\n");
   }

   return 0;
}
