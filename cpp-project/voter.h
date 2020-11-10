#ifndef __VOTER_H_
#define __VOTER_H_
#include <iostream>

class voter{
    int m_year;
    std::string m_state;
    std::string m_person;
    std::string m_party;
    int m_vts;
    int m_tvts;
public:
    voter();
    voter(int,std::string,std::string,std::string,int,int);
    int getYear();
    std::string getState();
    std::string getPerson();
    std::string getParty();
    int getVotes();
    int getTotalVotes();

};

#endif // __VOTER_H_
