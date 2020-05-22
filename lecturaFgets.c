#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 	FILE *archivo;
 	
 	archivo = fopen("prueba.txt","r");
 	char nombre[50];
	char nota[2];
	
 	if (archivo == NULL)
	 {
	 	printf("archivo igual a null");
 		exit(1);
	 }
 	else
    {
 	    printf("\nEl contenido del archivo de prueba es \n\n");

 	    //while (feof(archivo) == 0)
        //{
            fgets(nombre ,sizeof(nombre),archivo);//lee todo un tamaño de lo que le ponemos en el primer parametro
            printf("%s",nombre);
        //}
    }
        fclose(archivo);
	return 0;
}
