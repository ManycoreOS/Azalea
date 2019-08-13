#ifndef __MULTIPROCESSOR_H__
#define __MULTIPROCESSOR_H__

#include "az_types.h"

#define MAX_PROCESSOR_COUNT		288	

BOOL startup_ap(void);
#if 0
QWORD get_apic_id(void);
#else
BYTE get_papic_id(void);
BYTE get_apic_id(void);
#endif

#endif  /* __MULTIPROCESSOR_H__ */
