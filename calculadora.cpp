#include <iostream>

int pedirParaImput()
{
    std::cout<<"Digite um numero: ";
    int c{};
    std::cin>>c;
    return c;
}
int soma(int a, int b)
{
    int som=a+b;
    return som;
}
int subtracao(int c, int d)
{
    int sub=c-d;
    return sub;
}
int multiplicacao(int e, int f)
{
    int mult=e*f;
    return mult;
}
int divisao(int g, int h)
{
    int div=g*h;
    return div;
}
void menu()
{
    std::cout<<"[1]--> SOMA"<<std::endl;
    std::cout<<"[2]--> SUBTRACAO"<<std::endl;
    std::cout<<"[3]--> MULTIPLICACAO"<<std::endl;
    std::cout<<"[4]--> DIVISAO"<<std::endl;
}

int selecao()
{
    std::cout<<"digite um numero para a operacao: ";
    int selecao{};
    std::cin>>selecao;
    return selecao;
}

int main()
{   
    menu();
    int testeSelecao=selecao();
    int teste=pedirParaImput();
    int teste1=pedirParaImput();
    if (testeSelecao==1)
    {
        int somaFinal=soma(teste,teste1);
        std::cout<<"A SOMA EH: "<<somaFinal<< std::endl;
    }
    else if (testeSelecao==2)
    {
        int subtracaoFinal=subtracao(teste,teste1);
        std::cout<<"A SUBTRACAO EH: "<<subtracaoFinal<< std::endl;
    }
    else if (testeSelecao==3)
    {
        int multiplicacaoFinal=multiplicacao(teste,teste1);
        std::cout<<"A MULTIPLICACAO EH: "<<multiplicacaoFinal<< std::endl;
    }
    else if (testeSelecao==4)
    {
        int divisaoFinal=divisao(teste,teste1);
        std::cout<<"A DIVISAO EH: "<<divisaoFinal<< std::endl;
    }
    else
    {
        std::cout<<"numero invalido";
    }
    return 0;

}