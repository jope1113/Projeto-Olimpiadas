#include <stdio.h>
#include <stdlib.h>

int main() {

int modalidade,x,y;

//variáveis usadas na modalidade Arremesso de Peso.
float ArremessoDePeso[2][5];
float ArremessoVitorioso[2];
float ArremessoDesempate[2];
float MaiorArremesso = 0.0;
//variáveis usadas na modalidade Ginástica Artística.
float notas[2][3];
float MenorNota[2];
float SomaNotas[2];

//menu usado para a escolha da modalidade.
printf("Selecione o numero correspondente a modalidade. \n1 - Arremesso de Peso \n2 - Ginastica Artistica\n");
scanf("%f", &modalidade);

switch(modalidade){

//Neste case 1 será tratado sobre a modalidade Arremesso de Peso, onde terá o cálculo do MaiorArremesso, do ArremessoVitorioso e do ArremessoDesempate e a distância(em metros) do maior arremesso do atleta %i.
Mostrará também que se houver um empate, o segundo arremesso será o desempate. Caso o segundo arremesso do atleta 1 for maior do que o atleta 2, o atleta 1 será o vencedor, caso contrário, se
se o segundo arremesso do atleta 1 for menor do que o atleta 2, o atleta 2 será o vencedor.
case 1:

for(y = 0; y < 2; y++){
printf("(Arremesso de Peso)\n");
printf("====== ATLETA %i ====== \n", y+1);
for(x = 0; x < 5; x++){
printf("Tentativa %i: \n", x+1);
scanf("%f", &ArremessoDePeso[x][y]);

if(ArremessoDePeso[x][y] > MaiorArremesso){
MaiorArremesso = ArremessoDePeso[x][y];
}

ArremessoVitorioso[y] = MaiorArremesso;
ArremessoDesempate[y] = ArremessoDePeso[1][y];

}

printf("O maior arremsso do atleta %i foi de: %.2f metros!!\n", y+1, MaiorArremesso);
MaiorArremesso = 0;
}

if(ArremessoVitorioso[0] == ArremessoVitorioso[1]){
printf("\n Houve um empate no maior arremesso de ambos os lados, o desempate será feito pelo segundo arremesso!!!\n");
printf("E....\n");
if(ArremessoDesempate[0] > ArremessoDesempate[1]){
printf("=======================================\n");
printf("O vencedor foi o atleta 1!\nParabens!!!\n");
printf("=======================================\n");
}
else if (ArremessoDesempate[0] < ArremessoDesempate[1]){
printf("=============================================\n");
printf("O vencedor foi o atleta 2!\nParabens!!!\n");
printf("=============================================\n");
}
}

else if (ArremessoVitorioso[0] > ArremessoVitorioso[1]){
printf("=============================================\n");
printf("O vencedor foi o atleta 1!\nParabens!!!\n");
printf("=============================================\n");
}
else if (ArremessoVitorioso[0] < ArremessoVitorioso[1]){
printf("=============================================\n");
printf("O vencedor foi o atleta 2!\nParabens!!!\n");
printf("=============================================\n");
}

break;

//Neste case 2 será tratado sobre a modalidade Ginástica Artística, onde terá o cálculo da SomaNotas, MenorNota e a pontuação total do atleta %i.
Mostrará também que caso a SomaNotas - MenorNota do atleta 1 for maior do que o atleta 2, o atleta 1 será o vencedor, caso contrário, se a SomaNotas - MenorNota do atleta 1 for menor do que o atleta 2, o atleta 2 será o vencedor.
case 2:

for(y = 0; y < 2; y++){
printf("(Ginastica Artistica)\n");

printf("====== ATLETA %i ====== \n", y+1);
for(x = 0; x < 3; x++){
printf("Nota %i: \n", x+1);
scanf("%f", &notas[x][y]);

SomaNotas[y] += notas[x][y];

if(notas[x][y] > MenorNota[y]){
MenorNota[y] = notas[x][y];
}
}

printf("Pontuacao total do atleta %i foi de: %.1f\n", y+1, SomaNotas[y] - MenorNota[y]);
}
if((SomaNotas[0] - MenorNota[0]) > (SomaNotas[1] - MenorNota[1])){
printf("======================================================\n");
printf("O vencedor foi o atleta 1!\nParabens!!!\n");
printf("======================================================\n");
}else if((SomaNotas[0] - MenorNota[0]) < (SomaNotas[1] - MenorNota[1])){
printf("======================================================\n");
printf("O vencedor foi o atleta 2!\nParabens!!!\n");
printf("======================================================\n");
}

break;

}

return 0;
}


