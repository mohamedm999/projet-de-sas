#include <stdio.h>
#include <string.h>

struct dateNaissance {
    char d[20];
    char m[20];
    char y[20];
};

struct Etudiants {
    char numero[50];
    char nom[50];
    char prenom[50];
    struct dateNaissance date;
    char departement[50];
    float noteGenerale;
};

struct Etudiants etudiant[100];
int n = 0;
char* departements[] = {"Informatique", "Mathématiques", "Physique", "Chimie", "Biologie", "Génie Électrique", "Génie Mécanique"};

void menu() {
    printf("\nChoisir votre action :\n");
    printf("1. Ajouter un étudiant \n");
    printf("2. Modifier un étudiant \n");
    printf("3. Supprimer un étudiant \n");
    printf("4. Afficher lise des étudiants \n");
    printf("5. Rechercher pour un étudiant par son nom. \n");
    printf("6. Afficher la liste des étudiants inscrits dans un département spécifique \n");
    printf("7. Calculer la moyenne générale \n");
    printf("8. Statistique \n");
    printf("9. Trier un étudiant\n");
    printf("8. Quitter\n");
}

void ajouteEtudiant() {
    printf("Saisir les informations de l'étudiant %d:\n", n + 1);
    
    // int found = 0 ;
    // do{
    //   printf("Numéro: ");
    //   scanf("%s", etudiant[n].numero);
    //   for(int i=0 ;i<n ; i++){
        
    //      if(strcmp(etudiant[i].numero,etudiant[n].numero)==0){
    //      printf("this etudiant already exist please try again");
    //      }else{
    //          found=1 ;
    //      }   
    //   }
        
    // }while(!found);
    
    printf("Numéro: ");
      scanf("%s", etudiant[n].numero);

    printf("Nom: ");
    scanf("%s", etudiant[n].nom);

    printf("Prénom: ");
    scanf("%s", etudiant[n].prenom);

    printf("Jour de naissance: ");
    scanf("%s", etudiant[n].date.d);

    printf("Mois de naissance: ");
    scanf("%s", etudiant[n].date.m);

    printf("Année de naissance: ");
    scanf("%s", etudiant[n].date.y);
    
    int found=0;
    do{
        printf("Département: ");
        scanf("%s", etudiant[n].departement);
        for(int i=0;i<7;i++){
        if(strcmp(departements[i], etudiant[n].departement)==0){
               found=1 ; 
        }
    }
    }while(!found);
    
    

    printf("Note générale: ");
    scanf("%f", &etudiant[n].noteGenerale);

    n++;
    printf("your data added succefully!\n");
}

void modifierEtudiant() {
    char nom[50];
    
    printf("Entrez le nom de l'étudiant que vous souhaitez modifier : ");
    scanf("%s", nom);

    for (int i = 0; i < n; i++) {
        if (strcmp(etudiant[i].nom, nom) == 0) {
            printf("\nModifier les informations de l'étudiant %d:\n", i + 1);
            // printf("Numéro  : %d : ", etudiant[i].numero);
            // scanf("%d", &etudiant[i].numero);
            printf("Nom  : %s  ", etudiant[i].nom);
            scanf("%s", etudiant[i].nom);
            printf("Prénom  : %s  ", etudiant[i].prenom);
            scanf("%s", etudiant[i].prenom);
            printf("Jour de naissance : %s  ", etudiant[i].date.d);
            scanf("%s", etudiant[i].date.d);
            printf("Mois de naissance : %s  ", etudiant[i].date.m);
            scanf("%s", etudiant[i].date.m);
            printf("Année de naissance  : %s  ", etudiant[i].date.y);
            scanf("%s", etudiant[i].date.y);
            printf("Département  : %s  ", etudiant[i].departement);
            scanf("%s", etudiant[i].departement);
            printf("Note générale : %.2f  ", etudiant[i].noteGenerale);
            scanf("%f", &etudiant[i].noteGenerale);
            printf("your data modified succefuly !\n");
            
        }
    }
    printf("Etudiant not found.\n");
}

void supprimerEtudiant() {
    char nom[50];
    
    printf("Entrez le nom de l'étudiant que vous souhaitez supprimer : ");
    scanf("%s", nom);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(etudiant[i].nom, nom) == 0) {
            found = 1;
            for (int j = i; j < n - 1; j++) {
                etudiant[j] = etudiant[j + 1];
            }
            n--;
            printf("your data deleted succefuly !\n");
        }
    }
    if (!found) {
        printf("Etudiant not found.\n");
    }
}

