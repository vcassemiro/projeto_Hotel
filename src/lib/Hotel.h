#ifndef HOTEL_H
#define HOTEL_H

#include <string>
#include <vector>
#include "Quarto.h" //Heranca
#include "Hospede.h" //Heranca
#include "Avaliacao.h" //Heranca
#include "Pagamento.h" //Heranca

using std::string;
using std::vector;

class Hotel {
private:
    int idHotel;
    string nome;
    string endereco;
    vector<Quarto> quartos;
    vector<Hospede> hospedes;
    vector<Avaliacoes> avaliacoes;
    vector<Pagamento> pagamentos;

public:
    Hotel(int idHotel, string nome, string endereco);
    ~Hotel();

    // Getters e Setters...

    // Métodos para gerenciar hóspedes...
    void addHospede(Hospede hospede);
    vector<Hospede> getHospedes();

    // Métodos para gerenciar avaliações...
    void addAvaliacao(Avaliacoes avaliacao);
    vector<Avaliacoes> getAvaliacoes();

    // Métodos para gerenciar pagamentos...
    void addPagamento(Pagamento pagamento);
    vector<Pagamento> getPagamentos();

    // Métodos para CSV
    void salvarEmCSV(const string& nomeArquivo);
};

#endif // HOTEL_H
