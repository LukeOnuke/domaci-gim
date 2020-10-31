#include <stdio.h>
#include <math.h>

/*
* Gets the worldSize in megabytes by getting the sides of the world and deviding it by 16 to get the chunks, then
* squaring that valiue to get the surface area of the chunks and then deviding that by 1024 (the ammount of chunks
* that fit into one region file). Then when it gets the ammount of region files, then it multiplies it by 5, the
* avarage file size of a region im megabytes
* */
int main() {
    printf("World size calculator\n");
    int radius;
    printf("What length are the sides of the world (number): ");
    scanf("%d", &radius);
    float worldSize = pow(radius / 16, 2) / 1024 *5;
    printf("\nWorldsize in MB - %f", worldSize);
    getchar();
    printf("\nDo you want to get the world size in GB, B and TB? (Y/N) : ");
    char confirmation;
    scanf("%c", &confirmation);
    if(confirmation == 'Y' || confirmation == 'y'){
        printf("\nSize in B %f\n", worldSize * 1000000);
        printf("Size in GB %f\n", worldSize / 1000);
        printf("Size in TB %f", worldSize / 1000000);
    }
    return 0;
}
