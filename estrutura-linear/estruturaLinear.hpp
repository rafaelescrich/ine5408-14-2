template <typename T> class estruturaLinear
{
    private:
            int topo;
            int tam;

    public:
            EstruturaLinear();
            EstruturaLinear<T>(int tam);
            void inclui(T dado);
            T retira();
            T ultimo();
            int getUltimo();
            bool estruturaCheia();
            bool estruturaVazia();
};
