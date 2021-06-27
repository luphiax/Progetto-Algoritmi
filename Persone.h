//
// Created by Luigi on 05/06/2021.
//

#ifndef PROGETTO_ALGORITMI_PERSONE_H
#define PROGETTO_ALGORITMI_PERSONE_H
#include <string>
#include <iostream>
class Persone {

private:
    std::string _matricola;
    std::string _nome;
    std::string _cognome;
    std::string _mail ;
public:
    Persone(const std::string& nome,const std::string& cognome,const std::string& mail);
};


#endif //PROGETTO_ALGORITMI_PERSONE_H
