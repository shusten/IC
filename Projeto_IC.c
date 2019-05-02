//primeiro passo é importar as bibliotecas:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<stdbool.h>
#define MAX_INSTI 200// DECLARAÇÃO DE CONSTANTE

//primeiro commit
 // Definir a struct onde serão armazendo os dados


typedef struct{
char nome[300], cidade[50], rua[100], setor[10], precisa[400], h[100], h1[100];
int cod;
int numero;
bool disponivel;
}insti;

insti a[MAX_INSTI];

int pos=0;



               //== COMEÇO DA FUNÇÃO PRINCIPAL ==
int main(){
system("color 3F");



menu(); //Chamando função menu

return 0;

}
            //   ==FIM DA FUNÇÃO PRINCIPAL==

            //   ==COMEÇO DA FUNÇÃO MENU

void menu(){

char menu;


 do{


      printf(" %c----------------------------------------------------------------------------%c\n",201,187);
      printf(" | ");printf("\t\t\t       Escolha Uma Op%c%co       ",135, 198);printf("\t\t\t      |\n");
      printf(" %c----------------------------------------------------------------------------%c\n",200,188);
      printf("\t    %c------------------%c\t\t\t\t       ",201,187);
      printf("\t\t\t    |  MENU PRINCIPAL  ");printf("|\t\t\t\t      \n");
      printf("   %c--------%c------------------%c-------%c \n",201,200,188,187);
      printf("   | <A>  Novo cadastro                |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <B>  Remover                      |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <C>  Listar Todas                 |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <D>  Alterar cadastro             |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <E>  Pesquisar                    |\n");
      printf("   |-----------------------------------|\n");
      printf("   | <S>  Sair                         |\n");
      printf("   %c-----------------------------------%c",200,188);//200 e 188 são os caracters dos cantos do menu
      printf("\n\n\n\n");
      printf("\t\t\tPor:  Luis Villas Boas");

      //Lendo a opcao do menu
      fflush(stdin);
      menu= getch();

         switch(menu){
                 case 'A':
                 case 'a':
                        system ("cls");
              printf(" %c----------------------------------------------------------------------------%c\n",201,187);
              printf(" | ");printf("\t\t\t  CADASTRO DE INSTITUI%c%cO  ",128 ,199); printf("\t\t\t      |\n");
              printf(" %c----------------------------------------------------------------------------%c\n",200,188);

                        cadastro();  // CHAMANDO A FUNÇÃO CADASTRO
                                    break;


                  case 'B':
                  case 'b':
                       system("cls");
                printf(" %c----------------------------------------------------------------------------%c\n",201,187);
                printf(" | ");printf("\t\t\t    REMOVER   INSTITUI%c%cO  ",128 ,199); printf("\t\t\t      |\n");
                printf(" %c----------------------------------------------------------------------------%c\n",200,188);

                        remover();

                                                                       break;

                  case 'C':
                  case 'c':
                      system("cls");
             printf(" %c----------------------------------------------------------------------------%c\n",201,187);
              printf(" | ");printf("\t\t\t      LISTAR INSTITUI%c%cES      ",128 ,229); printf("\t\t\t   |\n");
              printf(" %c----------------------------------------------------------------------------%c\n",200,188);

                          listar();
                                                                         break;

                 case 'E':
                 case 'e':
                        system ("cls");
              printf(" %c----------------------------------------------------------------------------%c\n",201,187);
              printf(" | ");printf("\t\t\t  PESQUISAR   INSTITUI%c%cO  ",128 ,199); printf("\t\t\t     |\n");
              printf(" %c----------------------------------------------------------------------------%c\n",200,188);

                        pesquisar();  // CHAMANDO A FUNÇÃO PESQUISAR

                                                                  break;


                        case 'S':
                       case 's':
                              exit(0);
                              // COMANDO PARA SAIR DO PROGRAMA
                                                                  break;


             default:                        // ROTINA PADRÃO
                printf("Op%c%co invalida\n\n\n", 135, 198);
                system("pause");
                                                                  break;

             }



 }while(menu!='s');
 fflush(stdin);
 getchar();

}

                           // ==== COMEÇO DA FUNÇÃO CADASTRO ====


 void cadastro(){

      int op;



       do{
          printf("Nome da institui%c%co: ",135, 198);

          fflush (stdin); // utilizando a entrada padrão

        fgets(a[pos].nome, MAX_INSTI, stdin); // usei o fgets pois preciso pegar uma stringed e o stdin é a entrada padrão

         printf("Cidade: ");
          fflush (stdin);
          fgets(a[pos].cidade, MAX_INSTI, stdin);

          printf("Escreva o setor, ex: sul, ou leste: ");
          fflush(stdin);
          fgets(a[pos].setor,  MAX_INSTI, stdin);

          printf("Nome da rua: ");
          fflush(stdin);
          fgets(a[pos].rua,  MAX_INSTI, stdin);

           printf("Hor%rio de atendimento de: ",160);
           fflush(stdin);
           fgets(a[pos].h,  MAX_INSTI, stdin);
           fflush(stdin);
           printf("At%c as: ", 130);
           fflush(stdin);
           fgets(a[pos].h1,  MAX_INSTI, stdin);

           printf("Estamos precisando de: ");
           fflush(stdin);
           fgets(a[pos].precisa,  MAX_INSTI, stdin);

           printf("Telefone para contato: ");
           scanf("%d", &a[pos].numero);
           getchar(); //limpar o buffer do teclado

          printf("C%cdigo: %d",162, a[pos].cod);
          scanf("%d", &a[pos].cod);
          getchar();

          printf("\n Digite 1 para continuar ou outro valor para sair ");
          fflush(stdin);
          scanf("%d", &op);
    pos++;
    }while (op==1);
    fflush(stdin);
  system("cls");


}                                 //===== FIM DA FUNÇÃO CADASTRO ====


                                 // === COMEÇO DA FUNÇÃO PESQUISAR ===

