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

    const string& json::GetSpace() const
    {
        return mstrSpace;
    }

    void json::SetFile(const string& _file)
    {
        mstrFile = _file;
    }

    void json::SetText(const string& _text)
    {
        mstrText = _text;
    }

    void json::SetSpace(const string& _space)
    {
        mstrSpace = _space;
    }
}