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










/*
void Sobrenome::verify(char last_name[]) throw(invalid_argument){
    if(islower(last_name[0])){

        throw invalid_argument ("Nao comeca com letra maiuscula");
    }
    for(unsigned int i = 0; i < strlen(last_name); i++){
        if(last_name[i] == '\0'){
            break;
        }
        else{
            if(!isalpha(last_name[i])){
                throw invalid_argument ("Nao pertence ao alfabeto.");
            }
        }
    }
}*/





