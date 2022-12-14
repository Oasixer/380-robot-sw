/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.5 */

#ifndef PB_IMU_DATA_PB_H_INCLUDED
#define PB_IMU_DATA_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _ImuData { 
    float accelX; 
    float accelY; 
    float accelZ; 
    float magX; 
    float magY; 
    float magZ; 
    float gyroX; 
    float gyroY; 
    float gyroZ; 
} ImuData;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define ImuData_init_default                     {0, 0, 0, 0, 0, 0, 0, 0, 0}
#define ImuData_init_zero                        {0, 0, 0, 0, 0, 0, 0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define ImuData_accelX_tag                       1
#define ImuData_accelY_tag                       2
#define ImuData_accelZ_tag                       3
#define ImuData_magX_tag                         4
#define ImuData_magY_tag                         5
#define ImuData_magZ_tag                         6
#define ImuData_gyroX_tag                        7
#define ImuData_gyroY_tag                        8
#define ImuData_gyroZ_tag                        9

/* Struct field encoding specification for nanopb */
#define ImuData_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    accelX,            1) \
X(a, STATIC,   SINGULAR, FLOAT,    accelY,            2) \
X(a, STATIC,   SINGULAR, FLOAT,    accelZ,            3) \
X(a, STATIC,   SINGULAR, FLOAT,    magX,              4) \
X(a, STATIC,   SINGULAR, FLOAT,    magY,              5) \
X(a, STATIC,   SINGULAR, FLOAT,    magZ,              6) \
X(a, STATIC,   SINGULAR, FLOAT,    gyroX,             7) \
X(a, STATIC,   SINGULAR, FLOAT,    gyroY,             8) \
X(a, STATIC,   SINGULAR, FLOAT,    gyroZ,             9)
#define ImuData_CALLBACK NULL
#define ImuData_DEFAULT NULL

extern const pb_msgdesc_t ImuData_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define ImuData_fields &ImuData_msg

/* Maximum encoded size of messages (where known) */
#define ImuData_size                             45

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
