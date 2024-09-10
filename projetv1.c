#include <stdio.h>
#include <string.h>

struct dateNaissance {
    
    char d[20] ;
    char m[20] ;
    char y[20] ;
};
struct Etudiants {
    char numero[50] ;
    char nom[50];
    char prenom[50];
    struct dateNaissance date;
    char departement[50];
    float noteGenerale;
};

int action(){
    
    int action = 0 ;
    printf("\nchoisir votre action :\n");
    
    printf("1.Ajouter un étudiant \n");
    printf("2.Modifier un étudiant  \n");
    printf("3.supprimer un étudiant  \n");
    printf("4.Afficher les détails d'un étudiant \n");
    printf("5.Calculer la moyenne générale \n");
    printf("6.\nAfficher le nombre total d'étudiants inscrits.\n Afficher le nombre d'étudiants dans chaque département.\n Afficher les étudiants ayant une moyenne générale supérieure à un certain seuil.\nAfficher les 3 étudiants ayant les meilleures notes.\nAfficher le nombre d'étudiants ayant réussi dans chaque département (ceux ayant une note supérieure ou égale à 10/20).\n");
   
    printf("7.Afficher le nombre d'étudiants ayant réussi dans chaque département (ceux ayant une note supérieure ou égale à 10/20).\n");
    printf("8.Afficher la liste des étudiants inscrits dans un département spécifique.\n");
   scanf("%d",&action);
   
   return action ;
    
};

// int ajouteEtudiant(int n,struct Etudiants){
//     n++ ;
//     struct Etudiants Etudiant[n] ;

//     printf("Numéro:");
//         scanf("%s",Etudiant[n].numero);
        
//         printf("Nom:");
//         scanf("%s",Etudiant[n].nom);
        
//         printf("Prénom:");
//         scanf("%s",Etudiant[n].prenom);
        
//         printf("jour de naissance: ");
//         scanf("%s",Etudiant[n].date.d);
        
//         printf("mois de naissance:");
//         scanf("%s",Etudiant[n].date.m);
        
//         printf("annee de naissance: ");
//         scanf("%s",Etudiant[n].date.y);
        
//         printf("Département:");
//         scanf("%s",Etudiant[n].departement);
        
//         printf("Note générale:");
//         scanf("%.2f",Etudiant[n].noteGenerale);
//         };

int modifierEtudiant(struct Etudiants Etudiant[],int n ){
     
char nom[100];
     
printf("entrez le nom d'étudiant que vous souhaitez modifier :");
scanf("%s",nom);

   for(i=0; i<n ; i++){
       
      if(strcmp(Etudiants[i].nom,nom)==0){
          
        printf("\nÉtudiant %d:\n", i + 1);
        printf("Numéro:%s \n",Etudiant[i].numero);
        scanf("\n %s ",Etudiant[i].numero);
        printf("Nom:\n", Etudiant[i].nom);
        scanf("%s\n",Etudiant[i].nom);
        printf("Prénom: %s\n",Etudiant[i].prenom);
        scanf("%s\n",Etudiant[i].prenom);
        printf("jour de naissance: %s\n",Etudiant[i].date.d);
        scanf("%s\n",Etudiant[i].date.d);
        printf("mois de naissance: %s\n",Etudiant[i].date.m);
        scanf("%s\n",Etudiant[i].date.m);
        printf("annee de naissance: %s\n",Etudiant[i].date.y);
        scanf("%s\n",Etudiant[i].date.y);
        printf("Département: %s\n",Etudiant[i].departement);
        scanf("%s\n",Etudiant[i].departement);
        printf("Note générale: %.2f\n",Etudiant[i].noteGenerale);
        scanf("%s\n",Etudiant[i].noteGenerale);
          
      }
       
   };
   
    
}

int main() {
    
    int n=0 ;
     
    printf("Entrez le nombre d'étudiants que vous souhaitez saisir: ");
    scanf("%d", &n);
     
    struct Etudiants Etudiant[n] ;

    printf("\nInformations des étudiants:\n");
        
    for(int i=0 ; i<n ; i++){
   
        printf("\nÉtudiant %d:\n", i + 1);
        
        printf("Numéro:");
        scanf("%s",Etudiant[i].numero);
        
        printf("Nom:");
        scanf("%s",Etudiant[i].nom);
        
        printf("Prénom:");
        scanf("%s",Etudiant[i].prenom);
        
        printf("jour de naissance: ");
        scanf("%s",Etudiant[i].date.d);
        
        printf("mois de naissance:");
        scanf("%s",Etudiant[i].date.m);
        
        printf("annee de naissance: ");
        scanf("%s",Etudiant[i].date.y);
        
        printf("Département:");
        scanf("%s",Etudiant[i].departement);
        
        printf("Note générale:");
        scanf("%.2f",Etudiant[i].noteGenerale);
        };
        
    int a=action() ;
    
    switch(a){
        case 1 : // ajouteEtudiant(n,Etudiant) \\ ;
        break;
        case 2 :modifierEtudiant(Etudiant,n);
          

    }
    
    return 0 ;
}
