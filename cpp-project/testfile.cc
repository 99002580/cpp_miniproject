#include "gtest/gtest.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <list>
#include "ballot.h"

namespace{
class BallotTest : public ::testing::Test {

protected:
  void SetUp(){

std::fstream fin;
fin.open("read.csv");
std::vector<std::string> row;

std::string line, word;

 while(!fin.eof()){
    row.clear();
    getline(fin,line);

    std::stringstream s(line);

    while(getline(s,word,','))
    {
        row.push_back(word);
    }

    int year;
    std::string state;
    std::string person;
    std::string party;
    int vts;
    int tvts;
   std::vector<std::string> str;
   std::vector<int> num;
   num.push_back(atoi(row[0].c_str()));
   for(int i=1; i<4 ;i++)
   {
       std::string s = row[i].c_str();
       str.push_back(s);

   }
   for(int i=4; i<6 ;i++)
   {
       int n = atoi(row[i].c_str());
       num.push_back(n);

   }
    year = num[0];
    state = str[1];
    person = str[2];
    party = str[2];
    vts = num[4];
    tvts = num[5];

    dummy.addVoter(year,state,person,party,vts,tvts);

    }

  }
  void TearDown() {}

  ballot dummy;

};



TEST_F(BallotTest,minimum_votes){
    EXPECT_EQ(0,dummy.MinVotesPolled());
}
}

