#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

int main(){
    system("color a");
    setlocale(LC_ALL,"portuguese");

    float a, b, c, aux=1;
    float raiz_1, raiz_2, delta, yVertice, xVertice;

    while(aux){
    do{
    printf("\nInsira o valor de A (a != 0): ");
    scanf("%f", &a);
    fflush(stdin);
    }while(a==0);
    printf("Insira o valor de B: ");
    scanf("%f", &b);
    fflush(stdin);
    printf("Insira o valor de C: ");
    scanf("%f", &c);
    fflush(stdin);
    /*-----------------------------------------*/
    delta = pow(b,2) -4*a*c;

    a > 0 ? printf("\nConcavidade para cima\n") : printf("\nConcavidade para baixo\n");

    if(b>0) printf("\nA partir do ponto de corte do eixo Y a curvatura da par�bola ir� subir");
    if(b==0) printf("\nA partir do ponto de corte n�o haver� inclina��es");
    if(b<0) printf("\nA partir do ponto de corte do eixo Y a curvatura da par�bola ir� descer");

    printf("\nA par�bola toca o eixo Y no %.2f\n\n", c);

    if(delta<0){
	printf("Delta = %.2f. Negativo, portanto sem ra�zes reais\n", delta);
	} else{

    raiz_1 = (-b + (sqrt(delta)))/(2*a);
    raiz_2 = (-b - (sqrt(delta)))/(2*a);

    printf("\n Delta = %.2f\n Raiz 1 = %.2f\n Ra�z 2 = %.2f\n", delta, raiz_1, raiz_2);
}
    xVertice = -(b/(2*a));
    yVertice = -(delta/(4*a));
    printf("\nX do v�rtice (xV): %.2f\n", xVertice);
    a > 0 ? printf("Y do v�rtice (yV) ou ponto m�nimo: %.2f\n\n", yVertice) : printf("Y do v�rtice (yV) ou ponto m�ximo: %.2f\n\n", yVertice);;

    if(delta>0) printf("A par�bola toca DUAS vezes o eixo dos X, tem duas ra�zes reais diferentes \n(no %.2f e no %.2f)", raiz_1, raiz_2);
    if(delta==0) printf("A par�bola toca UMA vez o eixo dos X, tem duas ra�zes iguais \n(no %.2f ou no %.2f)", raiz_1, raiz_2);
    if(delta<0) printf("A par�bola N�O toca o eixo dos X, n�o tem ra�zes reais");

    printf("\n\nAperte qualquer tecla para continuar...\n\t\t");
    getch();
    system("cls");
    }
}
