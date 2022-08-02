#include "Log.h"
#include "Json.h"

void Test()
{

}

int main()
{
    log::InitializeLogging();
    
    // log_debug("jsonparser launched in debug");

    Test();

    return 0;
}