#include <stdio.h>
#include <string.h>
/*
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char cadena[] = "mostrando como cargar un archivo con puts(SOBREESCRITURA)\n";

 	fp = fopen ( "prueba.txt", "r+" );//abro a para leer y escribir desde el principio
 	
 	fputs( cadena, fp );
 	
 	fclose ( fp );
 	
 	return 0;
}
*/
/*
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char cadena[] = "Mostrando el uso de fwrite en un fichero.\n";
 	char caracter;
 	fp = fopen ( "prueba.txt", "r+" );
    fread (cadena,strlen(cadena)+1 ,2,fp);
 	fwrite( cadena, sizeof(char), sizeof(cadena), fp ); //char cadena[]... cada posición es de tamaño 'char' 
 	
 	fclose ( fp );
 	
 	return 0;
}
*/

/*
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char buffer[100] = "Esto es un texto dentro del fichero.";
 	
 	fp = fopen ( "prueba.txt", "r+" );
 	
 	fprintf(fp, buffer);
 	fprintf(fp, "%s", "\nEsto es otro texto dentro del fichero.");
 	
 	fclose ( fp );
 	
 	return 0;
}
*/