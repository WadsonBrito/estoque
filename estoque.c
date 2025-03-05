# include <stdio.h>
int main(){

    //Declarar variaveis do Produto
    
    char ProdutoA[30] = "Produto A";
    char ProdutoB[30] = "produto B";
    unsigned int EstoqueA = 1000;
    unsigned int EstoqueB = 2000;
    float ValorA = 10.50;
    float ValorB = 20.40;
    unsigned int EstoqueMinA = 500;
    unsigned int EstoqueMinB = 2500;
    int ResultadoA, ResultadoB;
    double ValorTotalA;
    double ValorTotalB;

    // Exibição das Informações do Produto

    printf("Produto %s tem em estoque %u e o valor unitario é: R$ %.2f\n", ProdutoA, EstoqueA, ValorA);
    printf("Produto %s tem em estoque %u e o valor unitario é: R$ %.2f\n", ProdutoB, EstoqueB, ValorB);

    //Comparações com o valor minimo do estoque

    ResultadoA = EstoqueA > EstoqueMinA;
    ResultadoB = EstoqueB > EstoqueMinB;

    printf("O Produto %s tem em estoque minimo %d\n", ProdutoA, ResultadoA);
    printf("O Produto %s tem em estoque minimo %d\n", ProdutoB, ResultadoB);

    //Comparação entre os valores totais dos produtos

    printf("Valor total de A (R$: %.2f) é maior que o valor total de B (R$: %.2f)? : %d\n", EstoqueA * ValorA, EstoqueB * ValorB, (EstoqueA * ValorA) > (EstoqueB * ValorB));

    return 0;
}
