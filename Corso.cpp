//
// Created by Luigi on 05/06/2021.
//

#include "Corso.h"
#include <string>

Corso::Corso(const string& CodIdentificativoCorso,const string&titoloCorso,const int cfu,const int oreLezioneCorso,const int oreLabCorso,const int oreEsercitazioneCorso){
    _CodIdentifictivoCorso=CodIdentificativoCorso;
    _titoloCorso=titoloCorso;
    _cfu=cfu;
    _oreLezioneCorso=oreLezioneCorso;
    _oreLabCorso=oreLabCorso;
    _oreEsercitazioneCorso=oreEsercitazioneCorso;
}

bool Corso::CercaAttivo(){
return _attivo;
}
