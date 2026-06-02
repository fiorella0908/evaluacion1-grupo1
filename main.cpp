#include <stdio.h>

int main() {
    
    char nomusu[50];
    
    printf("=== BIENVENIDO A LA EVALUACION DEL GRUPO 1 ===\n");
    printf("Integrantes del grupo que participaron:\n");
    printf("- Manuel Rodriguez\n");
    printf("- Fiorella Campos\n");
    printf("- Jose Leon\n");
    printf("- David Duran\n");
    
    
    printf("Por favor, ingrese su nombre para iniciar: ");
 
    scanf("%49s", nomusu);
    
    printf("¡Excelente! %s esta ejecutando C desde un contenedor Linux.\n", nomusu);
    
    return 0;
}
