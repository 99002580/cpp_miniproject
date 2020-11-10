#include "ballot.h"
void ballot :: addVoter(int year,std::string state,std::string person,std::string party,int vts,int tvts){
    v.push_back(voter(year,state,person,party,vts,tvts));
}
void ballot:: removeVoter(std::string person){
     std::list<voter> :: iterator iter;
     for(iter=v.begin(); iter!=v.end();++iter)
     {
         if(iter->getPerson() == person)
         {
             v.erase(iter);
             break;
         }
     }
}

int ballot :: MaxVotesPolled(){
    auto iter = std::max_element(v.begin(),v.end(),
        [](voter& r1,voter& r2){
            return (r1.getVotes() < r2.getVotes());
        });
        std::cout << iter->getVotes()<<"\n";
     return iter->getVotes();
}
/*int ballot :: MaxVotesPolled(){
    std::list<voter> :: iterator iter=v.begin();
    int mxvotes = iter->getVotes();
    for(; iter!=v.end();++iter)
     {
         if(mxvotes < iter->getVotes())
         {
             mxvotes = iter->getVotes();
         }
     }
     return mxvotes;
}*/
int ballot :: MinVotesPolled(){
    std::list<voter> :: iterator iter=v.begin();
    int minvotes = iter->getVotes();
    for(; iter!=v.end();++iter)
     {
         if(minvotes > iter->getVotes())
         {
             minvotes = iter->getVotes();
         }
     }
     return minvotes;
}
std::string ballot :: CandidateWithMaxVotes(){
    std::list<voter> :: iterator iter=v.begin();
    int mxvotes = iter->getVotes();
    std::string winner = iter-> getPerson();
    for(; iter!=v.end();++iter)
     {
         if(mxvotes < iter->getVotes())
         {
             mxvotes = iter->getVotes();
             winner = iter-> getPerson();
         }
     }
     return winner;
}
std::string ballot :: CandidateWithMinVotes(){
    std::list<voter> :: iterator iter=v.begin();
    int minvotes = iter->getVotes();
    std::string loser = iter-> getPerson();
    for(; iter!=v.end();++iter)
     {
         if(minvotes > iter->getVotes())
         {
             minvotes = iter->getVotes();
             loser = iter-> getPerson();
         }
     }
     return loser;
}
