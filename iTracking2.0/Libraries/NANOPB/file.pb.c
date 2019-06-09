/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.6 at Mon Mar 20 12:02:09 2017. */

#include "file.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t File_fields[9] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, File, deviceID, deviceID, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, File, unixtime, deviceID, 0),
    PB_FIELD(  3, FLOAT   , OPTIONAL, STATIC  , OTHER, File, latitude, unixtime, 0),
    PB_FIELD(  4, FLOAT   , OPTIONAL, STATIC  , OTHER, File, longitude, latitude, 0),
    PB_FIELD(  5, UINT32  , REQUIRED, STATIC  , OTHER, File, offset, longitude, 0),
    PB_FIELD(  6, BYTES   , REQUIRED, CALLBACK, OTHER, File, data, offset, 0),
    PB_FIELD(  7, BOOL    , REQUIRED, STATIC  , OTHER, File, finished, data, 0),
    PB_FIELD(  8, STRING  , REQUIRED, STATIC  , OTHER, File, contentType, finished, 0),
    PB_LAST_FIELD
};

const pb_field_t File_data1KB_fields[9] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, File_data1KB, deviceID, deviceID, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, File_data1KB, unixtime, deviceID, 0),
    PB_FIELD(  3, FLOAT   , OPTIONAL, STATIC  , OTHER, File_data1KB, latitude, unixtime, 0),
    PB_FIELD(  4, FLOAT   , OPTIONAL, STATIC  , OTHER, File_data1KB, longitude, latitude, 0),
    PB_FIELD(  5, UINT32  , REQUIRED, STATIC  , OTHER, File_data1KB, offset, longitude, 0),
    PB_FIELD(  6, BYTES   , REQUIRED, STATIC  , OTHER, File_data1KB, data, offset, 0),
    PB_FIELD(  7, BOOL    , REQUIRED, STATIC  , OTHER, File_data1KB, finished, data, 0),
    PB_FIELD(  8, STRING  , REQUIRED, STATIC  , OTHER, File_data1KB, contentType, finished, 0),
    PB_LAST_FIELD
};

const pb_field_t File_data4KB_fields[9] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, File_data4KB, deviceID, deviceID, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, File_data4KB, unixtime, deviceID, 0),
    PB_FIELD(  3, FLOAT   , OPTIONAL, STATIC  , OTHER, File_data4KB, latitude, unixtime, 0),
    PB_FIELD(  4, FLOAT   , OPTIONAL, STATIC  , OTHER, File_data4KB, longitude, latitude, 0),
    PB_FIELD(  5, UINT32  , REQUIRED, STATIC  , OTHER, File_data4KB, offset, longitude, 0),
    PB_FIELD(  6, BYTES   , REQUIRED, STATIC  , OTHER, File_data4KB, data, offset, 0),
    PB_FIELD(  7, BOOL    , REQUIRED, STATIC  , OTHER, File_data4KB, finished, data, 0),
    PB_FIELD(  8, STRING  , REQUIRED, STATIC  , OTHER, File_data4KB, contentType, finished, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
#error Field descriptor for File_data4KB.data is too large. Define PB_FIELD_16BIT to fix this.
#endif


/* @@protoc_insertion_point(eof) */
