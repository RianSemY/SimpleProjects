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

    if(b>0) printf("\nA partir do ponto de corte do eixo Y a curvatura da parábola irá subir");
    if(b==0) printf("\nA partir do ponto de corte não haverá inclinações");
    if(b<0) printf("\nA partir do ponto de corte do eixo Y a curvatura da parábola irá descer");

    printf("\nA parábola toca o eixo Y no %.2f\n\n", c);

    if(delta<0){
	printf("Delta = %.2f. Negativo, portanto sem raízes reais\n", delta);
	} else{

    raiz_1 = (-b + (sqrt(delta)))/(2*a);
    raiz_2 = (-b - (sqrt(delta)))/(2*a);

    printf("\n Delta = %.2f\n Raiz 1 = %.2f\n Raíz 2 = %.2f\n", delta, raiz_1, raiz_2);
}
    xVertice = -(b/(2*a));
    yVertice = -(delta/(4*a));
    printf("\nX do vértice (xV): %.2f\n", xVertice);
    a > 0 ? printf("Y do vértice (yV) ou ponto mínimo: %.2f\n\n", yVertice) : printf("Y do vértice (yV) ou ponto máximo: %.2f\n\n", yVertice);;

    if(delta>0) printf("A parábola toca DUAS vezes o eixo dos X, tem duas raízes reais diferentes \n(no %.2f e no %.2f)", raiz_1, raiz_2);
    if(delta==0) printf("A parábola toca UMA vez o eixo dos X, tem duas raízes iguais \n(no %.2f ou no %.2f)", raiz_1, raiz_2);
    if(delta<0) printf("A parábola NÃO toca o eixo dos X, não tem raízes reais");

    printf("\n\nAperte qualquer tecla para continuar...\n\t\t");
    getch();
    system("cls");
    }
}
