#include "dominios.h"

using namespace std;

//Fynções para a classe "Nome"

Nome::Nome(char str[21]){
    setNome(str);//Inicializando o objeto numa string auxiliar
}

void Nome::setNome(char str[21]) throw(invalid_argument){
    verify(str);
    strcpy(name, str);
}

char* Nome::getNome(){
    return name;
}

void Nome::verify(char str[21]) throw(invalid_argument){
    if(islower(str[0])){
        throw invalid_argument ("Nao comeca com letra maiuscula");
    }
    for(unsigned int i = 0; i < strlen(str); i++){
        if(str[i] == '\0'){
            break;
        }
        else{
            if(!isalpha(str[i])){
                throw invalid_argument ("Nao pertence ao alfabeto.");
            }
        }
    }
}

//Fynções para a classe "Sobrenome"



Sobrenome::Sobrenome(char str[21]){
    setSobrenome(str);//Inicializando o objeto numa string auxiliar
}

void Sobrenome::setSobrenome(char str[21]) throw(invalid_argument){
    verify(str);
    strcpy(last_name, str);
}

char* Sobrenome::getSobrenome(){
    return last_name;
}


void Sobrenome::verify(char str[21]) throw(invalid_argument){
    if(islower(str[0])){
        throw invalid_argument ("Nao comeca com letra maiuscula");
    }
    for(unsigned int i = 0; i < strlen(str); i++){
        if(str[i] == '\0'){
            break;
        }
        else{
            if(!isalpha(str[i])){
                throw invalid_argument ("Nao pertence ao alfabeto.");
            }
        }
    }
}

//Funções para a classe 'Telefone'

Telefone::Telefone(char tel[14]){
    setTelefone(tel);//Inicializando o objeto numa string auxiliar
}

char* Telefone::getTelefone(){
    return numero;
}

void Telefone::setTelefone(char tel[14]) throw (invalid_argument){
    verify(tel);
    strcpy(numero, tel);

}

void Telefone::verify(char tel[14]) throw (invalid_argument){
    for(unsigned int i = 0; i < strlen(tel); i++){
        if(i == 2){
            if(!isspace(tel[i])){
                throw invalid_argument ("Telefone invalido");
            }
        }
        else{
            if(i == 8){
                if(tel[i] != '-'){
                    throw invalid_argument ("Telefone invalido");
                }
            }
            else{
                if(!isdigit(tel[i])){
                    throw invalid_argument ("Telefone invalido");
                }
            }
        }
    }
}

Endereco::Endereco(char add[21]){
    setEndereco(add);
}

char* Endereco::getEndereco(){
    return endereco;
}

void Endereco::setEndereco(char add[21]) throw (invalid_argument){
    verify(add);
    strcpy(endereco, add);
}

void Endereco::verify(char add[21]) throw (invalid_argument){
    if(isspace(add[0]) || isspace(add[strlen(add)-1])){
        throw invalid_argument ("Endereco invalido");
    }
    for(unsigned int i = 0; i < strlen(add); i++){
        if(isspace(add[i]) && isspace(add[i+1])){
            throw invalid_argument ("Endereco invalido");
        }
    }

}
