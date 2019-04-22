#include <stdio.h>
#include <stdlib.h>
#include "print.h"
#include <conio.h>
int choose;
int main()
{
    menu();
    selecte_une_plante();
    }


void Orchis_de_Champagneux(){
    printf("Id_Plante  : 1\n ");
    printf("Nom_Plante : Orchis de Champagneux \n ");
    printf("Taille_min : 0,10 \n ");
    printf("Taille_max : 0,30 \n ");
    printf("Couleur : Violet \n");
    printf("Effets_Benefiques : Non Specifique \n");
    printf("Localisation_Plante : Mediterraneen\n");
    printf("Temparature atmospherique optimale : Ensoleile\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Orchis_de_Champagneux();
    }

}


void Orchidee_Aerangis_Articulata(){
    printf("Id_Plante  : 2\n ");
    printf("Nom_Plante : Orchidee Aerangis Articulata \n ");
    printf("Taille_min : 0,20 \n ");
    printf("Taille_max : 0,40 \n ");
    printf("Couleur : Blanche \n");
    printf("Effets_Benefiques : Non Specifique \n");
    printf("Localisation_Plante : Comores, Madagascar\n");
    printf("Temparature atmospherique optimale : entre 18C et 35c \n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Orchidee_Aerangis_Articulata();
    }
}

void Orchis_punaise(){
    printf("Id_Plante  : 3\n ");
    printf("Nom_Plante : Orchis punaise \n ");
    printf("Taille_min : 0,20 \n");
    printf("Taille_max : 0,40 \n");
    printf("Couleur : Rose \n");
    printf("Effets_Benefiques : Non Specifique \n");
    printf("Localisation_Plante : France\n");
    printf("Temparature atmospherique optimale : Ensoleile\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Orchis_punaise();
    }
}

void Orchis_a_fleurs_laches(){
    printf("Id_Plante : 4\n");
    printf("Nom_Plante : Orchis a fleurs laches \n ");
    printf("Taille_min : 0,20 \n");
    printf("Taille_max : 0,40 \n");
    printf("Couleur : Rouge ou Violet \n");
    printf("Effets_Benefiques : Non Specifique \n");
    printf("Localisation_Plante : France\n");
    printf("Temparature atmospherique optimale : Chaud\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Orchis_a_fleurs_laches();
    }
}


void Orchis_a_long_eperon(){
    printf("Id_Plante : 5\n");
    printf("Nom_Plante : Orchis a long eperon \n ");
    printf("Taille_min : 0,10 \n");
    printf("Taille_max : 0,35 \n");
    printf("Couleur : Violet \n");
    printf("Effets_Benefiques : Non Specifique \n");
    printf("Localisation_Plante : Mediterraneen occidental\n");
    printf("Temparature atmospherique optimale : Ensoleile\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Orchis_a_long_eperon();
    }
}

void Orchis_bouffon(){
    printf("Id_Plante : 6\n");
    printf("Nom_Plante : Orchis bouffon \n ");
    printf("Taille_min : 0,10 \n");
    printf("Taille_max : 0,35 \n");
    printf("Couleur : Rose ou Blanche \n");
    printf("Effets_Benefiques :  Riche en amidon\n");
    printf("Localisation_Plante : Europe\n");
    printf("Temparature atmospherique optimale : 0 C \n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Orchis_bouffon();
    }
}

void Orchis_de_marais(){
    printf("Id_Plante : 7\n");
    printf("Nom_Plante: Orchis de marais \n ");
    printf("Taille_min : 0,30\n ");
    printf("Taille_max : 0,60\n ");
    printf("Couleur : Rose \n");
    printf("Effets_Benefiques : Non Specifique \n");
    printf("Localisation_Plante : France,Asie occidentale,Afrique du Nord\n");
    printf("Temparature atmospherique optimale : Chaud\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Orchis_de_marais();
    }
}

void Orchis_papillon(){
    printf("Id_Plante : 8\n");
    printf("Nom_Plante : Orchis papillon \n ");
    printf("Taille_min : 0,10\n ");
    printf("Taille_max : 0,30\n ");
    printf("Couleur : Rose \n");
    printf("Effets_Benefiques : Non Specifique\n");
    printf("Localisation_plante : Haute-Garonne, Rhone, Var, Alpes-Maritimes ; Corse\n");
    printf("Temparature atmospherique optimale : Ensoleile\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Orchis_papillon();
    }
}


