#include "dominios.h"

using namespace std;
//Fynção verificadora para nome
void Nome::verify(char name[]) throw(invalid_argument){
    if(islower(name[0])){
        throw invalid_argument ("Nao comeca com letra maiuscula");
    }
    for(int i = 0; i < strlen(name); i++){
        if(name[i] == '\0'){
            break;
        }
        else{
            if(!isalpha(name[i])){
                throw invalid_argument ("Nao pertence ao alfabeto.");
            }
        }
    }
}

