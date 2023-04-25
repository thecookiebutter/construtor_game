#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Criacao da classe Jogo
class JogoAdivinhacao{
    // Variaveis privadas da classe
    private:
    int numeroSecreto;
    int tentativas;
    // Variaveis privadas da classe
    public:
    JogoAdivinhacao(){
    // Codigo do jogo, gerando numero aleatorio e somando as tentativas
    srand(time(0));
    numeroSecreto = rand() % 100 + 1;
    tentativas = 0;
    }
    // Metodo da classe
    void jogar(){
    // Programa do metodo
    int palpite;
    do{
    cout << "Digite um número entre 1 e 100: ";
    cin >> palpite;
    tentativas++;
    if (palpite > numeroSecreto){
        cout << "O numero secreto é menor!" << endl;
    } else if (palpite < numeroSecreto) {
        cout << "O numero secreto é maior!" << endl;
    } else {
        cout << "Parabéns, você acertou o numero em " << tentativas << " tentativas!" << endl;
    }
    // O codigo roda enquanto o usuario nao acertar o numero aleatorio gerado
    } while (palpite != numeroSecreto);
    }
};
// Codigo principal que utiliza a classe e o metodo criados acima, criando uma instancia de jogo
int main(){
    JogoAdivinhacao jogo;
    jogo.jogar();
    return 0;
}
/* O Construtor pode ser implementado em um jogo de diversas maneiras. Em um jogo onde há várias instâncias do mesmo tipo de inimigo, o Construtor pode ser utilizado para criar os vários inimigos sem precisar dar o mesmo valor a todas as variaveis desses inimigos. Em um jogo onde o protagonista morre e retorna ao estado inicial, o Construtor pode ser utilizado para re-criar o jogador em seu estado inicial.*/