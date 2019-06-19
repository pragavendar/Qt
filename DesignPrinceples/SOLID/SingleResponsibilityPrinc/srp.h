#ifndef SRP_H
#define SRP_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
struct Jurnal{
    string titile;
    vector<string> entries;
    Jurnal(string _title):titile(_title){}
    void addEntry(string entry){
        entries.push_back(entry);
    }
};

struct PersistnacceMgr{
    void perisst(Jurnal &j,string fileName){
        ofstream in(fileName);
        in << j.titile <<endl;
        for(auto entry: j.entries) {
            in << entry;
        }
        in.close();
    }
};

void testing(){
    Jurnal j("Diary");
    j.addEntry("Testing");
    j.addEntry("Sample");
    PersistnacceMgr mgr;
    mgr.perisst(j,"sample.txt");
}
#endif // SRP_H