void Orchis_de_Provence(){
    printf("Id_Plante : 9\n");
    printf("Nom_Plante : Orchis de Provence \n ");
    printf("Taille_min : 0,10\n ");
    printf("Taille_max : 0,40\n ");
    printf("Couleur : Blanche \n");
    printf("Effets_Benefiques : Non Specifique\n");
    printf("Localisation_plante : Anguedoc, Provence ; Drome, Isere, Aveyron ; Corse, Region mediterraneenne\n");
    printf("Temparature atmospherique optimale : Ensoleile\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
        scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Orchis_de_Provence();
    }
}
void Pereskia(){
    printf("Id_Plante : 10\n");
    printf("Nom_Plante : Pereskia \n ");
    printf("Taille_min : Null \n");
    printf("Taille_max : 5 \n");
    printf("Couleur : Rose,Rouge,Orange ou Jaune \n");
    printf("Effets_Benefiques : Source vitamines(A,B et C)\n");
    printf("Localisation_Plante : Bresil\n");
    printf("Temparature atmospherique optimale : Ensoleile\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Pereskia();
    }
}

void Figuier_de_Barbarie(){
    printf("Id_Plante : 11\n");
    printf("Nom_Plante : Le Figuier de Barbarie \n ");
    printf("Taille_min : 3\n");
    printf("Taille_max : 5\n");
    printf("Couleur : Verte \n");
    printf("Effets_Benefiques : Alimentaire\n");
    printf("Localisation_Plante : Hemisphere Sud\n");
    printf("Temparature atmospherique optimale : Ensoleile\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Figuier_de_Barbarie();
    }
}

void Astrophytum_asterias(){
    printf("Id_Plante : 12\n");
    printf("Nom_Plante : Astrophytum asterias\n ");
    printf("Taille_min : Null\n");
    printf("Taille_max : 0,05 \n");
    printf("Couleur : Verte \n");
    printf("Effets_Benefiques : Non Specifique\n");
    printf("Localisation_Plante : Mexique,Etats Unis(Texas)\n");
    printf("Temparature atmospherique optimale : minimum 2C\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Astrophytum_asterias();
    }
}

void Astrophytum_ornatum(){
    printf("Id_Plante : 13\n");
    printf("Nom_Plante : Astrophytum ornatum\n ");
    printf("Taille_min : 0,15\n");
    printf("Taille_max : 1\n ");
    printf("Couleur : Verte \n");
    printf("Effets_Benefiques : Non Specifique\n");
    printf("Localisation_Plante : Mexique\n");
    printf("Temparature atmospherique optimale : superieure a 21C \n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Astrophytum_ornatum();
    }
}

void  Maihueniopsis_darwinii(){
    printf("Id_Plante : 14\n");
    printf("Nom_Plante : Maihueniopsis darwinii\n ");
    printf("Taille_min : Null\n");
    printf("Taille_max : 0,10\n");
    printf("Couleur : Orange \n");
    printf("Effets_Benefiques : Non Specifique\n");
    printf("Localisation_Plante : Sud de l'Argentine,Chile\n");
    printf("Temparature atmospherique optimale : froid(jusqu'a -40c)\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Maihueniopsis_darwinii();
    }
}

void Tephrocactus_weberi(){
    printf("Id_Plante : 15\n");
    printf("Nom_Plante : Tephrocactus weberi\n ");
    printf("Taille_min : Null\n");
    printf("Taille_max : 0,20\n");
    printf("Couleur : Verte \n");
    printf("Effets_Benefiques : Non Specifique\n");
    printf("Localisation_Plante : Argentine(La Rioja et ouest de la province de  Tucuman)\n");
    printf("Temparature atmospherique optimale : Minimum 5C\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Tephrocactus_weberi();
    }
}

void Tephrocactus_alexanderi(){
    printf("Id_Plante : 16\n");
    printf("Nom_Plante : Tephrocactus alexanderi\n ");
    printf("Taille_min : Null\n ");
    printf("Taille_max : 0,5\n");
    printf("Couleur : Blanc rose \n");
    printf("Effets_Benefiques : Non Specifique\n");
    printf("Localisation_Plante : Argentine\n");
    printf("Temparature atmospherique optimale : Environnement sec et chaud\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Tephrocactus_alexanderi();
    }
}

void Dryas_integrifolia(){
    printf("Id_Plante : 17\n");
    printf("Nom_Plante : Dryas integrifolia\n ");
    printf("Taille_min : 0,03\n ");
    printf("Taille_max : 0,08\n");
    printf("Couleur : Verte \n");
    printf("Effets_Benefiques : Medicament\n");
    printf("Localisation_Plante : Europe centrale\n");
    printf("Temparature atmospherique optimale : Ensoleile\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Dryas_integrifolia();

    }
}

void Dryade_a_huit_petales(){

    printf("Id_Plante : 18\n");
    printf("Nom_Plante : Dryade a huit petales\n ");
    printf("Taille_min : 0,1\n");
    printf("Taille_max : 1\n");
    printf("Couleur : Blanche \n");
    printf("Effets_Benefiques : Compose de Tanin et de sels mineraux\n");
    printf("Localisation_Plante : Europe centrale\n");
    printf("Temparature atmospherique optimale : Ensoleile\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Dryade_a_huit_petales();
    }
}

