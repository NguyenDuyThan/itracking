/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.6 at Wed Jul 26 10:48:43 2017. */

#ifndef PB_ADDRESSBOOK_PB_H_INCLUDED
#define PB_ADDRESSBOOK_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _msgDataSend {
    char text1[128];
    char text2[128];
    int num1;
    int num2;
/* @@protoc_insertion_point(struct:msgDataSend) */
} msgDataSend;

/* Default values for struct fields */

/* Initializer values for message structs */
#define msgDataSend_init_default                 {"", "", 0, 0}
#define msgDataSend_init_zero                    {"", "", 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define msgDataSend_text1_tag                    1
#define msgDataSend_text2_tag                    2
#define msgDataSend_num1_tag                     3
#define msgDataSend_num2_tag                     4

/* Struct field encoding specification for nanopb */
extern const pb_field_t msgDataSend_fields[5];

/* Maximum encoded size of messages (where known) */
#define msgDataSend_size                         284

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define ADDRESSBOOK_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
