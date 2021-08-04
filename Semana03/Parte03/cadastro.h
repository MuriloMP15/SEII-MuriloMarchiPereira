
class cadastro{

private:
    string Nome;
    string CPF;
    string Nacionalidade;
    int Idade;

public:
// Constructor
   cadastro(string nome, string cpf, string nacionalidade, int idade);
   void setDados();
   void getDados();

};

void add(cadastro c);

void listar(cadastro c);

void remover();
