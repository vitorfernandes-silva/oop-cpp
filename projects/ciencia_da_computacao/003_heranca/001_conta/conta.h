#ifndef CONTA_H
#define CONTA_H

class Conta
{
    private:
        float saldo;
    public:
        Conta(float = 0);
        ~Conta(){}
        void debitar(float);
        void creditar(float);
};

void Conta::debitar(float val)
{
    
}
#endif