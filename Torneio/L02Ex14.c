#include <stdio.h>
int main()
{
    int num,num1;
    scanf("%d %d",&num,&num1);

    if(((((num1-num)/100)*60)+((num1-num)%100))<=15)
    {
        printf("Entrada \n %.2d:%.2d \nSaida \n %.2d:%.2d \n Duracao(min)\n %d \n Preco(centavos)\n %d",(num/100),(num-(num/100)*100),(num1/100),(num1-(num1/100)*100),((((num1-num)/100)*60)+((num1-num)%100)),0);
    }
    else if((((((num1-num)/100)*60)+((num1-num)%100))>15 && (((num1-num)/100)*60)+((num1-num)%100))<=60)
    {
        printf("Entrada \n %.2d:%.2d \nSaida \n %.2d:%.2d \n Duracao(min)\n %d \n Preco(centavos)\n %d",(num/100),(num-(num/100)*100),(num1/100),(num1-(num1/100)*100),((((num1-num)/100)*60)+((num1-num)%100)),(30*((((num1-num)/100)*60)+((num1-num)%100))));
    }

    else if(((((num1-num)/100)*60)+((num1-num)%100))>60 && ((((num1-num)/100)*60)+((num1-num)%100))<=120)
    {
        printf("Entrada \n %.2d:%.2d \n Saida \n %.2d:%.2d \n Duracao(min)\n %d \n Preco(centavos)\n %d",(num/100),(num-(num/100)*100),(num1/100),(num1-(num1/100)*100),((((num1-num)/100)*60)+((num1-num)%100)),(20*((((num1-num)/100)*60)+((num1-num)%100))));
    }
    else if(((((num1-num)/100)*60)+((num1-num)%100))>120 )
    {
        printf("Entrada \n %.2d:%.2d \n Saida \n %.2d:%.2d \n Duracao(min)\n %d \n Preco(centavos)\n %d",(num/100),(num-(num/100)*100),(num1/100),(num1-(num1/100)*100),((((num1-num)/100)*60)+((num1-num)%100)),(10*((((num1-num)/100)*60)+((num1-num)%100))));
    }
    return 0;
}
