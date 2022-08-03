#include <fstream>
#include <string>

#include "Json.h"
#include "Log.h"

using namespace std;

namespace jsonparser {
    void json::AddText(const string& _text)
    {
        mstrText = mstrText + _text;
    }

    template <typename T>
    void json::Serialize(T _data, const string& _name)
    {
        string strData;
        strData = to_string(_data);
        
        string strText;
        strText = GetText();
        if (strText.front() == '\0') {
            strText = (string)"{\n    " + (string)"\"" + _name + (string)"\": " + strData + (string)"\n}";
            
        }
        else if (strText.back() == '}') {
            strText.pop_back();
            strText.pop_back();
            strText.push_back(',');
            strText = strText + (string)"\n    " + (string)"\"" + _name + (string)"\": " + strData + (string)"\n}";
        }
        SetText(strText);
    }

    void main_write()
    {
        // log_debug("Write의 기능 테스트를 위한 main 함수입니다.");

        int myInt = 10; 
        size_t mySize = 1;
        double myDouble = 3.3;

        json file;
        file.Serialize(myInt, "myInt");
        file.Serialize(mySize, "mySize");
        file.Serialize(myDouble, "myDouble");

        ofstream out("result.json");
        out << file.GetText();
        out.close();
    }
}