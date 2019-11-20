#include <open62541/types.h>
#define UA_TYPES_COUNT 186
#define UA_TRANSPORT_COUNT 12

#ifdef __cplusplus
UA_EXPORT UA_DataType UA_TYPES[UA_TYPES_COUNT];
UA_EXPORT UA_DataType UA_TRANSPORT[UA_TRANSPORT_COUNT];
#else
UA_EXPORT const UA_DataType UA_TYPES[UA_TYPES_COUNT];
UA_EXPORT const UA_DataType UA_TRANSPORT[UA_TRANSPORT_COUNT];
#endif

int __attribute__((weak)) gLowOPCUASend(void *data, unsigned char *buf, int size) {
  return 0;
}