void Alchemille_des_Champs(){
    printf("Id_Plante : 19\n");
    printf("Nom_Plante : Alchemille des Champs\n ");
    printf("Taille_min : 0,10\n ");
    printf("Taille_max : 0,50\n");
    printf("Couleur : Verte \n");
    printf("Effets_Benefiques : Non Specifique\n");
    printf("Localisation_Plante : Montagnes\n");
    printf("Temparature atmospherique optimale : Ensoleile \n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Alchemille_des_Champs();
    }
}

void Prunier_myrobolan(){
    printf("Id_Plante : 20\n");
    printf("Nom_Plante : Prunier myrobolan\n ");
    printf("Taille_min : Null\n ");
    printf("Taille_max : 10\n");
    printf("Couleur : Blanc \n");
    printf("Effets_Benefiques : Alimentaire\n");
    printf("Localisation_Plante : Hemisphere Nord\n");
    printf("Temparature atmospherique optimale : Froid\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Prunier_myrobolan();
    }
}

void Erable_champetre(){
    printf("Id_Plante : 21\n");
    printf("Nom_Plante : Erable champetre\n ");
    printf("Taille_min : 12\n ");
    printf("Taille_max : 15\n");
    printf("Couleur : Vert\n");
    printf("Effets_Benefiques : Favorise la biodiversite du jardin\n");
    printf("Localisation_Plante : Europe,Asie\n");
    printf("Temparature atmospherique optimale : rustique, -28 C\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Erable_champetre();
    }
}

void Amelanchier_a_feuilles_ovales(){
    printf("Id_Plante : 22\n");
    printf("Nom_Plante : Amelanchier a feuilles ovales\n ");
    printf("Taille_min : 7\n ");
    printf("Taille_max : 10\n");
    printf("Couleur : Rouge et Noir\n");
    printf("Effets_Benefiques : Alimentaire\n");
    printf("Localisation_Plante : Amérique du Nord\n");
    printf("Temparature atmospherique optimale :  Tres rustique \n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Amelanchier_a_feuilles_ovales();
    }
}

void Epine_vinette(){
    printf("Id_Plante : 23\n");
    printf("Nom_Plante : Epine vinette \n ");
    printf("Taille_min : 1,5\n ");
    printf("Taille_max : 3\n");
    printf("Couleur : Rouge\n");
    printf("Effets_Benefiques : Digestive d'un goût\n");
    printf("Localisation_Plante : France\n");
    printf("Temparature atmospherique optimale : Ensoleillee \n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Epine_vinette();
    }
}

void Clematite_Vigne_blanche(){
    printf("Id_Plante : 24\n");
    printf("Nom_Plante : Clematite Vigne-blanche \n ");
    printf("Taille_min : Null\n");
    printf("Taille_max : 25\n");
    printf("Couleur : Vert\n");
    printf("Effets_Benefiques : Lignifient en vieillissant\n ");
    printf("Localisation_Plante : Europe, Asie centrale\n");
    printf("Temparature atmospherique optimale :  Ensoleillee \n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Clematite_Vigne_blanche();
    }
}

void Le_Buis(){
    printf("Id_Plante : 25\n");
    printf("Nom_Plante : Le Buis \n ");
    printf("Taille_min : 5\n ");
    printf("Taille_max : 10\n");
    printf("Couleur : Vert\n");
    printf("Effets_Benefiques : Effets dépuratifs\n");
    printf("Localisation_Plante : Europe meridionale\n");
    printf("Temparature atmospherique optimale : Ensoleile \n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Le_Buis();
    }
}

void Aubepines(){
    printf("Id_Plante : 26\n");
    printf("Nom_Plante : Aubepines\n ");
    printf("Taille_min : 6\n ");
    printf("Taille_max : 12\n");
    printf("Couleur : Blanc ou Rouge\n");
    printf("Effets_Benefiques : Fortifiant du cœur\n");
    printf("Localisation_Plante : Non Specifique\n");
    printf("Temparature atmospherique optimale :ensoleillee a semi-ombragee\n");
    printf("Si,Vous voulez retournerr au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Aubepines();
    }
}

void Le_Houx(){
    printf("Id_Plante : 27\n");
    printf("Nom_Plante : Le Houx\n ");
    printf("Taille_min : 2\n ");
    printf("Taille_max : 5\n");
    printf("Couleur : Rouge\n");
    printf("Effets_Benefiques : Antirhumatismal\n");
    printf("Localisation_Plante : Tout le monde\n");
    printf("Temparature atmospherique optimale :  Climat oceanique\n");
    printf("Si,Vous voulez retournerr au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Le_Houx();
    }
}

