#pragma once

#include <string>

using namespace std;

namespace jsonparser {
    class json {
    public:
        json()
        : mstrFile("")
        , mstrText("")
        {}
        json(string _param)
        : mstrFile(_param)
        , mstrText("")
        {}

        // 데이터 멤버 mstrFile 값 반환.
        const string& GetFile() const;

        // 데이터 멤버 mstrText 값 반환.
        const string& GetText() const;

        // 데이터 멤버 mstrFile 값 설정.
        void SetFile(const string&);

        // 데이터 멤버 mstrText 값 설정.
        void SetText(const string&);

        void Serialize(int A);
        void Write();

    private:
        string mstrFile; // json 파일 경로를 갖는 데이터 멤버.
        string mstrText; // json 파일에 작성할 실제 내용을 갖는 데이터 멤버.
    };
}