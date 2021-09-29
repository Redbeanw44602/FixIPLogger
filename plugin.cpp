#include "pch.h"

void entry() {
    std::cout << "[FixIPLogger] loaded!\n";
}

bool a_call = true;
THook(__int64, "?LogIPSupport@RakPeerHelper@@AEAAXXZ",
    void* _this)
{
    if (a_call)
    {
        a_call = false;
        return original(_this);
    }
    return 0;
}