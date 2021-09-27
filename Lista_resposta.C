
/*
  
Lista de exercicio para desenvolvimente da linguagem C
Tecnicas de desenvolvimento de algoritimo


*/
#include <stdio.h>

int main(void) {

    printf ("Exercicio 1\n\n");

    printf ("XXXXXX\n");
    printf ("X\tX\n");
    printf ("X\tX\n" );
    printf ("X\tX\n" );
    printf ("XXXXXX\n\n");

    printf ("Exercicio 2\n\n");

    printf ("       X\n");
    printf ("      XXX\n");
    printf ("     XXXXX\n");
    printf ("    XXXXXXX\n");
    printf ("   XXXXXXXXX\n");
    printf ("  XXXXXXXXXXX\n");
    printf (" XXXXXXXXXXXXX\n");
    printf ("XXXXXXXXXXXXXXX\n");
    printf ("      XX\n");
    printf ("      XX\n");
    printf ("    (XXXX)\n");


    printf ("Exercicio 3\n\n");

    float salario, mes;

    printf ("Digite o salario: ");
    scanf  ("%f",&salario);
    printf ("Digite o total gasto no mes: ");
    scanf  ("%f",&mes);

    if  (salario > mes)  printf ("Gasto dentro do orcamento");
    else                 printf ("Orcamento estourado");


  printf ("Exercicio 4\n\n");

    int n1, n2;

    printf ("Digite um numero: ");
    scanf  ("%i",&n1);
    printf ("Digite outro numero: ");
    scanf  ("%i",&n2);

    if           (n1 < n2)  printf ("Primeiro numero %i, segundo numero %i",n1,n2);
    else    if   (n2 > n1)  printf ("Primeiro numero %i, Segundo numero %i",n2,n1);
    else                    printf ("Os numeros sao iguais");

    
    printf ("Exercicio 5\n\n");

    float salario;
    
    printf ("Digite seu salario atual: ");
    scanf  ("%f",&salario);

    if         (salario <= 2000)    printf ("Voce recebera um aumento de 50%%. O seu salario agora é: %.2f Reais"  , salario * 1.50);
    else if    (salario <= 5000)    printf ("Voce recebera um aumento de 20%%. O seu salario agora é: %.2f Reais" , salario * 1.20);
    else                            printf ("Voce recebera um aumento de 10%%. O seu salario agora é: %.2f Reais" , salario * 1.10);



    

printf ("Exercicio 6\n\n");

printf ("Calculo de IMC");

float peso, altura, IMC;

printf ("Digite seu peso: ");
scanf  ("%f",&peso);

printf ("Digite a sua altura: ");
scanf  ("%f",&altura);

IMC = peso/ (altura*altura);

if (IMC <= 18.5)      printf ("Seu IMC é %.2f. voce esta Magro",IMC);
else if (IMC <= 25.0) printf ("Seu IMC é %.2f. Voce esta no peso normal",IMC);
else if (IMC <= 30.0) printf ("Seu IMC é %.2f. Voce esta com Sobrepeso",IMC);
else                  printf ("Seu IMC é %.2f. Voce esta Obeso",IMC);


    printf ("Exercicio 7\n\n");

    printf ("UNICID X Universidade visitante\n");

    int golsunicid, golsunivisi;

    printf ("Gols feitos pela Unicid: ");
    scanf  ("%i",&golsunicid);

    printf ("Gols feitos pela Universidade visitante: ");
    scanf  ("%i",&golsunivisi);

    if      (golsunicid > golsunivisi) printf ("%i a %i para a Unicid\nVitoria da Unicid!",golsunicid, golsunivisi);
    else if (golsunivisi > golsunicid) printf ("%i a %i para a Universidade visitante\nDerrota da Unicid!",golsunivisi, golsunicid);
    else                               printf ("%i a %i\nEmpate!",golsunicid, golsunivisi);


   printf ("Exercicio 8\n\n");

   printf ("Calculo de media do aluno");

   float nota1, nota2, med, recuperacao;

   printf ("Digite a primeira nota: ");
   scanf  ("%f",&nota1);

   printf ("Digite a segunda nota: ");
   scanf  ("%f",&nota2);

   med = nota1 + nota2;

   if (med >= 7)  printf ("O aluno ficou com %.2f de media, está aprovado!",med);
      else if (med < 5) printf ("O aluno ficou com %.2f de media, esta reprovado!", med);
      else { if (med >= 5) printf ("O aluno ficou com %.2f de media, esta de recuperacao\n\n",med);
                        printf("Digite a nota da recuperacao: ");
                        scanf ("%f",&recuperacao);
      if  (recuperacao >= 5) printf ("A nota de recuperacao é: %.2f. O aluno esta Aprovado!", recuperacao);
      else                       printf ("A nota de recuperacao é: %.2f. O aluno esta Reprovado!", recuperacao);
      }                  

    

  

  
  printf ("Exercicio 9\n\n");

printf ("Pontos Obtidos na prova");

int ponto;

printf ("Digite seu ponto obtido na prova: ");
scanf  ("%i",&ponto);



if      (ponto == 0)  printf (" Sua pontuacao na prova é de %i.\n Obteve uma pontuacao Regular",ponto);
else if (ponto <= 30)  printf (" Sua pontuacao na prova é de %i.\n Obteve uma pontuacao Regular",ponto);
else if (ponto <= 60)  printf (" Sua pontuacao na prova é de %i.\n Obteve uma pontuacao Boa",ponto);
else if (ponto <= 90)  printf (" Sua pontuacao na prova é de %i.\n Obteve uma pontuacao Muito Boa",ponto);
else if (ponto <= 100) printf (" Sua pontuacao na prova é de %i.\n Obteve uma pontuacao Otima",ponto);
else                   printf (" Pontuacao invalida");




    return 0;
}