void Le_Nerprun_purgatif(){
    printf("Id_Plante : 28\n");
    printf("Nom_Plante : Le Nerprun purgatif\n ");
    printf("Taille_min : Null\n ");
    printf("Taille_max : 5\n");
    printf("Couleur : Noir\n");
    printf("Effet Benefique : Toxique!\n");
    printf("Localisation_Plante : Bresil et en Afrique du nord\n");
    printf("Temparature atmospherique optimale : Ensoleile\n");
    printf("Si,Vous voulez retournerr au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Le_Nerprun_purgatif();
    }
}

void Le_faux_laurier_des_bois(){
    printf("Id_Plante : 29\n");
    printf("Nom_Plante : Le faux laurier des bois\n ");
    printf("Taille_min : 1\n ");
    printf("Taille_max : 1,5\n");
    printf("Couleur : Noir\n");
    printf("Effet Benefique : Toxique!\n");
    printf("Localisation_Plante : Sud et centre de l'Europe\n");
    printf("Temparature atmospherique optimale : Resistante au froid,non specifique \n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : Sud et centre de l'Europe");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Le_faux_laurier_des_bois();
    }
}

void Le_Pommier_sauvage(){
    printf("Id_Plante : 30\n");
    printf("Nom_Plante : Le Pommier sauvage\n ");
    printf("Taille_min : 5\n ");
    printf("Taille_max : 10\n");
    printf("Couleur : Jaune\n");
    printf("Effet Benefique : Source d'antioxydants\n");
    printf("Localisation_Plante : Europe\n");
    printf("Temparature atmospherique optimale : Tres rustique (-32 C)\n");
    printf("Si,Vous voulez retourner au menu,choisisez 0 : ");
    int selected;
    scanf("%d",&selected);
    if(selected==0){
        system("cls");
        main();
    }
    else{
        Le_Pommier_sauvage();
    }
}

int selecte_une_plante(){
   int  choose;
   scanf("%d",&choose);
    if (choose==1){
    system("cls");
    Orchis_de_Champagneux();
    }
    else if (choose==2){
    system("cls");
    Orchidee_Aerangis_Articulata();
    }
    else if (choose==3){
    system("cls");
    Orchis_punaise();
    }
    else if (choose==4){
    system("cls");
    Orchis_a_fleurs_laches();
    }
    else if (choose==5){
    system("cls");
    Orchis_a_long_eperon();
    }
    else if (choose==6){
    system("cls");
    Orchis_bouffon();
    }
    else if (choose==7){
    system("cls");
    Orchis_de_marais();
    }
    else if (choose==8){
    system("cls");
    Orchis_papillon();
    }

    else if (choose==9){
    system("cls");
    Orchis_de_Provence();
    }

    else if (choose==10){
    system("cls");
    Pereskia();
    }

    else if (choose==11){
    system("cls");
    Figuier_de_Barbarie();
    }

    else if (choose==12){
    system("cls");
    Astrophytum_asterias();
    }

    else if (choose==13){
    system("cls");
    Astrophytum_ornatum();
    }

    else if (choose==14){
    system("cls");
    Maihueniopsis_darwinii();
    }

    else if (choose==15){
    system("cls");
    Tephrocactus_weberi();
    }

    else if (choose==16){
    system("cls");
    Tephrocactus_alexanderi();
    }

    else if (choose==17){
    system("cls");
    Dryas_integrifolia();
    }

    else if (choose==18){
    system("cls");
    Dryade_a_huit_petales();
    }

    else if (choose==19){
    system("cls");
    Alchemille_des_Champs();
    }

    else if (choose==20){
    system("cls");
    Prunier_myrobolan();
    }

    else if (choose==21){
    system("cls");
    Erable_champetre();
    }

    else if (choose==22){
    system("cls");
    Amelanchier_a_feuilles_ovales();
    }

    else if (choose==23){
    system("cls");
    Epine_vinette();
    }

    else if (choose==24){
    system("cls");
    Clematite_Vigne_blanche();
    }

    else if (choose==25){
    system("cls");
    Le_Buis();
    }

    else if (choose==26){
    system("cls");
    Aubepines();
    }

    else if (choose==27){
    system("cls");
    Le_Houx();
    }

    else if (choose==28){
    system("cls");
    Le_Nerprun_purgatif();
    }

    else if (choose==29){
    system("cls");
    Le_faux_laurier_des_bois();
    }

    else if (choose==30){
    system("cls");
    Le_Pommier_sauvage();
    }
    else{
        system("cls");
        menu();
        selecte_une_plante();
    }
}


