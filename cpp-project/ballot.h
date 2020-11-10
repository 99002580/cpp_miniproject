#ifndef __BALLOT_H_
#define __BALLOT_H_
#include "voter.h"
#include <list>
#include <iterator>
#include <algorithm>

class ballot{
    std::list <voter> v;
public:
    void addVoter(int,std::string,std::string,std::string,int,int);
    void removeVoter(std::string);
    int MaxVotesPolled();
    int MinVotesPolled();
    std::string CandidateWithMaxVotes();
    std::string CandidateWithMinVotes();
};


#endif // __BALLOT_H_
