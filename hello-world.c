#include <stdio.h>

int main(void)
{
    char animal;
    int numbOfAnimals;
    float cost, amountPerAnimal, amountPerDay, amountPerMonth, costPerMonth;

    printf("Selecione a opão de animal:\na - Leão\nb - Onça\nc - Girafa\nd - Crocodilo\n");
    scanf("%c", &animal);

    printf("Digite a quantidade de animais:");
    scanf("%d", &numbOfAnimals);

    printf("Digite o custo estimado por kilo de comida:");
    scanf("%f", &cost);

    cost = cost * numbOfAnimals;

    switch (animal)
    {
    case 'a': // Leão
        amountPerAnimal = 7;
        break;
    case 'b': // Onça
        amountPerAnimal = 5;
        break;
    case 'c': // Girafa
        amountPerAnimal = 7;
        break;
    case 'd': // Crocodilo
        amountPerAnimal = 10;
        break;

    default:
        printf("valor inválido!\n");
    }

    amountPerDay = numbOfAnimals * amountPerAnimal;
    amountPerMonth = amountPerDay * 30;
    costPerMonth = amountPerMonth * (cost / numbOfAnimals);

    printf("\n\nA quantidade alimento por animal é: %.2f\n", amountPerAnimal);
    printf("A quantidade alimento por dia é: %.2f\n", amountPerDay);
    printf("A quantidade alimento por mês é: %.2f\n", amountPerMonth);
    printf("O custo estimado por mês é: %.2f\n", costPerMonth);

    return 0;
}
