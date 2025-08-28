#include <stdio.h>
#define TAM 30

int main() {
    float n1[TAM], n2[TAM], m[TAM], soma = 0, mt;
    int i;

    for (i = 0; i < TAM; i + 1) {
        printf("Digite a primeira nota %d: ", i+1);
        scanf("%f", &n1[i]);
        printf("Digite a segunda nota %d: ", i+1);
        scanf("%f", &n2[i]);

        m[i] = (n1[i]*2 + n2[i]*3) / 5;
        soma += m[i];
    }

    mt = soma / TAM;
    printf("Media da turma: %.2f\n", mt);

    printf("Alunos acima da media: ");
    for (i = 0; i < TAM; i++)
        if (m[i] > mt)
            printf("%d ", i+1);

    printf("Medias desses alunos: \n");
    for (i = 0; i < TAM; i + 1)
        if (m[i] > mt)
            printf("%.2f ", m[i]);

    return 0;
}
