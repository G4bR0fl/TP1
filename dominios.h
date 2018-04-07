#ifndef DOMINIOS_H
#define DOMINIOS_H

#include <string>
#include <iostream>
#include <stdexcept>
#include <cstring>
#include <cctype>
#include <stdio.h>

using namespace std;

class Nome{

public:
    Nome();
    ~Nome(){};

    Nome(char name[]){
        setNome(name);
    };

    char* getNome(){
        return name;
    };


    void setNome(char str[]) throw(invalid_argument){
        cout << "Digite seu nome:" << endl;
        scanf("%[^\n]s",name);
        verify(name);
        strcpy(name, str);
    };

private:
    char name[21];
    void verify(char name[]) throw (invalid_argument);
};

#endif
