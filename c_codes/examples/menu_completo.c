#include<stdio.h>

int main(void){
    char opc;
    char opc2;
    printf("Menu completo\n");
    do{
        printf("1 - \n"); 
        printf("2 - \n"); 
        printf("3 - \n"); 
        printf("4 - \n"); 
        printf("5 - \n"); 
        printf("6 - \n");  
        printf("Escoja una opcion:\n");
        do{ //loop
            scanf(" %c",&opc);
            switch(opc){
                case'1':
                    printf("Opcion 1\n");
                    break;
                case'2':
                    printf("Opcion 2\n");
                    break;
                case'3':
                    printf("Opcion 3\n");
                    break;
                case'4':
                    printf("Opcion 4\n");
                    break;
                case'5':
                    printf("Opcion 5\n");
                    break;
                case'6':
                    printf("Opcion 6\n");
                    break;
                default:
                    printf("Opcion invalida. Vuelva a escoger una opcion:\n");
                }
            }while(opc<'1' || opc>'6');
        printf("Quieres continuar?(s/n)\n");
        scanf(" %c", &opc2);
    }while(opc2 == 's');
    return 0; 
}
