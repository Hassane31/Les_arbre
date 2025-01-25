#include "beb.h"

les_arbre_B_rech *cree_arbre(){
    les_arbre_B_rech * arbre =malloc (sizeof(les_arbre_B_rech));
    if(arbre == NULL){
        printf("erreur d allocation");
        exit(1);
    }
    arbre->val=0;
    arbre->D=NULL;
    arbre->G=NULL;
    return arbre;
}
