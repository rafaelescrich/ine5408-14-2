#include <iostream>

#define MAXESTRUTURA 100

template <typename T> class EstruturaLinear {
    
    private:

        int topo;

        T elementos[MAXESTRUTURA];
    
    public:

        EstruturaLinear() {             //Construtor
        
            topo = -1;

        }

        EstruturaLinear<T>(int tam) {   //Construtor
        
            T elementos[tam];
            topo = -1;

        }

        void inclui(T dado) {           //método para incluir dado de qualquer tipo
        
            if (estruturaCheia()) {
                throw ("Estrutura Cheia");
            }
            else {
            
                topo = topo + 1;
                elementos[topo] = dado;
            }
        }

        T retira() {                    //método para retirar elemento da estrutura
        
            if (estruturaVazia()) {
                throw ("Estrutura Vazia");
            }
            else {
            
                topo = topo - 1;
                return elementos[topo+1];
            }

        }

        T ultimo() {                    //método para retornar último elemento
        
            if (estruturaVazia()) {
                throw ("Estrutura Vazia");
            }
            else {
            
                return elementos[topo];
            }
        }

        int getUltimo();                //método que retorna posição do útlimo elemento
        
        bool estruturaCheia() {         //método que retorna true para estrutura cheia
            
            if (topo == MAXESTRUTURA -1)
                return true;
            return false;
        }
        
        bool estruturaVazia() {          //método que retorna true para estrutura vazia
            
            if (topo == -1)
                return true;
            return false;
        }
};

int main() {

    EstruturaLinear<int> intEstrutura;
    intEstrutura.inclui(7);
    std::cout << intEstrutura.ultimo() << std::endl;
    return 0;
}
