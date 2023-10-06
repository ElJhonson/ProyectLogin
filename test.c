#include <stdio.h>
//Me sirve para saber si hay caracteres especiales usando "isalnum"
#include <ctype.h>

int main() {

    // Cadena que guarda el password a verificar
    char cadena[] = "luiswert4&";
    //Contador para la cantidad de caracteres
    int contador = 0;
    //Contadores para cada prueba a superar del password
    int contador1=0, contador2=0, contador3=0;
    
    // Con esto obtenemos la longitud de la cadena
    int longitud = sizeof(cadena)-1;


    // Bucle que recorre la cadena    
    for (int i = 0; i < longitud; i++) {
        //Contador para la cantidad de caracteres
        contador++;
        //Condicional que verifica que haya mayusculas
        if (cadena[i] >= 'A' && cadena[i] <= 'Z')
        {
            contador1 = 1;
        }
        //Condicional que verifica que haya numeros
        if (cadena[i] >= '0' && cadena[i] <= '9')
        {
            contador2 = 1;
        }
        //Condicional que verifica que haya caracteres especiales
        if (!isalnum(cadena[i]) && cadena[i] != ' ')
        {
            contador3 = 1;
        }

        //Imprimimos los caracteres del password
        printf("%c\n", cadena[i]);
    }

    //Comprobamos que se cumplan las condicionales del bucle
    if (contador >= 8 &&contador1 == 1 && contador2 == 1 && contador3 == 1)
    {
        printf("Password creada con exito");
    }else{
        printf("Datos Incorrectos!\nTu password debe tener: (mayusculas - numeros - caracteres especiales)");
    }


    return 0;
}

