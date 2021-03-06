/*
 * Copyright 2020, Intel Corporation
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License,
 * version 2 as published by the Free Software Foundation..
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

/* Generated by the protocol buffer compiler. DO NOT EDIT! */
/* Generated from: librpma_gpspm_flush.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "librpma_gpspm_flush.pb-c.h"
void   gpspm_flush_request__init
                     (GPSPMFlushRequest         *message)
{
  static const GPSPMFlushRequest init_value = GPSPM_FLUSH_REQUEST__INIT;
  *message = init_value;
}
size_t gpspm_flush_request__get_packed_size
                     (const GPSPMFlushRequest *message)
{
  assert(message->base.descriptor == &gpspm_flush_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t gpspm_flush_request__pack
                     (const GPSPMFlushRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &gpspm_flush_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t gpspm_flush_request__pack_to_buffer
                     (const GPSPMFlushRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &gpspm_flush_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
GPSPMFlushRequest *
       gpspm_flush_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (GPSPMFlushRequest *)
     protobuf_c_message_unpack (&gpspm_flush_request__descriptor,
                                allocator, len, data);
}
void   gpspm_flush_request__free_unpacked
                     (GPSPMFlushRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &gpspm_flush_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   gpspm_flush_response__init
                     (GPSPMFlushResponse         *message)
{
  static const GPSPMFlushResponse init_value = GPSPM_FLUSH_RESPONSE__INIT;
  *message = init_value;
}
size_t gpspm_flush_response__get_packed_size
                     (const GPSPMFlushResponse *message)
{
  assert(message->base.descriptor == &gpspm_flush_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t gpspm_flush_response__pack
                     (const GPSPMFlushResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &gpspm_flush_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t gpspm_flush_response__pack_to_buffer
                     (const GPSPMFlushResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &gpspm_flush_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
GPSPMFlushResponse *
       gpspm_flush_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (GPSPMFlushResponse *)
     protobuf_c_message_unpack (&gpspm_flush_response__descriptor,
                                allocator, len, data);
}
void   gpspm_flush_response__free_unpacked
                     (GPSPMFlushResponse *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &gpspm_flush_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor gpspm_flush_request__field_descriptors[3] =
{
  {
    "offset",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_FIXED64,
    0,   /* quantifier_offset */
    offsetof(GPSPMFlushRequest, offset),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "length",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_FIXED64,
    0,   /* quantifier_offset */
    offsetof(GPSPMFlushRequest, length),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "op_context",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_FIXED64,
    0,   /* quantifier_offset */
    offsetof(GPSPMFlushRequest, op_context),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned gpspm_flush_request__field_indices_by_name[] = {
  1,   /* field[1] = length */
  0,   /* field[0] = offset */
  2,   /* field[2] = op_context */
};
static const ProtobufCIntRange gpspm_flush_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor gpspm_flush_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "GPSPM_flush_request",
  "GPSPMFlushRequest",
  "GPSPMFlushRequest",
  "",
  sizeof(GPSPMFlushRequest),
  3,
  gpspm_flush_request__field_descriptors,
  gpspm_flush_request__field_indices_by_name,
  1,  gpspm_flush_request__number_ranges,
  (ProtobufCMessageInit) gpspm_flush_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor gpspm_flush_response__field_descriptors[1] =
{
  {
    "op_context",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_FIXED64,
    0,   /* quantifier_offset */
    offsetof(GPSPMFlushResponse, op_context),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned gpspm_flush_response__field_indices_by_name[] = {
  0,   /* field[0] = op_context */
};
static const ProtobufCIntRange gpspm_flush_response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor gpspm_flush_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "GPSPM_flush_response",
  "GPSPMFlushResponse",
  "GPSPMFlushResponse",
  "",
  sizeof(GPSPMFlushResponse),
  1,
  gpspm_flush_response__field_descriptors,
  gpspm_flush_response__field_indices_by_name,
  1,  gpspm_flush_response__number_ranges,
  (ProtobufCMessageInit) gpspm_flush_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
