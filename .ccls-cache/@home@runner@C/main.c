#include <stdio.h>
#include <stdlib.h>

int main (){

	float n1, n2, n3, n4, media;
  char gen;

  printf ("Qual seu gênero? ");
  scanf ("%char", &gen);
  

  if (gen == 'f' || gen == 'F'){
    
    printf ("\n");
  	printf ("Qual a 1ª nota? ");
  	scanf ("%f",& n1);
  	printf ("Qual a 2ª nota? ");
  	scanf ("%f",& n2);
  	printf ("Qual a 3ª nota? ");
  	scanf ("%f",& n3);
  	printf ("Qual a 4ª nota? ");
  	scanf ("%f",& n4);
    printf ("\n");

	media = (n1+n2+n3+n4)/4;

    if (media >= 6){
      printf ("Cara aluna, você foi aprovado com media: %.2f", media);
    }
    else {
      printf ("Cara aluna, você foi reprovada com media: %.2f", media);
    }
  }

  else if (gen == 'm' || gen == 'M'){
    
    printf ("\n");
  	printf ("Qual a 1ª nota? ");
  	scanf ("%f",& n1);
  	printf ("Qual a 2ª nota? ");
  	scanf ("%f",& n2);
  	printf ("Qual a 3ª nota? ");
  	scanf ("%f",& n3);
  	printf ("Qual a 4ª nota? ");
  	scanf ("%f",& n4);
    printf ("\n");

	media = (n1+n2+n3+n4)/4;

    if (media >= 6){
      printf ("Caro aluno, você foi aprovado com media: %.2f", media);
    }
    else {
      printf ("Caro aluno, você foi reprovado com media: %.2f", media);
    }
  }

  else {
    printf("Erro");
  }
    
	return 0;
}