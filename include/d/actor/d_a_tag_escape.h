#ifndef D_A_TAG_ESCAPE_H
#define D_A_TAG_ESCAPE_H

#include "f_op/f_op_actor_mng.h"

class daTagEscape_c : public fopAc_ac_c {
public:
    daTagEscape_c() {}
    ~daTagEscape_c() {}
    
    int getPathID() { return fopAcM_GetParam(this) & 0xff; }
};

#endif /* D_A_TAG_ESCAPE_H */
