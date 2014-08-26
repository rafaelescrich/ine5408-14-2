[ine5408-14-2](https://moodle.ufsc.br/course/view.php?id=39826)
==============

Repositório para o código da disciplina de Estruturas de Dados do curso de Ciências da Computação da UFSC - INE5408

# Documentação

Toda a documentação é feita usando o [Doxygen](http://www.stack.nl/~dimitri/doxygen/manual/docblocks.html).

Segue código de exemplo do estilo usado para a documentação do código:

    //! Uma classe teste.
    /*!
        Uma descrição mais elaborada.
    */
 
        class Test{
        
            Public:
        
                //!Construtor.
                /*!
                    Uma descrição detalhada do construtor.
                */
                Test();
            
                //! Destrutor.
                /*!
                    Uma descrição detalhada do destrutor.
                */
                ~Test();
            
            ..............
        };

# Compilação

A compilação do código é feita usando o [g++](https://gcc.gnu.org/onlinedocs/gcc-4.9.1/gcc/)

As opções usadas são:
    
    g++ -isystem ${GTEST_DIR}/include -Wall -g -o Hello Hello.cpp

-isystem ${GTEST_DIR}/include , significa que o compilador vai utilizar o diretório aonde está o código do Google Test framework para compilar

-Wall significa "warn all", o que habilita todos os avisos do compilador

-g significa para habilitar o gdb (GNU Debugger)

-o significa Output, onde devemos colocar o nome do arquivo que queremos rodar o programa que compilamos.

# Testes

É utilizado o framework de testes unitários do [Google](http://code.google.com/p/googletest/)

Temos um exemplo abaixo de uma classe para testar uma fila:

    class QueueTest : public ::testing::Test {
        protected:
            virtual void SetUp() {
                q1_.Enqueue(1);
                q2_.Enqueue(2);
                q2_.Enqueue(3);
    }

    // virtual void TearDown() {}

        Queue<int> q0_;
        Queue<int> q1_;
        Queue<int> q2_;
    }; 

# 19/08/2014

Listas, Pilhas e Filas utilizando Vetores (arrays)


Gerência e Alocação Dinâmica de Memória


Lista Encadeada


Fila e Pilha Baseados em Listas Encadeadas


Programa da Disciplina


Lista Duplamente Encadeada


Conceito de Complexidade de Algoritmos


Introdução a Árvores


Árvores I


Árvores de Busca II


Programa da Disciplina


Hashing


Gerência de Arquivos


Ordenação
