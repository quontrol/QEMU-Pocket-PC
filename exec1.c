#include "qemu-common.h"
#include "host-utils.h"
#include "exec-all.h"

#if !defined(CONFIG_USER_ONLY)

#define MMUSUFFIX _cmmu
#define GETPC() NULL
#undef env
#define env cpu_single_env
#define SOFTMMU_CODE_ACCESS

#define SHIFT 0
#include "softmmu_template.h"

#define SHIFT 1
#include "softmmu_template.h"

#define SHIFT 2
#include "softmmu_template.h"

#define SHIFT 3
#include "softmmu_template.h"

#undef env

#endif
