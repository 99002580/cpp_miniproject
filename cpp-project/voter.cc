#include "voter.h"
voter :: voter():
    m_year(0),m_state(""),m_person(""),m_party(""),m_vts(0),m_tvts(0){}

voter :: voter(int year,std::string state,std::string person,std::string party,int vts,int tvts):
    m_year(year),m_state(state),m_person(person),m_party(party),m_vts(vts),m_tvts(tvts){}

int voter :: getYear(){
    return m_year;
}
std::string voter :: getState(){
    return m_state;
}
std::string voter :: getPerson(){
    return m_person;
}
std::string voter :: getParty(){
    return m_party;
}
int voter::getVotes(){
    return m_vts;
}
int voter :: getTotalVotes(){
    return m_tvts;
}
