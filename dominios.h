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
    char* getNome();
    void setNome(char str[21]) throw(invalid_argument);

     Nome(char str[21]);
    ~Nome(){};
private:
    char name[21];
    void verify(char str[21]) throw (invalid_argument);
};

class Sobrenome{

public:

    void setSobrenome(char str[21]) throw(invalid_argument);
    char* getSobrenome();

    Sobrenome(char str[21]);
    ~Sobrenome(){};
private:
    char last_name[21];
    void verify(char str[21]) throw (invalid_argument);
};

class Telefone{

public:
    void setTelefone(char tel[14]) throw (invalid_argument);
    char* getTelefone();

    Telefone(char tel[14]);
    ~Telefone(){};
private:
    void verify(char tel[14]) throw (invalid_argument);
    char numero[14];
};

#endif
