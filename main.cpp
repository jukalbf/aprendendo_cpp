#include <iostream>
#include <string>
// Ignora o uso do 'std'
// using namespace std;

struct Pessoa {
  std::string nome;
  int idade;
  std::string cpf;
};

void changeName(std::string *old_name, std::string new_name) {
  *old_name = new_name;
}

int main() {
  std::cout << "Hello, World! :]\n";
  std::cout << "Programa feito em C++\n";

  std::cout << "Um número: ";
  std::cout << 4;

  std::cout << "\n\n====== Variáveis ======" << std::endl;

  int num = 10;
  double numDouble = 6.78;
  char charValue = 'O';
  std::string stringValue = "Minha string";
  bool boolValue = false;

  std::cout << "Valor de num: " << num << "\n";
  std::cout << "Valor de double: " << numDouble << "\n";
  std::cout << "Valor do char: " << charValue << "\n";
  std::cout << "Valor da string " << stringValue << "\n";
  std::cout << "Valor bool: " << boolValue << "\n";

  std::cout << "\n\n====== Structs ======" << std::endl;
  struct Pessoa pessoa = {"Maria", 27, "398.235.583-91"};

  std::cout << "Chamando atributos do struct:\n";
  std::cout << "\tNome: " << pessoa.nome << std::endl;
  std::cout << "\tIdade: " << pessoa.idade << std::endl;
  std::cout << "\tCPF: " << pessoa.cpf << std::endl;

  struct Pessoa *ptr = &pessoa;

  std::cout << "\n\nMostrando tamanho da variável: " << sizeof(pessoa) << std::endl;
  std::cout << "\nVendo tamanho do ponteiro que aponta pra pessoa: " << sizeof(ptr) << std::endl;

  ptr->nome = "Rafaela";
  changeName(ptr->nome, "Gabriela");

  std::cout << "\nNovo valor de pessoa: " << ptr->nome << std::endl;

  return 0;
}
