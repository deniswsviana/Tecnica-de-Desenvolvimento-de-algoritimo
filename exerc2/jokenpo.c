#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{
  int pedra, papel, tesoura, jogador, magico;
  char novo;

pedra   = 0;
papel   = 1;
tesoura = 2;

  srand(time(NULL));
  magico   = (rand() % 3);
  

  printf("Escolha 0 (pedra), 1 (papel), 2 (tesoura): ");
  scanf("%d",&jogador);
 
 while (jogador<0 || jogador >2 )
 {
  printf("Opcao invalida\n");
  printf("Escolha 0 (pedra), 1 (papel), 2 (tesoura): ");
  scanf("%d",&jogador);
 }
switch(jogador){
  case 0: printf ("\nVoce escolheu pedra!\n\n");   break;
  case 1: printf ("\nVoce escolheu papel!\n\n");   break;
  case 2: printf ("\nVoce escolheu tesoura!\n\n"); break;
}
printf("___________________________________________________\n\n");
switch(magico){
  case 0: printf ("O Computador escolheu pedra!\n\n"); break;
  case 1: printf ("O Computador escolheu papel!\n\n"); break;
  case 2: printf ("O computador escolheu tesoura\n\n");break;
}
printf("___________________________________________________\n\n");
    if      (magico==1 && jogador==0) 
     printf ("Papel ganha da pedra. Computador ganhou!.\n\n");
    else if (jogador==1 && magico==0) 
     printf ("Papel ganha da pedra. Voce ganhou!.\n\n");

    else if (magico==2 && jogador==1) 
     printf ("Tesoura ganha da papel. Computador ganhou!.\n\n");
    else if (jogador==2 && magico==1)
     printf ("Tesoura ganha da papel. Voce ganhou!.\n\n");

    else if (magico==0 && jogador==2)
      printf ("Pedra ganha da tesoura. Computador ganhou.\n\n");
    else if (jogador==0 && jogador==2)
      printf ("Pedra ganha da tesoura. Voce ganhou.\n\n");



    
    else  printf ("Empate!\n\n");
  


        
  do 
  { 
      printf ("Vamos jogar novamente? <S/N>\n\n");
      scanf ("%s",&novo);
      switch (novo){
        case 's':
        case 'S':   printf ("\nSim - Voce escolheu jogar novamente\n\n"); break;
       
      }
       printf ("=======================================================\n\n");

      srand(time(NULL));
      magico   = (rand() % 3);

      
  
    switch (novo)
    {
    case 's' :
    case 'S' : printf("Escolha 0 (pedra), 1 (papel), 2 (tesoura): ");
               scanf("%d",&jogador); 
      
      while (jogador <0 || jogador >2)
    {
        printf("Opcao invalida\n\n");
        printf("\nEscolha 0 (pedra), 1 (papel), 2 (tesoura): \n\n");
        scanf("%d",&jogador);
    }


    switch(jogador){
  case 0: printf ("\nVoce escolheu pedra!\n\n");   break;
  case 1: printf ("\nVoce escolheu papel!\n\n");   break;
  case 2: printf ("\nVoce escolheu tesoura!\n\n"); break;
}
printf("___________________________________________________\n\n");
switch(magico){
  case 0: printf ("O Computador escolheu pedra!\n\n"); break;
  case 1: printf ("O Computador escolheu papel!\n\n"); break;
  case 2: printf ("O computador escolheu tesoura\n\n");break;
}
printf("___________________________________________________\n\n");
  
    if      (magico==1 && jogador==0) 
     printf ("Papel ganha da pedra. Computador ganhou!.\n\n");
    else if (jogador==1 && magico==0) 
     printf ("Papel ganha da pedra. Voce ganhou!.\n\n");

    else if (magico==2 && jogador==1) 
     printf ("Tesoura ganha da papel. Computador ganhou!.\n\n");
    else if (jogador==2 && magico==1)
     printf ("Tesoura ganha da papel. Voce ganhou!.\n\n");

    else if (magico==0 && jogador==2)
      printf ("Pedra ganha da tesoura. Computador ganhou.\n\n");
    else if (jogador==0 && jogador==2)
      printf ("Pedra ganha da tesoura. Voce ganhou.\n\n");



    
    else  printf ("Empate!\n\n");

   


    case 'n':
    case 'N': printf ("O jogo acabou!"); break;
    
      while (novo != 'n');


    default: printf ("Opcao invalida");
    }
  } while (novo != 'n');
   
  

  return 0;

  
  
}
