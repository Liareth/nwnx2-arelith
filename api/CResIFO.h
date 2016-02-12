#ifndef _CRESIFO_H_
#define _CRESIFO_H_
#include "nwndef.h"

class CResIFO
{
public:
    ~CResIFO();

    uint32_t field0;
    CResGFF *gff;
    CResRef resRef;
    uint32_t mod_vtbl;
};
#endif
