// se declaran la librerias
#include<stdio.h>
void main()
{
	int i,b=0 ;
	int c=1;
	int d=0;
	int f=1;
	int opc,s;
	int arr [10];
	do 
	{
		//damos la bienvenida
	printf ("bienvenido a este programa hecho por sammy ,dame tus 10 numeros del arreglo\n");
	//metemos un ciclo para almacenar los valores del arreglo dado por el usuario
	for (i=0;i<10;i++)
	{
		scanf ("%d",& arr [i]);
   }
   printf("tu arreglo es :\n");
   for (i=0;i<10;i++)
   {
		printf ("%d \n",arr [i]);
   }
   // usamos un seleccionador para que el usuario escoja la opcion deseada
   printf(" ahora dime que que opcion deseas hacer con esos arreglos  \n 1)Mostrar la Suma de los elementos\n 2)realizar la multiplicación de los elementos\n 3)realizar la suma solo de los elementos divisibles entre 3\n 4)multiplicar por 3 cada elemento del arreglo\n");
   scanf("%d",&opc);
   switch (opc)
   {
   	//se hacen las operaciones necesarias para cada caso
    case 1:
   	printf("\nla suma es : ");
   	for (i=0;i<10;i++)
	{
   		b= b+arr [i] ;
	}	
   printf("%d",b);
   break;
   case 2:
   for (i=0;i<10;i++)
	{
		c= c*arr[i];
	}
	printf("\nla multiplicacion es : %d",c);
	break;
	case 3:
	printf("\nla suma de los divisibles entre  3 son :");
	for (i=0;i<10;i++)
	{
	if (arr[i]% 3==0)
	{
		d=d+ arr[i];
	}
	}
	printf("%d\n",d);
	break;
	case 4:
	 for (i=0;i<10;i++)
	{
		f=arr[i]*3;
		printf("el arreglo en la pocicion %d ", i+1);
          printf(" x 3 es = %d\n",f);
    }
    break;
    default:
    printf("opcion invalida\n");
   }
   // aqui se aplica el do while para repetir el programa si el usuario quiere
   printf("si desea repetir el programa presione 1 de lo contrario oprima cualquier letra\n");
   scanf("%d",&s);
   }
   while(s==1);
   //se agradece el programa
   printf("gracias\n");
}


   
   
 
