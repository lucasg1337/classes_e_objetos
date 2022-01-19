#include <iostream>
#include <string>

using namespace std;

class Usuario{//declaracao da classe Usuario
    private: //atributos privados da classe
        string name = "";
        short int idade = 0;
        string email = "";
    public://metodos para acessar os membros privados
            Usuario(string _name,short int _idade,string _email){
            Usuario::name = _name;
            Usuario::idade = _idade;
            Usuario::email = _email;
        }
    string getName(){return name;}
    short int getIdade(){return idade;}
    string getEmail() { return email;}
};

class Carro{
    protected:
        string modelo = "GOL";
        int ano = 2010;
        string cor = "Vermelho";
    public:
       string getModelo();
       int getAno();//prototipos de funcoes da classe carro
       string getCor();
};

string Carro::getModelo(){//definicao da funcao fora da classe
    return Carro::modelo;
}

int Carro::getAno(){//definicao da funcao fora da classe
    return Carro::ano;
}

string Carro::getCor(){//outra funcao/metodo da classe Carro
    return Carro::cor;
}


Usuario user("fulano",26,"fulano@gmail.com");//criando um objeto da classe Usuario
Carro car;

int main(){
    cout << "NOME: " << user.getName() << "\t" <<
    "IDADE: " << user.getIdade() << "\t" <<
    "EMAIL: " << user.getEmail() << endl;
    cout << "MODELO: " << car.getModelo() << "\t" <<
    "ANO: " << car.getAno() << "\t" <<
    "COR: " << car.getCor() << endl;
    return 0;
}
