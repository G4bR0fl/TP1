#include <stdexcept>
#include <iostream>
#include <string>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

int main(){
    TUNome testeNome;
    TUSobrenome testeSobrenome;
    TUTelefone testeTelefone;
    TUEndereco testeEndereco;
    TUData testeData;
    TUEmail testeEmail;
    TUSenha testeSenha;
    TUTexto testeTexto;
    TUIdioma testeIdioma;
    TUClasseTermo testeClasseTermo;
    TULeitor testeLeitor;
    TUDesenvolvedor testeDesenvolvedor;
    TUAdministrador testeAdministrador;
    TUVocabularioControlado testeVoc;
    TUTermo testeTermo;
    TUDefinicao testeDefinicao;

    cout << "Dominios";
    cout << endl << "Teste Nome: ";
    switch(testeNome.run()){
        case TUNome::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUNome::FALHA:
            cout << "FALHA";
            break;
    }
    cout << endl << "Teste Sobreome: ";
    switch(testeSobrenome.run()){
        case TUSobrenome::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUSobrenome::FALHA:
            cout << "FALHA";
            break;
    }

    cout << endl << "Teste Telefone: ";
    switch(testeTelefone.run()){
        case TUTelefone::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUTelefone::FALHA:
            cout << "FALHA";
            break;
    }

    cout << endl << "Teste Endereco: ";
    switch(testeEndereco.run()){
        case TUEndereco::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUEndereco::FALHA:
            cout << "FALHA";
            break;
    }

    cout << endl << "Teste Data: ";
    switch(testeData.run()){
        case TUData::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUData::FALHA:
            cout << "FALHA";
            break;
    }

    cout << endl << "Teste Email: ";
    switch(testeEmail.run()){
        case TUEmail::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUEmail::FALHA:
            cout << "FALHA";
            break;
    }

    cout << endl << "Teste Senha: ";
    switch(testeSenha.run()){
        case TUSenha::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUSenha::FALHA:
            cout << "FALHA";
            break;
    }

    cout << endl << "Teste Texto de Definicao: ";
    switch(testeTexto.run()){
        case TUTexto::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUTexto::FALHA:
            cout << "FALHA";
            break;
    }

    cout << endl << "Teste Idioma: ";
    switch(testeIdioma.run()){
        case TUIdioma::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUIdioma::FALHA:
            cout << "FALHA";
            break;
    }

    cout << endl << "Teste Classe Termo: ";
    switch(testeClasseTermo.run()){
        case TUClasseTermo::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUClasseTermo::FALHA:
            cout << "FALHA";
            break;
    }

    cout << endl << endl << "Entidades";
    cout << endl << "Teste Classe Leitor: ";
    switch(testeLeitor.run()){
        case TULeitor::SUCESSO:
            cout << "SUCESSO";
            break;
        case TULeitor::FALHA:
            cout << "FALHA";
            break;
    }

    cout << endl << "Teste Classe Desenvolvedor: ";
    switch(testeDesenvolvedor.run()){
        case TUDesenvolvedor::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUDesenvolvedor::FALHA:
            cout << "FALHA";
            break;
    }

    cout << endl << "Teste Classe Administrador: ";
    switch(testeAdministrador.run()){
        case TUAdministrador::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUAdministrador::FALHA:
            cout << "FALHA";
            break;
    }

    cout << endl << "Teste Classe Vocabulario Controlado: ";
    switch(testeVoc.run()){
        case TUVocabularioControlado::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUVocabularioControlado::FALHA:
            cout << "FALHA";
            break;
    }

    cout << endl << "Teste Classe Termo: ";
    switch(testeTermo.run()){
        case TUTermo::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUTermo::FALHA:
            cout << "FALHA";
            break;
    }

    cout << endl << "Teste Classe Definicao: ";
    switch(testeDefinicao.run()){
        case TUDefinicao::SUCESSO:
            cout << "SUCESSO";
            break;
        case TUDefinicao::FALHA:
            cout << "FALHA";
            break;
    }

        cout << endl << endl << "Aperte ENTER para finalizar o progrma! ";
    getchar();
    return 0;
}