void pesquisar(){
int pos=0;


char setorPesquisa[10]; //variável que armazena o setor
char cidadePesquisa[100];
int op;


         //DO WHILE PORQUE EU POSSO FAZER A PESQUISA MAIS DE UMA VEZ
         do{
            printf("\n Digite 1 para pesquisar por Setor ou 2 para pesquisar por Cidade. ");
            fflush(stdin);
            scanf("%d", &op);
            switch(op){

              case 1:
                printf("\nDigite o setor: ");
                fflush(stdin);
                fgets(setorPesquisa, sizeof(setorPesquisa), stdin);
                for(pos = 0; pos < MAX_INSTI; pos++ ){
                    if(strcmp(a[pos].setor, setorPesquisa)==0)               // strstr compara se duas strings são iguais;
                   {

                  printf("\nInstitui%c%co: %s\nCidade: %s\nRua: %s\n",135,198, a[pos].nome, a[pos].cidade, a[pos].rua);
                  printf("Precimaos de: %s", a[pos].precisa);
                  printf("\n");
                  printf("Funcionamos das:%s",a[pos].h);
                  printf("%cs %s",133,a[pos].h1);
                  printf("\n");
                  printf("Numero para contato: %d", a[pos].numero);
                  printf("\n------------------------------------------------------------------------------\n");
                   }


                }


                break;

         case 2:
              printf("\n Digite a cidade: ");
                fflush(stdin);
                fgets(cidadePesquisa, sizeof(cidadePesquisa), stdin);
                for(pos = 0; pos < MAX_INSTI; pos++ ){
                    if (strcmp(a[pos].cidade, cidadePesquisa)==0)                 // strstr compara se duas strings são iguais;
                   {

                  printf("\nInstitui%c%co: %s\nSetor: %s\nRua: %s\n",135,198, a[pos].nome, a[pos].setor, a[pos].rua);
                  printf("Precimaos de: %s", a[pos].precisa);
                  printf("\n");
                  printf("Funcionamos das:%s",a[pos].h);
                  printf("%cs %s",133,a[pos].h1);
                  printf("\n");
                  printf("Numero para contato: %d", a[pos].numero);
                  printf("\n------------------------------------------------------------------------------\n");



                   }
                }

                break;

            default:
                    printf("\n Opcao invalida");
                break;
             }
   printf("\n\n Digite qualquer outro valor para sair, ou 1 para continuar pesquisando. \n");
   fflush(stdin);
   scanf("%d", &op);

}while(op==1);
getchar();
}

                              // === COMEÇO DA FUNÇÃO LISTAR ===

void listar(){
int i;
int op;


      do{

         for(pos = 0; pos<MAX_INSTI; pos++)
{
           if(a[pos].cod>0){

                 printf("\nInstitui%c%co:%s\nCidade %s\nSetor: %s\nRua: %s\n",135,198, a[pos].nome, a[pos].cidade, a[pos].setor, a[pos].rua);
                  printf("Precimaos de: %s", a[pos].precisa);
                  printf("\n");
                  printf("Funcionamos das:%s",a[pos].h);
                  printf("%cs %s",133,a[pos].h1);
                  printf("\n");
                  printf("Numero para contato: %d", a[pos].numero);
                  printf("\nC%cdigo %d",162, a[pos].cod);
                  printf("\n------------------------------------------------------------------------------\n");

           }
              else{

                break;
              }


         }

      printf("\n\n Digite qualquer outro valor para sair, ou 1 para listar novamente. \n");
     fflush(stdin);
     scanf("%d", &op);



      }while(op==1);
getchar();


}

void remover(){

}

















