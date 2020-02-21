#include <iostream>

class Aluno
{
    private:
        std::string nome;
        std::string matricula;
        std::string email;
        int idade;
        bool matriculado;

    public:
        std::string getNome()
        {
            return nome;
        }
        
        void setNome(std::string n)
        {
            nome = n;
        }
        
        std::string getMatricula()
        {
            return matricula;
        }
        
        void setMatricula(std::string m)
        {
            matricula = m;
        }
        
        std::string getEmail()
        {
            return email;
        }
        
        void setEmail(std::string e)
        {
            email = e;
        }

        int getIdade()
        {
            return idade;
        }

        void setIdade(int i)
        {
            idade = i;
        }
        
        bool getMatriculado()
        {
            return matriculado;
        }

        void setMatriculado(bool m)
        {
            matriculado = m;
        }
};

int main(int argc, char* argv[])
{
    Aluno aluno;

    aluno.setNome("Andre");
    aluno.setMatricula("20197283618");
    aluno.setEmail("amelco.herman@gmail.com");
    aluno.setIdade(37);
    aluno.setMatriculado(false);

    std::cout << "Nome:      " << aluno.getNome() << "\n";
    std::cout << "Idade:     " << aluno.getIdade() << "\n";
    std::cout << "Email:     " << aluno.getEmail() << "\n";
    std::cout << "Matricula: " << aluno.getMatricula() << "\n";
    std::cout << "Situação:  " << (aluno.getMatriculado() ? "matriculado" : "inativo") << "\n";

    return 0;
}
