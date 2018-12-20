#include "supervisormgr.h"


ISupervisorStateContext& ISupervisorStateContext::getInstance()
{
    return singleton<SupervisorMgr>::instance();
}

bool SupervisorMgr::startup()
{
    cout<< "This funtion had was called!" << endl;
    return true;
}

SupervisorMgr::SupervisorMgr()
{
    init();
}

SupervisorMgr::~SupervisorMgr()
{

}


void SupervisorMgr::init()
{

}
