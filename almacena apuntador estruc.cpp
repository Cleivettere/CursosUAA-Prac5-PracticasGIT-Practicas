#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
/*cambios en la segunda rama  pero en la carperta de GIT HUB
*/
using namespace std;
   
int main(){
   struct Alumno{
      int codigo;
      char nombre[15];   
      char direccion[15];
      char otronom[10];
      char apellidos[25];
      int edad;
      int sueldo;
   };

 int i;   
 Alumno al;
 Alumno *ptrAl;
 
   ptrAl=&al;//asingo la direcci�n de memoria de la estructura a la variable apuntador
   //ptrAL
   //Capturo los datos del alumno atravez del apuntador
   printf("\nProporciona el codigo del alumno: ");
   scanf("%d", &(*ptrAl).codigo);
   fflush(stdin);   
   printf("\nProporciona el nombre del alumno: ");
   gets((*ptrAl).nombre);
   printf("\nProporciona la direcci�n del alumno: ");
   gets((*ptrAl).direccion); 
   printf("\nProporciona la edad del alumno: ");
   scanf("%d", &(*ptrAl).edad);

   /*impresion de datos*/
   printf("\n%d", (*ptrAl).codigo);
   printf("\n%s", (*ptrAl).nombre); 
   printf("\n%s", (*ptrAl).direccion);
      
  /* Para hacer menos inc�modo el trabajo con punteros a estructuras, el C tiene el operador flecha -> que se utiliza de esta forma:
   ptr->campo    que es equivalente a escribir  (*ptr).campo*/
   printf("\nProporciona el codigo del alumno: ");
   scanf("%d", &ptrAl->codigo);
   fflush(stdin);   
   printf("\nProporciona el nombre del alumno: ");
   gets(ptrAl->nombre);
   printf("\nProporciona la direcci�n del alumno: ");
   gets(ptrAl->direccion); 
   /*impresion de datos*/
   printf("\n%d", ptrAl->codigo);
   printf("\n%s", ptrAl->nombre); 
   printf("\n%s", ptrAl->direccion);

   system("pause");
   return 0;
}    
