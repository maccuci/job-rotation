#include <stdio.h>

int main() {
    float timeCar = 100 / 110.0;
    float timeTruck = 100 / 80.0;
    float timeTruck_total = timeTruck + 0.0833 * 2;
    float distanceCar = timeCar * 110;
    float distanceTruck = timeTruck_total * 80;

    if (distanceCar < distanceTruck) {
        printf("O carro estará mais próximo de Ribeirão Preto quando se cruzarem na rodovia.\n");
    } else {
        printf("O caminhão estará mais próximo de Ribeirão Preto quando se cruzarem na rodovia.\n");
    }
    return 0;
}