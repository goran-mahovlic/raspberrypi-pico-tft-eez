#include <eez/core/vars.h>

#include "flow_def.h"
#include "vars.h"

// ASSETS DEFINITION
const uint8_t assets[1282] = {
    0x7E, 0x65, 0x65, 0x7A, 0x03, 0x00, 0x06, 0x00, 0xB0, 0x0B, 0x00, 0x00, 0x6E, 0x24, 0x00, 0x00,
    0x00, 0x24, 0x00, 0x01, 0x00, 0x17, 0x20, 0x0C, 0x00, 0x53, 0x80, 0x00, 0xA0, 0x00, 0x01, 0x28,
    0x00, 0x13, 0x01, 0x1C, 0x00, 0xE6, 0x02, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x0A, 0x00,
    0x00, 0x00, 0x90, 0x0A, 0x2C, 0x00, 0x13, 0x10, 0x08, 0x00, 0x93, 0x14, 0x00, 0x00, 0x00, 0x38,
    0x00, 0x00, 0x00, 0x5C, 0x2C, 0x00, 0x00, 0x08, 0x00, 0x53, 0x12, 0x00, 0x00, 0x00, 0x58, 0x10,
    0x00, 0xAE, 0x98, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x7C, 0x0A, 0x7C, 0x00, 0x11, 0x0C,
    0x74, 0x00, 0x02, 0x28, 0x00, 0x9F, 0xA8, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x60, 0x28,
    0x00, 0x00, 0xF0, 0x0E, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6C, 0x74, 0x00, 0xFF, 0xFF, 0x08, 0x42,
    0x88, 0x00, 0x00, 0x00, 0xA4, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0xDC, 0x00, 0x00, 0x00,
    0xF8, 0x84, 0x00, 0xF6, 0x66, 0x01, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00, 0x4C, 0x01, 0x00, 0x00,
    0x70, 0x01, 0x00, 0x00, 0x94, 0x01, 0x00, 0x00, 0xB0, 0x01, 0x00, 0x00, 0xD4, 0x01, 0x00, 0x00,
    0xF0, 0x01, 0x00, 0x00, 0x0C, 0x02, 0x00, 0x00, 0x30, 0x02, 0x00, 0x00, 0x4C, 0x02, 0x00, 0x00,
    0x68, 0x02, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0xA8, 0x02, 0x00, 0x00, 0xB4, 0x02, 0x00, 0x00,
    0xC0, 0x02, 0x00, 0x00, 0xDC, 0x02, 0x00, 0x00, 0xF8, 0x02, 0x00, 0x00, 0x1C, 0x03, 0x00, 0x00,
    0x40, 0x03, 0x00, 0x00, 0x5C, 0x03, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 0x9C, 0x03, 0x00, 0x00,
    0xB8, 0x03, 0x00, 0x00, 0xDC, 0x03, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0x14, 0x04, 0x00, 0x00,
    0x30, 0x04, 0x00, 0x00, 0x3C, 0x04, 0x00, 0x00, 0x10, 0x27, 0xA0, 0x00, 0x00, 0xC0, 0x00, 0x22,
    0x38, 0x04, 0x34, 0x01, 0x00, 0x08, 0x00, 0x5B, 0xFF, 0xFF, 0x00, 0x00, 0x11, 0x20, 0x00, 0x13,
    0x24, 0x20, 0x00, 0x13, 0x24, 0x20, 0x00, 0x0C, 0x40, 0x00, 0x13, 0x10, 0x20, 0x00, 0x13, 0x10,
    0x20, 0x00, 0x1B, 0x12, 0x20, 0x00, 0x22, 0xFC, 0x03, 0x20, 0x00, 0x00, 0x08, 0x00, 0x0F, 0x20,
    0x00, 0x01, 0x13, 0xE8, 0x20, 0x00, 0x1F, 0xE8, 0x20, 0x00, 0x04, 0x13, 0xD4, 0x20, 0x00, 0x1F,
    0xD4, 0x20, 0x00, 0x04, 0x13, 0xC0, 0x20, 0x00, 0x13, 0xC0, 0x20, 0x00, 0x2E, 0xEF, 0x03, 0x88,
    0x01, 0x00, 0x20, 0x00, 0x13, 0xA4, 0x20, 0x00, 0x22, 0x01, 0x00, 0x20, 0x01, 0x0F, 0x28, 0x00,
    0x05, 0x17, 0x84, 0x28, 0x00, 0x5F, 0x7C, 0x03, 0x00, 0x00, 0xE9, 0x28, 0x00, 0x04, 0x13, 0x64,
    0x28, 0x00, 0x13, 0x06, 0x00, 0x01, 0x2A, 0x58, 0x03, 0x20, 0x00, 0x17, 0x4C, 0x48, 0x00, 0x62,
    0x44, 0x03, 0x00, 0x00, 0xFA, 0x03, 0xB0, 0x00, 0x50, 0x3C, 0x03, 0x00, 0x00, 0x04, 0x70, 0x01,
    0x03, 0x10, 0x00, 0x13, 0x40, 0x28, 0x00, 0x13, 0xF6, 0xC8, 0x00, 0x13, 0x38, 0x08, 0x00, 0x13,
    0x34, 0x08, 0x00, 0x1B, 0x30, 0x68, 0x00, 0x1B, 0x24, 0x68, 0x00, 0x17, 0x18, 0x68, 0x00, 0x53,
    0x10, 0x03, 0x00, 0x00, 0xF2, 0x38, 0x00, 0x13, 0x08, 0x08, 0x00, 0x41, 0x04, 0x03, 0x00, 0x00,
    0x33, 0x00, 0x0B, 0x68, 0x00, 0x22, 0xFC, 0x02, 0x08, 0x00, 0x13, 0xF8, 0x08, 0x00, 0x2A, 0xF4,
    0x02, 0x20, 0x00, 0x13, 0xE8, 0x18, 0x00, 0x13, 0xE4, 0x08, 0x00, 0x2A, 0xE0, 0x02, 0x88, 0x00,
    0x2A, 0xD4, 0x02, 0x88, 0x00, 0x26, 0xC8, 0x02, 0x88, 0x00, 0x00, 0x9C, 0x02, 0x1B, 0x07, 0x34,
    0x01, 0x0C, 0x10, 0x00, 0x0C, 0xC8, 0x01, 0x13, 0x90, 0x68, 0x00, 0x2F, 0x90, 0x02, 0x88, 0x02,
    0x03, 0x13, 0x7C, 0x20, 0x00, 0x2F, 0x7C, 0x02, 0xE8, 0x01, 0x0B, 0x17, 0x60, 0x88, 0x00, 0x2F,
    0x58, 0x02, 0x28, 0x00, 0x07, 0x17, 0x40, 0x28, 0x00, 0x2F, 0x38, 0x02, 0xE8, 0x01, 0x07, 0x1B,
    0x20, 0xF8, 0x00, 0x1B, 0x14, 0xF8, 0x00, 0x17, 0x08, 0x48, 0x00, 0x26, 0x00, 0x02, 0xE8, 0x01,
    0x22, 0xF8, 0x01, 0xE8, 0x01, 0x23, 0xF4, 0x01, 0x08, 0x03, 0x1A, 0x01, 0x60, 0x01, 0x22, 0xF4,
    0x01, 0x08, 0x00, 0x13, 0xF0, 0x08, 0x00, 0x2A, 0xEC, 0x01, 0x68, 0x00, 0x2A, 0xE0, 0x01, 0x68,
    0x00, 0x26, 0xD4, 0x01, 0x68, 0x00, 0x26, 0xCC, 0x01, 0xE8, 0x01, 0x13, 0xC4, 0x40, 0x00, 0x22,
    0xC0, 0x01, 0xE8, 0x01, 0x1B, 0xBC, 0x68, 0x00, 0x13, 0xB8, 0x20, 0x00, 0x13, 0xB4, 0x08, 0x00,
    0x1B, 0xB0, 0x20, 0x00, 0x13, 0xA4, 0x18, 0x00, 0x13, 0xA0, 0x08, 0x00, 0x13, 0x9C, 0x20, 0x00,
    0x0F, 0xC0, 0x01, 0x0D, 0x26, 0x78, 0x01, 0x04, 0x00, 0x17, 0x80, 0x04, 0x00, 0x17, 0x88, 0x04,
    0x00, 0x17, 0x90, 0x04, 0x00, 0x17, 0x98, 0x04, 0x00, 0x17, 0xA0, 0x04, 0x00, 0x17, 0xA8, 0x04,
    0x00, 0x22, 0xB0, 0x01, 0xB0, 0x00, 0x22, 0xBC, 0x01, 0xD8, 0x00, 0x13, 0xC8, 0x3C, 0x01, 0x13,
    0xCC, 0x14, 0x05, 0x7D, 0x04, 0x00, 0x05, 0x00, 0xE4, 0x01, 0x00, 0x04, 0x00, 0x13, 0xEC, 0xFC,
    0x00, 0x13, 0xF0, 0x38, 0x05, 0x13, 0x06, 0x60, 0x01, 0x13, 0xFC, 0x44, 0x01, 0x22, 0x18, 0x02,
    0x04, 0x00, 0x00, 0xCC, 0x01, 0x13, 0x28, 0x9C, 0x02, 0x22, 0x2C, 0x02, 0x04, 0x00, 0x00, 0x54,
    0x02, 0x13, 0x30, 0x68, 0x05, 0x00, 0xC8, 0x05, 0x53, 0x34, 0x02, 0x00, 0x00, 0x3C, 0x74, 0x05,
    0x04, 0x04, 0x00, 0x17, 0x54, 0x04, 0x00, 0x53, 0x5C, 0x02, 0x00, 0x00, 0x64, 0x90, 0x05, 0x62,
    0x70, 0x02, 0x00, 0x00, 0x74, 0x02, 0xA4, 0x00, 0x62, 0x78, 0x02, 0x00, 0x00, 0x80, 0x02, 0xA4,
    0x00, 0x00, 0xC4, 0x02, 0x0C, 0x04, 0x00, 0x22, 0x98, 0x02, 0xA4, 0x00, 0x22, 0x9C, 0x02, 0x04,
    0x00, 0x00, 0xA4, 0x00, 0x13, 0xA0, 0xD0, 0x05, 0x00, 0x01, 0x00, 0x22, 0xC4, 0x02, 0x04, 0x00,
    0x22, 0xCC, 0x02, 0x5C, 0x03, 0x00, 0xA4, 0x00, 0x22, 0xD8, 0x02, 0x04, 0x00, 0x00, 0xA4, 0x00,
    0x13, 0xDC, 0xF0, 0x05, 0x23, 0x00, 0xE0, 0x04, 0x00, 0x08, 0x8D, 0x01, 0x0F, 0x14, 0x00, 0x65,
    0x08, 0xF0, 0x04, 0x03, 0x2C, 0x01, 0x08, 0x1C, 0x03, 0x22, 0x44, 0x02, 0x04, 0x00, 0x13, 0x02,
    0x0C, 0x00, 0x17, 0x01, 0x7C, 0x03, 0x13, 0x01, 0xD8, 0x03, 0x00, 0x04, 0x00, 0x13, 0x0D, 0x84,
    0x01, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x00, 0xC3, 0x40, 0x00, 0xE0, 0x03, 0x00, 0x00, 0xE0,
    0x04, 0x00, 0x00, 0xE0, 0x05, 0x0B, 0x03, 0x17, 0x14, 0x40, 0x00, 0x13, 0x0C, 0x68, 0x00, 0x14,
    0x06, 0x27, 0x03, 0x07, 0x1C, 0x00, 0x26, 0xF8, 0x01, 0x0C, 0x00, 0x12, 0x02, 0x24, 0x00, 0x02,
    0xF8, 0x07, 0x12, 0x0E, 0x08, 0x00, 0x29, 0xE8, 0x03, 0xD4, 0x02, 0x18, 0xE0, 0xB0, 0x00, 0x13,
    0x01, 0x40, 0x03, 0x26, 0x00, 0x00, 0x34, 0x03, 0x12, 0x00, 0xE0, 0x07, 0x01, 0x68, 0x00, 0x13,
    0xA8, 0x5C, 0x00, 0x13, 0x09, 0x10, 0x00, 0x13, 0x9C, 0x10, 0x00, 0x08, 0x08, 0x01, 0x04, 0xB0,
    0x04, 0x00, 0x3C, 0x08, 0x1F, 0xC8, 0x50, 0x01, 0x28, 0x22, 0x44, 0x01, 0x04, 0x00, 0x08, 0x04,
    0x04, 0x22, 0x3C, 0x01, 0x04, 0x00, 0x13, 0x02, 0x0C, 0x00, 0x04, 0xE8, 0x00, 0x2E, 0x38, 0x01,
    0x50, 0x01, 0x2F, 0x28, 0x01, 0x50, 0x01, 0x0B, 0x17, 0x0C, 0x40, 0x00, 0x2A, 0x04, 0x01, 0x50,
    0x01, 0x17, 0xF8, 0x10, 0x01, 0x2F, 0xF0, 0x00, 0x50, 0x01, 0x2B, 0x17, 0xB4, 0x10, 0x00, 0x2A,
    0xAC, 0x00, 0x50, 0x01, 0x26, 0xA0, 0x00, 0x50, 0x01, 0x09, 0x44, 0x01, 0x31, 0x40, 0x00, 0xE0,
    0x25, 0x02, 0x34, 0xC0, 0x00, 0xE0, 0x0C, 0x00, 0x84, 0x01, 0xC0, 0x00, 0xE0, 0x74, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0xD4, 0x00, 0x4F, 0x70, 0x00, 0x00, 0x00, 0x04, 0x00, 0x09, 0x0F, 0x48,
    0x00, 0x05, 0x00, 0xE4, 0x09, 0x04, 0x04, 0x00, 0x00, 0x48, 0x00, 0x4F, 0x54, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x05, 0x11, 0x0E, 0x34, 0x0A, 0xF1, 0x06, 0x01, 0x00, 0x0C, 0x00, 0x03, 0x00, 0x0A,
    0x00, 0x02, 0x00, 0x0B, 0x00, 0x04, 0x00, 0x0B, 0x00, 0x05, 0x00, 0x0F, 0x00, 0x07, 0x0C, 0x00,
    0x31, 0x0D, 0x00, 0x06, 0x04, 0x00, 0x31, 0x11, 0x00, 0x08, 0xF4, 0x01, 0xF1, 0x08, 0x0B, 0x00,
    0x01, 0x00, 0x07, 0x00, 0x03, 0x00, 0x05, 0x00, 0x02, 0x00, 0x06, 0x00, 0x04, 0x00, 0x06, 0x00,
    0x05, 0x00, 0x0A, 0x00, 0x07, 0x0C, 0x00, 0x31, 0x08, 0x00, 0x06, 0x04, 0x00, 0x53, 0x3C, 0x00,
    0x00, 0x00, 0x48, 0x60, 0x00, 0x50, 0x60, 0x00, 0x00, 0x00, 0x6C, 0x40, 0x04, 0x00, 0x7C, 0x08,
    0x00, 0x00, 0x07, 0x00, 0x58, 0x02, 0x03, 0x58, 0x0A, 0x97, 0x03, 0x01, 0x03, 0x01, 0x01, 0x01,
    0x03, 0x01, 0x03, 0x0C, 0x00, 0x0E, 0x2C, 0x02, 0x0F, 0xA8, 0x05, 0x03, 0x04, 0x18, 0x00, 0x0F,
    0xC8, 0x05, 0x05, 0x2A, 0x10, 0x0E, 0x10, 0x00, 0x1B, 0x46, 0x20, 0x00, 0x17, 0x32, 0xCC, 0x02,
    0x0F, 0x40, 0x00, 0x01, 0x2A, 0xB8, 0x0B, 0x10, 0x00, 0x80, 0x88, 0x13, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00
};

native_var_t native_vars[] = {
    { NATIVE_VAR_TYPE_NONE, 0, 0 },
};

