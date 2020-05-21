#include <stdio.h>
#include <stdlib.h>
// ejemplo para leer un archivo existente en directorio
int main()
{
	FILE *archivo;//declaracion del archivo
	char caracter;
	
	archivo = fopen("prueba.txt","r"); //"r" : abrir un archivo para lectura, el fichero debe existir
	
	if (archivo == NULL)
        {
            printf("\nError de apertura del archivo. \n\n");
        }
    else
        {
            printf("\nEl contenido del archivo de prueba es \n\n");
            while((caracter = fgetc(archivo)) != EOF)//EOF escribe mientra sea distinto del fin del archivo sigue leyendo
	        {
	            printf("%c",caracter); // muestra de un caracter a la vez
	        }
        }
        fclose(archivo);
	return 0;
}