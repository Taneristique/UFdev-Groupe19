int  reponse;
void print_plantes(){
    printf("\n");
    printf("\n");
    printf("Les Plantes\n");
    printf("\n");
    printf("1)L'Orchis de Champagneux\n");
    printf("2)L'Orchidee Aerangis Articulata\n");
    printf("3)L'Orchis punaise\n");
    printf("4)L'Orchis a fleurs laches\n");
    printf("5)L'Orchis a long eperon\n");
    printf("6)L'Orchis bouffon\n");
    printf("7)L'Orchis de marais\n");
    printf("8)L'Orchis papillon\n");
    printf("9)L'Orchis de Provence\n");
    printf("10)Pereskia\n");
    printf("11)Le Figuier de Barbarie\n");
    printf("12)Astrophytum asterias\n");
    printf("13)Astrophytum ornatum\n");
    printf("14)Maihueniopsis darwinii\n");
    printf("15)Tephrocactus weberi\n");
    printf("16)Tephrocactus alexanderi\n");
    printf("17)Dryas integrifolia\n");
    printf("18)Dryade a huit petales\n");
    printf("19)L'Alchemille des Champs\n");
    printf("20)Prunier myrobolan\n");
    printf("21)L'Erable champetre\n");
    printf("22)L'Amelanchier a feuilles ovales\n");
    printf("23)L'Epine-vinette\n");
    printf("24)Clematite Vigne-blanche\n");
    printf("25)Le Buis\n");
    printf("26)Aubepines\n");
    printf("27)Le Houx\n");
    printf("28)Le Nerprun purgatif\n");
    printf("29)Le faux laurier des bois\n");
    printf("30)Le Pommier sauvage\n");
    printf("\n");
    printf("\n");
    printf("Choix : ");
}

int menu(){

    printf("          *****************************************************Connected Flowers********************************************************* ");
    printf("\n");
    printf("\n");
    printf("1)Liste des Plantes\n");
    printf("2)Exit\n");
    int reponse;
    scanf("%d",&reponse);
    if (reponse==1){
        system("cls");
        print_plantes();
    }
    else if(reponse==2){
        exit(2);

    }else{
        system("cls");
        menu();
        selecte_une_plante();
    }
}

