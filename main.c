#include<stdio.h>
#include"potenze.h"

int main()
{
    char operazione;
    int risultato, valore;  

//inserimento del valore e dell'operazione da eseguire
    printf("scrivi 'Q' per fare il quadrato del valore da inserire\n");
    printf("scrivi 'C' per fare il cubo\n");

    scanf("%c", &operazione);
    
    printf("inserisci un numero\n");

    scanf("%d", &valore);
    
//switch per eseguire le funzioni 
    switch(operazione)
    {
        case 'Q':

            risultato = quadrato(valore);
            printf("%d * %d = %d\n", valore,valore,risultato);

        break;

        case 'C':

            risultato = cubo(valore);
            printf("%d * %d * %d = %d\n", valore,valore,valore,risultato);

        break;

        default:
            printf("operazione non riconosciuta\n");
    }

    return 0;
}