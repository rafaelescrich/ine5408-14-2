#include<iostream> 

template <typename T> class EstruturaLinear {
    
    private:
        
        int topo;                       //variável privada que indica o topo
        
        int tam;                        //variável privada que indica o tamanho

    public:
        
        EstruturaLinear();              //Construtor
            
        EstruturaLinear<T>(int tam);    //Construtor
        
        void inclui(T dado);            //método para incluir dado de qualquer tipo
        
        T retira();                     //método para retirar elemento da estrutura
        
        T ultimo();                     //método para retornar último elemento
        
        int getUltimo();                //método que retorna posição do útlimo elemento
        
        bool estruturaCheia();          //método que retorna true para estrutura cheia
        
        bool estruturaVazia();          //método que retorna true para estrutura vazia

};
