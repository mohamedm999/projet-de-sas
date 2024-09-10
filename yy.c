 printf("\nInformations des étudiants:\n");
        for (int i = 0; i < n; i++) {
        printf("\nÉtudiant %d:\n", i + 1);
        printf("Numéro:");
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

    printf("\nInformations des étudiants:\n");
        for (int i = 0; i < n; i++) {
        printf("\nÉtudiant %d:\n", i + 1);
        printf("Numero:");
        scanf("Numero: %s\n",Etudiant[i].numero);
        printf("Nom:");
        scanf("%s\n",Etudiant[i].nom);
        printf("Prénom:");
        scanf("%s\n",Etudiant[i].prenom);
        printf("jour de naissance: ");
        scanf("%s\n",Etudiant[i].date.d);
        printf("mois de naissance:");
        scanf("%s\n",Etudiant[i].date.m);
        printf("annee de naissance: ");
        scanf("%s\n",Etudiant[i].date.y);
        printf("Département:");
        scanf("%s\n",Etudiant[i].departement);
        printf("Note générale: %.2f\n");
        scanf("%.2f\n",Etudiant[i].noteGenerale);