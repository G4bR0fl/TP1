#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include <stdexcept>

using namespace std;

/**
 * @file 
 * @author Gabriel Bessa e Adelson Jonathan
 * @date 15 de Maio de 2018
 * 
 * @brief
 * 
 */

///Declarando anteriormente
/// ILN = Interface login(SERVICO)
class ILNAutenticacao;
class ILNUsuario;

///IU = Interface Usuario(APRESENTACAO)
class IUAutenticacao;
class IUUsuario;

/// Declaracao de interface para servico de autenticacao na camada de apresentacao.
class IUAutenticacao{
    public:
        ///Solicitacao do servico
        virtual ResultadoAutenticacao autenticar() throw(runtime_error) = 0;

        ///Link da controladora na camada de servico
        virtual void setCntrLNAutenticacao(ILNAutenticacao *) = 0;

        ///Destructor que sera chamado no final
        virtual ~IUAutenticacao(){};
};

/// Declaracao de interface para servico de autenticacao na camada de servico.

class ILNAutenticacao{
    public:
        /// Metodo por meio do qual eh solicitado o servico.

        virtual Resultado autenticar(const Email &, const Senha &) throw(runtime_error) = 0;

        /// Metodo destrutor virtual.

        virtual ~ILNAutenticacao() {}
};

///Solicitando o servico do usuario

class ILNUsuario{
    public:
        ///Exibe as informacoes do leitor na tela
        virtual void Exibir(const Leitor &) throw (runtime_error) = 0;
        ///Exibe as informacoes do desenvolvedor na tela
        virtual void Exibir(const Desenvolvedor &) throw (runtime_error) = 0;
        ///Exibe as informacoes do administrador na tela
        virtual void Exibir (const Administrador &) throw (runtime_error) = 0;

        ///Criando o leitor
        virtual Leitor cria_leitor(const Email &) = 0;
        ///Criando o desenvolvedor
        virtual Desenvolvedor cria_dev(const Email &) = 0;
        ///Criando o administrador
        virtual Administrador cria_adm(const Email &) = 0;

        ///Destructor da classe ILNUsuario
        virtual ~ILNUsuario(){}
};

///Apresentacao do Usuario

class IUUsuario{
    public:
        ///Retorna o resultado do usuario
        virtual resultado_usuario Executar(const Email &) = 0;
        ///Define o controle do servico do usuario
        virtual void setCntrServUsuario(ILNUsuario *) = 0;
        ///Destructor da classe IUUsuario
        virtual ~IUUsuario(){}
};



#endif // INTERFACES_H_INCLUDED
