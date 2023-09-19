#include <stdio.h>
#include <stdlib.h>

struct personne {
        char nom[20];
        int age;
    };
int main()
{
    struct personne persone1;

    printf("Entrer le nom de persone:\n");
    scanf("%s", persone1.nom);

    printf("Entrer l'age de persone:\n");
    scanf("%d", &persone1.age);

    printf("Le nom et l'age sont\n");
    printf("nom %s\n", persone1.nom);
    printf("age %d\n", persone1.age);

    return 0;
}
