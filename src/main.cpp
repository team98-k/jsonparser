#include "Log.h"
#include "Json.h"

int main()
{
    log::InitializeLogging();
    
    log_debug("jsonparser launched in debug");

    jsonparser::main_read();
    jsonparser::main_write();

    return 0;
}