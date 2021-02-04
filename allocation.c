
#include <stdio.h>
 #include <stdlib.h>
int main() {
   int i;
  int nombreDAmis = 10;
    // ageAmis = NULL; // Ce pointeur va servir de tableau après l'appel du malloc master_V2

    

    if (nombreDAmis > 0) // Il faut qu'il ait au moins un ami (je le plains un peu sinon :p)
    {
        int* ageAmis = malloc(nombreDAmis * sizeof(int)); // On alloue de la mémoire pour le tableau
        if (ageAmis == NULL) // On vérifie si l'allocation a marché ou non
        {
            exit(0); // On arrête tout
        }

    // On demande l'âge des amis un à un
        for (i = 0 ; i < nombreDAmis ; i++)
        {
           ageAmis[i]=10;
        }

        // On affiche les âges stockés un à un
        printf("\n\nVos amis ont les ages suivants :\n");
        for (i = 0 ; i < nombreDAmis ; i++)
        {
            printf("%d ans\n", ageAmis[i]);
        }

        // On libère la mémoire allouée avec malloc, on n'en a plus besoin
        free(ageAmis);
    }
}