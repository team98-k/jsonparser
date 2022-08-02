#include <string>

#include "Json.h"
#include "Log.h"

namespace jsonparser {
    const string& json::GetFile() const
    {
        return mstrFile;
    }

    const string& json::GetText() const
    {
        return mstrText;
    }

    void json::SetFile(const string& _file)
    {
        mstrFile = _file;
    }

    void json::SetText(const string& _text)
    {
        mstrFile = _text;
    }
}