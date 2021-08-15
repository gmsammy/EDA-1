//declaracion de librerias
#include<stdio.h>
#include<string.h>
//creacion de la estructura para el nombre y edad del usuario
struct pagina
{
	char nombre[60];
	int edad;
}persona[3];
//iniciacion del programa principal.
int main()
{
	int i,j;
//cfor para leer y que solo guarde las 3 personas que checaremos sus datos
	for(i=0;i<3;i++)
	{
		printf("nombre de la persona: ");
		scanf("%s",&persona[i].nombre);
		printf("dame tu edad");
		scanf("%d",&persona[i].edad);
	}
	for(j=0;j<3;j++)
	{
	// condicional para cotejar que sea mayor de edad
	if(persona[j].edad<18)
	{
	printf("\nla persona %s no es apta para esta pagina",persona[j].nombre);
	}
	else
	{
	printf("\nla persona %s bienvenido",persona[j].nombre);
	}
}
}
