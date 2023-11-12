#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Mp3
    {
    private:
        bool estado = false; // ligado ou desligado
        bool fone = false; // Fone está plugado ou não
        string modelo; // Modelo do mp3
        string musica; // Música que está tocando no momento
        int volume = 30; // Volume de 0 a 100

    public:
        void getModelo(){
            cout << "Modelo do Mp3: " << modelo << endl;
        }

        void setModelo(string modelo_mp3){
            modelo = modelo_mp3;
        }

        void getMusica(){
            cout << "Musica Atual: " << musica << endl;
        }

        void setMusica(string musica_mp3){
            musica =  musica_mp3;
        }

        void getVolume(){
            cout << "Volume Atual: " << volume << endl;
        }

        void setVolume(int volume_mp3){
            volume = volume_mp3;

        }

        void setEstado(){
            estado = estado == true ? false : true;
        }

        void getEstado(){
            if(estado == true)
                cout << modelo << " - ON" << endl;
            else
                cout << modelo << " - OFF" << endl;
        }

        void setFone(){
            fone = fone == true ? false : true;
        }

        void getFone(){
            if(fone == true)
                cout << "Fone esta plugado" << endl;
            else
                cout << "Fone nao esta plugado" << endl;
        }
    };

int main(){
    
    Mp3 meu_mp3;

    meu_mp3.setModelo("Ipod");
    meu_mp3.setEstado();
    meu_mp3.setFone();
    meu_mp3.setMusica("Metallica - Unforgiven");
    meu_mp3.setVolume(80);

    meu_mp3.getModelo();
    meu_mp3.getEstado();
    meu_mp3.getFone();
    meu_mp3.getMusica();
    meu_mp3.getVolume();


    

    return 0;
}