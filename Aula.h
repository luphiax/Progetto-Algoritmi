//
// Created by Luigi on 05/06/2021.
//
#include <string>
#ifndef PROGETTO_ALGORITMI_AULA_H
#define PROGETTO_ALGORITMI_AULA_H


class Aula {
private:
   string _CodIdentificativoAula;
   string _Denominazione;
   char _TipoAula;
   int _CapienzaMax;
   int _CapienzaEsame;
public:
    Aula(const stirng& CodIdentificativoAula,const stirng&Denominazione,const char TipoAula,const int CapienzaMax,const int CapienzaEsame);
};


#endif //PROGETTO_ALGORITMI_AULA_H