void afficherEtudiant(){
    
     printf("\nLa liste de votre etudiants:\n");
    
    for (int i = 0; i < n; i++) {
        printf("\nEtudiant %d \n",i+1);
        printf("Numéro  : %s \n ", etudiant[i].numero);
        printf("Nom  : %s \n", etudiant[i].nom);
        printf("Prénom  : %s \n", etudiant[i].prenom);
        printf("Date de naissance : %s/%s/%s \n", etudiant[i].date.d,etudiant[i].date.m,etudiant[i].date.y);
        printf("Département  : %s \n", etudiant[i].departement);
        printf("Note générale : %.2f \n\n ", etudiant[i].noteGenerale);
            
        }
    
}

void rechercher_Etudiant_par_nom(){
    
    char nom[50];
    
    printf("Entrez le nom de l'étudiant que vous souhaitez rechercher : ");
    scanf("%s", nom);
    
    for(int i= 0 ; i<n ; i++){
        
        if(strcmp(etudiant[i].nom,nom)){
            
          printf("\nEtudiant %d \n",i+1);
          printf("Numéro  : %d \n ", etudiant[i].numero);
          printf("Nom  : %s \n", etudiant[i].nom);
          printf("Prénom  : %s \n", etudiant[i].prenom);
          printf("Jour de naissance : %s \n", etudiant[i].date.d);
          printf("Mois de naissance : %s  \n", etudiant[i].date.m);
          printf("Année de naissance  : %s  \n", etudiant[i].date.y);
          printf("Département  : %s \n", etudiant[i].departement);
          printf("Note générale : %.2f \n\n ", etudiant[i].noteGenerale);
        }
        
    }
}

void rechercher_Etudiant_par_departement(){

    char nom[50];
    
    printf("Entrez le nom de le departement que vous souhaitez rechercher : ");
    scanf("%s", nom);

    for(int i=0;i<n;i++){
  
       if(strcmp(etudiant[i].departement,nom)==0){

            printf("\nEtudiant %d \n",i+1);
            printf("Numéro  : %s \n ", etudiant[i].numero);
            printf("Nom  : %s \n", etudiant[i].nom);
            printf("Prénom  : %s \n", etudiant[i].prenom);
            printf("Date de naissance : %s/%s/%s \n", etudiant[i].date.d,etudiant[i].date.m,etudiant[i].date.y);
            printf("Département  : %s \n", etudiant[i].departement);
            printf("Note générale : %.2f \n\n ", etudiant[i].noteGenerale);

       }

    }
}

void Calculer_moyenne_generale(){
     
        float somme=0 ;
        int conteur=0 ;
        
    for(int i=0 ; i<n ; i++){
            
            somme+=etudiant[i].noteGenerale;
            conteur++;
            
    }
    printf("le moyanne general de luniversité entière est  : %.2f \n",somme/conteur);
}

void Statistiques(){
    
    printf("Le nombre total d'étudiants inscrits est : %d\n", n);
    
    // for(int i=0; i<n-1 ;++){
        
    //     if(etudiant[i].noteGenerale>)
        
    // }
    
}

void Trier_etudiant(){
    float swap ;
    for(int i=0 ; i<n ; i++){
        
        for(int j=i+1 ; j<n ;i++){
            
            if(etudiant[i].noteGenerale>etudiant[j].noteGenerale){
                
                swap=etudiant[i].noteGenerale;
                etudiant[i].noteGenerale=etudiant[j].noteGenerale;
                etudiant[j].noteGenerale=swap;
            }
            
        }
    }
    printf("\nListe des étudiants triée par moyenne générale :\n");
    for (int i = 0; i < n; i++) {
        printf("\nÉtudiant %d :\n", i + 1);
        printf("Numéro : %s\n", etudiant[i].numero);
        printf("Nom : %s\n", etudiant[i].nom);
        printf("Prénom : %s\n", etudiant[i].prenom);
        printf("Date de naissance : %s/%s/%s\n", etudiant[i].date.d, etudiant[i].date.m, etudiant[i].date.y);
        printf("Département : %s\n", etudiant[i].departement);
        printf("Note générale : %.2f\n", etudiant[i].noteGenerale);
    }
};

int main() {
    int choix;

    do {
        menu();
        scanf("%d", &choix);

        switch (choix) {
            case 1: ajouteEtudiant(); 
            break;
            case 2: modifierEtudiant(); 
            break;
            case 3: supprimerEtudiant();
            break;
            case 4: afficherEtudiant(); 
            break;
            case 5: rechercher_Etudiant_par_nom(); 
            break;
            case 6: rechercher_Etudiant_par_departement(); 
            break;
            case 7: Calculer_moyenne_generale(); 
            break;
            case 8: Statistiques(); 
            break;
            case 9: Trier_etudiant(); 
            break;
            case 10: printf("Au revoir.\n"); 
            break;
        }
    } while (choix != 8);

    return 0;
}
