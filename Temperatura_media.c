#include <stdio.h>

int main() {
 
  int cont = 0; 
  float temperatura = 0;
  float temperaturatotal = 0;
  float media = 0;

  for(int i = 0; i < 7; i++)
  {
    printf("Digite a temperatura do dia %d: \n",i+1);
    scanf("%f",&temperatura);

    if(temperatura > 27)
    {
      cont++;
    }
    temperaturatotal += temperatura;
  }
media = temperaturatotal / 7;

printf("A temperatura média da semana foi: %.1f. Tiveram %d dias com temperatura superior a 27 graus",media,cont);

return 0;

}
