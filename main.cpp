#include <iostream>
#include "singleton.h"
#include "isupervisorstatecontext.h"
#include "supervisormgr.h"

using namespace std;

int main(int argc, char *argv[])
{
    ISupervisorStateContext::getInstance().startup();

    return 0;
}
