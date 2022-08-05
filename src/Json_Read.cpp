#include <string>
#include <fstream>
#include <iostream>
#include <map>
#include <vector>
#include <sstream>

#include "Json.h"
#include "Log.h"

using namespace std;

namespace jsonparser {
    void main_read()
    {
        log_debug("Read의 기능 테스트를 위한 main 함수입니다.");
        json read;
        read.ReadJson();
    }

    void json::ReadJson(){
        vector<string> words;
        string file = "result.json";
        ifstream openFile(file.data());
        stringstream sstream;
        string word;
        while(getline(openFile, word)){
            log_debug("{}",word);
        }

        // for(int i=0; i<word.size(); i++){
        //     log_debug("{}", word);
        // }
        // for(int i=0; i<words.size(); i++){
        //     log_debug("{}", word);
        // }

        // vector<string> words;
        // stringstream sstream(file.data());
        // string word;
        // while (getline(sstream, word, ' ')){
        //     words.push_back(word);
        // }
        // for(int i=0; i<word.size(); i++){
        //     log_debug("{}", word);
        // }
        openFile.close();
    }

    void get(string str)
    {
        string map_value;
    }
}