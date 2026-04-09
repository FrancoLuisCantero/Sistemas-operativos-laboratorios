#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main(){

    FILE *archivo1;
    FILE *archivo2;
    FILE *archivo3;
    FILE *archivo4;

    archivo1 = fopen("archivos-1.txt","w");
    fprintf(archivo1,"Este archivo ha sido creado\n");
    fclose(archivo1);
    printf("Archivo 1 creado\n");
    sleep(1);


    archivo2 = fopen("archivos-2.txt","w");
    fclose(archivo2);
    printf("Archivo 2 creado (está vacío)\n");
    sleep(1);
    printf("Escribiendo en el archivo 2...\n");
    sleep(2);
    archivo2 = fopen("archivos-2.txt","w");
    fprintf(archivo2,"Este archivo ha sido escrito con fprintf\n");
    fclose(archivo2);
    archivo2 = fopen("archivos-2.txt","r");
    char buffer[100];
    fgets(buffer,100,archivo2);
    printf("Archivo 2 ahora contiene: %s",buffer);
    fclose(archivo2);
    sleep(1);
    
    
    archivo3 = fopen("archivos-3.txt","w");
    fprintf(archivo3,"Este archivo ha sido movido con la función rename\n");
    fclose(archivo3);
    printf("Archivo 3 creado\n");
    sleep(1);
    printf("Moviendo archivo 3...\n");
    sleep(2);
    mkdir("carpeta",0777);
    rename("archivos-3.txt","carpeta/archivos-3.txt");
    printf("Archivo 3 movido\n");
    sleep(1);


    archivo4 = fopen("archivos-4.txt","w");
    fprintf(archivo4,"Temporal\n");
    fclose(archivo4);
    printf("Archivo 4 creado\n");
    sleep(1);
    printf("Eliminando archivo 4...\n");
    sleep(2);
    remove("archivos-4.txt");
    printf("Archivo 4 eliminado\n");


    return 0;
}