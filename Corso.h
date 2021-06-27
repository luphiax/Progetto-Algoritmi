//
// Created by Luigi on 05/06/2021.
//

#ifndef PROGETTO_ALGORITMI_CORSO_H
#define PROGETTO_ALGORITMI_CORSO_H
#include <string>

class Corso {
private:
   string _CodIdentificativoCorso;
    string _titoloCorso;
   int _cfu;
   int _oreLezioneCorso;
   int _oreLabCorso;
   int _oreEsercitazioneCorso;
bool _attivo;
public:
    Corso(const string& CodIdentificativoCorso,const string&titoloCorso,const int cfu,const int oreLezioneCorso,const int oreLabCorso,const int oreEsercitazioneCorso);
bool CercaAttivo();
};


#endif //PROGETTO_ALGORITMI_CORSO_H
