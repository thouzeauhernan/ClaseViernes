#include <stdio.h>
#include <stdlib.h>
char nombre[50];
FILE *archivo;
void agregar(){
    archivo = fopen("prueba.txt","r+");
    printf("ingrese el nombre del alumno(50) \n");
    scanf("%s",nombre);
    /*while (feof(archivo)==0)
    {
        fread(nombre ,sizeof(nombre)+1,1,archivo);//lee hasta el salto de linea
    }*/
    fwrite(nombre ,sizeof(nombre)+1,1,archivo);
    fclose(archivo);
    return ;
}
void  mostrar(){
    archivo = fopen("prueba.txt","r+");
    while (feof(archivo)==0)
    {
        fgets(nombre ,sizeof(nombre),archivo);//lee todo un tamaño de lo que le ponemos en el primer parametro
        printf("%s",nombre);
    }
    fclose(archivo);
    return ;
}
int main()
{	
    int op;
    op=0;
    while (op!=3)
    {
        printf("seleccione una opcion \n");
        printf("1 - agregar \n");
        printf("2 - visualizar \n");
        printf("3 - terminar \n");
        scanf("%c",&op);
        if (op==1)
        {
            agregar();
        }
        else
        {
            mostrar();
        }
        getchar();
    }
	return 0;
}

