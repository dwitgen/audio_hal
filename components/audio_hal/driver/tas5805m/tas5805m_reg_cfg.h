/*
 * ESPRESSIF MIT License
 *
 * Copyright (c) 2020 <ESPRESSIF SYSTEMS (SHANGHAI) CO., LTD>
 *
 * Permission is hereby granted for use on all ESPRESSIF SYSTEMS products, in which case,
 * it is free of charge, to any person obtaining a copy of this software and associated
 * documentation files (the "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the Software is furnished
 * to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef _TAS5805M_REG_CFG_
#define _TAS5805M_REG_CFG_

#ifdef __cplusplus
extern "C" {
#endif

#define CFG_META_SWITCH (255)
#define CFG_META_DELAY  (254)
#define CFG_META_BURST  (253)
#define CFG_END_1       (0Xaa)
#define CFG_END_2       (0Xcc)
#define CFG_END_3       (0Xee)

typedef struct {
    uint8_t offset;
    uint8_t value;
} tas5805m_cfg_reg_t;

static const uint8_t tas5805m_volume[] = {
    0xff, 0x9f, 0x8f, 0x7f, 0x6f, 0x5f, 0x5c, 0x5a,
    0x58, 0x54, 0x50, 0x4c, 0x4a, 0x48, 0x44, 0x40,
    0x3d, 0x3b, 0x39, 0x37, 0x35
};

static const tas5805m_cfg_reg_t tas5805m_registers[] = {
    //RESET
    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x03, 0x02 },
    { 0x01, 0x11 },
    { 0x00, 0x00 },
    { 0x00, 0x00 },
    { 0x00, 0x00 },
    { 0x00, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x03, 0x02 },
    { CFG_META_DELAY, 5 },
    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x03, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x46, 0x11 },

    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x03, 0x02 },
    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x78, 0x80 },

    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x61, 0x0b },
    { 0x60, 0x01 },
    { 0x7d, 0x11 },
    { 0x7e, 0xff },
    { 0x00, 0x01 },
    { 0x51, 0x05 },


    { 0x00, 0x00 },
#if CONFIG_ESP32_KORVO_DU1906_BOARD
    { 0x02, 0x10 },
#else
    { 0x02, 0x14 },
#endif
    { 0x53, 0x00 },
    { 0x54, 0x13 },
    { 0x00, 0x00 },
    { 0x00, 0x00 },
    { 0x00, 0x00 },
    { 0x00, 0x00 },

    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x66, 0x86 },
    { 0x7f, 0x8c },
    { 0x00, 0x29 },
    { 0x18, 0x00 },
    { 0x19, 0x40 },
    { 0x1a, 0x26 },
    { 0x1b, 0xe7 },
    { 0x1c, 0x00 },
    { 0x1d, 0x40 },
    { 0x1e, 0x26 },
    { 0x1f, 0xe7 },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x00, 0x2a },
    { 0x24, 0x00 },
    { 0x25, 0x65 },
    { 0x26, 0xac },
    { 0x27, 0x8c },
    { 0x28, 0x00 },
    { 0x29, 0x65 },
    { 0x2a, 0xac },
    { 0x2b, 0x8c },
    { 0x30, 0x00 },
    { 0x31, 0xe2 },
    { 0x32, 0xc4 },
    { 0x33, 0x6b },
    { 0x00, 0x2c },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x80 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x00 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x1c, 0x00 },
    { 0x1d, 0x80 },
    { 0x1e, 0x00 },
    { 0x1f, 0x00 },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x80 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x00 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x34, 0x00 },
    { 0x35, 0x80 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x48, 0x00 },
    { 0x49, 0x80 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0xae },
    { 0x5f, 0xc3 },
    { 0x60, 0x00 },
    { 0x61, 0x45 },
    { 0x62, 0xa1 },
    { 0x63, 0xcb },
    { 0x64, 0x04 },
    { 0x65, 0x0c },
    { 0x66, 0x37 },
    { 0x67, 0x14 },
    { 0x68, 0xc0 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x6c, 0x04 },
    { 0x6d, 0xc1 },
    { 0x6e, 0xff },
    { 0x6f, 0x93 },
    { 0x74, 0x00 },
    { 0x75, 0x80 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x00, 0x2d },
    { 0x18, 0x7b },
    { 0x19, 0x3e },
    { 0x1a, 0x00 },
    { 0x1b, 0x6d },
    { 0x1c, 0x00 },
    { 0x1d, 0x00 },
    { 0x1e, 0xae },
    { 0x1f, 0xc3 },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x00 },
    { 0x2d, 0x80 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x00, 0x2e },
    { 0x24, 0x20 },
    { 0x25, 0x29 },
    { 0x26, 0x00 },
    { 0x27, 0x94 },
    { 0x00, 0x31 },
    { 0x48, 0x40 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x00 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x58, 0x00 },
    { 0x59, 0x00 },
    { 0x5a, 0x00 },
    { 0x5b, 0x00 },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x00 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x6c, 0x00 },
    { 0x6d, 0x00 },
    { 0x6e, 0x00 },
    { 0x6f, 0x00 },
    { 0x70, 0x00 },
    { 0x71, 0x00 },
    { 0x72, 0x00 },
    { 0x73, 0x00 },
    { 0x74, 0x00 },
    { 0x75, 0x00 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x00 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x32 },
    { 0x08, 0x00 },
    { 0x09, 0x00 },
    { 0x0a, 0x00 },
    { 0x0b, 0x00 },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x00 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x1c, 0x00 },
    { 0x1d, 0x00 },
    { 0x1e, 0x00 },
    { 0x1f, 0x00 },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x00 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x30, 0x00 },
    { 0x31, 0x00 },
    { 0x32, 0x00 },
    { 0x33, 0x00 },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x44, 0x00 },
    { 0x45, 0x00 },
    { 0x46, 0x00 },
    { 0x47, 0x00 },
    { 0x48, 0x00 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x00 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x58, 0x00 },
    { 0x59, 0x00 },
    { 0x5a, 0x00 },
    { 0x5b, 0x00 },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x00 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x6c, 0x00 },
    { 0x6d, 0x00 },
    { 0x6e, 0x00 },
    { 0x6f, 0x00 },
    { 0x70, 0x00 },
    { 0x71, 0x00 },
    { 0x72, 0x00 },
    { 0x73, 0x00 },
    { 0x74, 0x00 },
    { 0x75, 0x00 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x00 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x33 },
    { 0x08, 0x00 },
    { 0x09, 0x00 },
    { 0x0a, 0x00 },
    { 0x0b, 0x00 },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x00 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x1c, 0x00 },
    { 0x1d, 0x00 },
    { 0x1e, 0x00 },
    { 0x1f, 0x00 },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x00 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x30, 0x00 },
    { 0x31, 0x00 },
    { 0x32, 0x00 },
    { 0x33, 0x00 },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x44, 0x00 },
    { 0x45, 0x00 },
    { 0x46, 0x00 },
    { 0x47, 0x00 },
    { 0x48, 0x00 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x00 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x58, 0x00 },
    { 0x59, 0x00 },
    { 0x5a, 0x00 },
    { 0x5b, 0x00 },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x00 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x6c, 0x00 },
    { 0x6d, 0x00 },
    { 0x6e, 0x00 },
    { 0x6f, 0x00 },
    { 0x70, 0x00 },
    { 0x71, 0x00 },
    { 0x72, 0x00 },
    { 0x73, 0x00 },
    { 0x74, 0x00 },
    { 0x75, 0x00 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x00 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x34 },
    { 0x08, 0x00 },
    { 0x09, 0x00 },
    { 0x0a, 0x00 },
    { 0x0b, 0x00 },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x00 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x1c, 0x00 },
    { 0x1d, 0x00 },
    { 0x1e, 0x00 },
    { 0x1f, 0x00 },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x00 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x30, 0x00 },
    { 0x31, 0x00 },
    { 0x32, 0x00 },
    { 0x33, 0x00 },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x44, 0x00 },
    { 0x45, 0x00 },
    { 0x46, 0x00 },
    { 0x47, 0x00 },
    { 0x48, 0x00 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x00 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x58, 0x00 },
    { 0x59, 0x00 },
    { 0x5a, 0x00 },
    { 0x5b, 0x00 },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x00 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x6c, 0x00 },
    { 0x6d, 0x00 },
    { 0x6e, 0x00 },
    { 0x6f, 0x00 },
    { 0x70, 0x00 },
    { 0x71, 0x00 },
    { 0x72, 0x00 },
    { 0x73, 0x00 },
    { 0x74, 0x00 },
    { 0x75, 0x00 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x00 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x35 },
    { 0x08, 0x00 },
    { 0x09, 0x00 },
    { 0x0a, 0x00 },
    { 0x0b, 0x00 },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x00 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x1c, 0x00 },
    { 0x1d, 0x00 },
    { 0x1e, 0x00 },
    { 0x1f, 0x00 },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x00 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x30, 0x00 },
    { 0x31, 0x00 },
    { 0x32, 0x00 },
    { 0x33, 0x00 },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x44, 0x00 },
    { 0x45, 0x00 },
    { 0x46, 0x00 },
    { 0x47, 0x00 },
    { 0x48, 0x00 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x00 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x58, 0x00 },
    { 0x59, 0x00 },
    { 0x5a, 0x00 },
    { 0x5b, 0x00 },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0xaa },
    { 0x00, 0x24 },
    { 0x18, 0x07 },
    { 0x19, 0xf0 },
    { 0x1a, 0xe4 },
    { 0x1b, 0x16 },
    { 0x1c, 0xf0 },
    { 0x1d, 0x1e },
    { 0x1e, 0x37 },
    { 0x1f, 0xd3 },
    { 0x20, 0x07 },
    { 0x21, 0xf0 },
    { 0x22, 0xe4 },
    { 0x23, 0x16 },
    { 0x24, 0x0f },
    { 0x25, 0xe1 },
    { 0x26, 0xab },
    { 0x27, 0xa4 },
    { 0x28, 0xf8 },
    { 0x29, 0x1e },
    { 0x2a, 0x1b },
    { 0x2b, 0x4a },
    { 0x2c, 0x07 },
    { 0x2d, 0xf2 },
    { 0x2e, 0xc6 },
    { 0x2f, 0x03 },
    { 0x30, 0xf0 },
    { 0x31, 0x1a },
    { 0x32, 0x73 },
    { 0x33, 0xfa },
    { 0x34, 0x07 },
    { 0x35, 0xf2 },
    { 0x36, 0xc6 },
    { 0x37, 0x03 },
    { 0x38, 0x0f },
    { 0x39, 0xe5 },
    { 0x3a, 0x76 },
    { 0x3b, 0x28 },
    { 0x3c, 0xf8 },
    { 0x3d, 0x1a },
    { 0x3e, 0x5e },
    { 0x3f, 0x1c },
    { 0x40, 0x08 },
    { 0x41, 0x28 },
    { 0x42, 0x01 },
    { 0x43, 0xe1 },
    { 0x44, 0xf0 },
    { 0x45, 0x35 },
    { 0x46, 0x45 },
    { 0x47, 0x27 },
    { 0x48, 0x07 },
    { 0x49, 0xa3 },
    { 0x4a, 0x11 },
    { 0x4b, 0xa4 },
    { 0x4c, 0x0f },
    { 0x4d, 0xca },
    { 0x4e, 0xba },
    { 0x4f, 0xd9 },
    { 0x50, 0xf8 },
    { 0x51, 0x34 },
    { 0x52, 0xec },
    { 0x53, 0x7b },
    { 0x54, 0x07 },
    { 0x55, 0xfd },
    { 0x56, 0x56 },
    { 0x57, 0xbd },
    { 0x58, 0xf0 },
    { 0x59, 0x0d },
    { 0x5a, 0x69 },
    { 0x5b, 0xed },
    { 0x5c, 0x07 },
    { 0x5d, 0xf7 },
    { 0x5e, 0xfd },
    { 0x5f, 0xbb },
    { 0x60, 0x0f },
    { 0x61, 0xf2 },
    { 0x62, 0x96 },
    { 0x63, 0x13 },
    { 0x64, 0xf8 },
    { 0x65, 0x0a },
    { 0x66, 0xab },
    { 0x67, 0x87 },
    { 0x68, 0x07 },
    { 0x69, 0xe1 },
    { 0x6a, 0xc2 },
    { 0x6b, 0x69 },
    { 0x6c, 0xf0 },
    { 0x6d, 0xac },
    { 0x6e, 0x0d },
    { 0x6f, 0x58 },
    { 0x70, 0x07 },
    { 0x71, 0x94 },
    { 0x72, 0x0c },
    { 0x73, 0x4d },
    { 0x74, 0x0f },
    { 0x75, 0x53 },
    { 0x76, 0xf2 },
    { 0x77, 0xa8 },
    { 0x78, 0xf8 },
    { 0x79, 0x8a },
    { 0x7a, 0x31 },
    { 0x7b, 0x49 },
    { 0x7c, 0x08 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x25 },
    { 0x08, 0x00 },
    { 0x09, 0x00 },
    { 0x0a, 0x00 },
    { 0x0b, 0x00 },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x08 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x1c, 0xf1 },
    { 0x1d, 0x79 },
    { 0x1e, 0xcb },
    { 0x1f, 0xec },
    { 0x20, 0x06 },
    { 0x21, 0xa6 },
    { 0x22, 0x49 },
    { 0x23, 0xa5 },
    { 0x24, 0x0e },
    { 0x25, 0x86 },
    { 0x26, 0x34 },
    { 0x27, 0x14 },
    { 0x28, 0xf9 },
    { 0x29, 0x59 },
    { 0x2a, 0xb6 },
    { 0x2b, 0x5b },
    { 0x2c, 0x09 },
    { 0x2d, 0x63 },
    { 0x2e, 0x61 },
    { 0x2f, 0x75 },
    { 0x30, 0xf8 },
    { 0x31, 0x28 },
    { 0x32, 0x33 },
    { 0x33, 0x32 },
    { 0x34, 0x02 },
    { 0x35, 0xcb },
    { 0x36, 0xa2 },
    { 0x37, 0x07 },
    { 0x38, 0x05 },
    { 0x39, 0xc8 },
    { 0x3a, 0x94 },
    { 0x3b, 0x61 },
    { 0x3c, 0xfd },
    { 0x3d, 0xe0 },
    { 0x3e, 0x34 },
    { 0x3f, 0xf0 },
    { 0x40, 0x08 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x44, 0xf1 },
    { 0x45, 0x79 },
    { 0x46, 0xcb },
    { 0x47, 0xec },
    { 0x48, 0x06 },
    { 0x49, 0xa6 },
    { 0x4a, 0x49 },
    { 0x4b, 0xa5 },
    { 0x4c, 0x0e },
    { 0x4d, 0x86 },
    { 0x4e, 0x34 },
    { 0x4f, 0x14 },
    { 0x50, 0xf9 },
    { 0x51, 0x59 },
    { 0x52, 0xb6 },
    { 0x53, 0x5b },
    { 0x54, 0x07 },
    { 0x55, 0xd8 },
    { 0x56, 0xc2 },
    { 0x57, 0x5c },
    { 0x58, 0xf1 },
    { 0x59, 0x09 },
    { 0x5a, 0x84 },
    { 0x5b, 0x20 },
    { 0x5c, 0x07 },
    { 0x5d, 0xa4 },
    { 0x5e, 0xd9 },
    { 0x5f, 0x7a },
    { 0x60, 0x0e },
    { 0x61, 0xf6 },
    { 0x62, 0x7b },
    { 0x63, 0xe0 },
    { 0x64, 0xf8 },
    { 0x65, 0x82 },
    { 0x66, 0x64 },
    { 0x67, 0x2a },
    { 0x68, 0x07 },
    { 0x69, 0xc6 },
    { 0x6a, 0x16 },
    { 0x6b, 0x0b },
    { 0x6c, 0xf3 },
    { 0x6d, 0x04 },
    { 0x6e, 0x30 },
    { 0x6f, 0xd8 },
    { 0x70, 0x07 },
    { 0x71, 0x00 },
    { 0x72, 0x0d },
    { 0x73, 0xc1 },
    { 0x74, 0x0c },
    { 0x75, 0xfb },
    { 0x76, 0xcf },
    { 0x77, 0x28 },
    { 0x78, 0xf9 },
    { 0x79, 0x39 },
    { 0x7a, 0xdc },
    { 0x7b, 0x34 },
    { 0x7c, 0x07 },
    { 0x7d, 0xfc },
    { 0x7e, 0x8e },
    { 0x7f, 0xc5 },
    { 0x00, 0x26 },
    { 0x08, 0xf0 },
    { 0x09, 0x91 },
    { 0x0a, 0xb8 },
    { 0x0b, 0xc2 },
    { 0x0c, 0x07 },
    { 0x0d, 0xe1 },
    { 0x0e, 0xf7 },
    { 0x0f, 0xf1 },
    { 0x10, 0x0f },
    { 0x11, 0x6e },
    { 0x12, 0x47 },
    { 0x13, 0x3e },
    { 0x14, 0xf8 },
    { 0x15, 0x21 },
    { 0x16, 0x79 },
    { 0x17, 0x4a },
    { 0x18, 0x08 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x1c, 0x00 },
    { 0x1d, 0x00 },
    { 0x1e, 0x00 },
    { 0x1f, 0x00 },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x08 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x30, 0x00 },
    { 0x31, 0x00 },
    { 0x32, 0x00 },
    { 0x33, 0x00 },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x08 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x44, 0x00 },
    { 0x45, 0x00 },
    { 0x46, 0x00 },
    { 0x47, 0x00 },
    { 0x48, 0x00 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x08 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x58, 0x00 },
    { 0x59, 0x00 },
    { 0x5a, 0x00 },
    { 0x5b, 0x00 },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x08 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x6c, 0x00 },
    { 0x6d, 0x00 },
    { 0x6e, 0x00 },
    { 0x6f, 0x00 },
    { 0x70, 0x00 },
    { 0x71, 0x00 },
    { 0x72, 0x00 },
    { 0x73, 0x00 },
    { 0x74, 0x00 },
    { 0x75, 0x00 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x08 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x27 },
    { 0x08, 0x00 },
    { 0x09, 0x00 },
    { 0x0a, 0x00 },
    { 0x0b, 0x00 },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x08 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x1c, 0x00 },
    { 0x1d, 0x00 },
    { 0x1e, 0x00 },
    { 0x1f, 0x00 },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x08 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x30, 0x00 },
    { 0x31, 0x00 },
    { 0x32, 0x00 },
    { 0x33, 0x00 },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x08 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x44, 0x00 },
    { 0x45, 0x00 },
    { 0x46, 0x00 },
    { 0x47, 0x00 },
    { 0x48, 0x00 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x08 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x58, 0x00 },
    { 0x59, 0x00 },
    { 0x5a, 0x00 },
    { 0x5b, 0x00 },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x08 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x6c, 0x00 },
    { 0x6d, 0x00 },
    { 0x6e, 0x00 },
    { 0x6f, 0x00 },
    { 0x70, 0x00 },
    { 0x71, 0x00 },
    { 0x72, 0x00 },
    { 0x73, 0x00 },
    { 0x74, 0x00 },
    { 0x75, 0x00 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x08 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x28 },
    { 0x08, 0x00 },
    { 0x09, 0x00 },
    { 0x0a, 0x00 },
    { 0x0b, 0x00 },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x18, 0x08 },
    { 0x19, 0x00 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x1c, 0x00 },
    { 0x1d, 0x00 },
    { 0x1e, 0x00 },
    { 0x1f, 0x00 },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x08 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x30, 0x00 },
    { 0x31, 0x00 },
    { 0x32, 0x00 },
    { 0x33, 0x00 },
    { 0x34, 0x00 },
    { 0x35, 0x00 },
    { 0x36, 0x00 },
    { 0x37, 0x00 },
    { 0x38, 0x00 },
    { 0x39, 0x00 },
    { 0x3a, 0x00 },
    { 0x3b, 0x00 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x08 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x44, 0x00 },
    { 0x45, 0x00 },
    { 0x46, 0x00 },
    { 0x47, 0x00 },
    { 0x48, 0x00 },
    { 0x49, 0x00 },
    { 0x4a, 0x00 },
    { 0x4b, 0x00 },
    { 0x4c, 0x00 },
    { 0x4d, 0x00 },
    { 0x4e, 0x00 },
    { 0x4f, 0x00 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x08 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x58, 0x00 },
    { 0x59, 0x00 },
    { 0x5a, 0x00 },
    { 0x5b, 0x00 },
    { 0x5c, 0x00 },
    { 0x5d, 0x00 },
    { 0x5e, 0x00 },
    { 0x5f, 0x00 },
    { 0x60, 0x00 },
    { 0x61, 0x00 },
    { 0x62, 0x00 },
    { 0x63, 0x00 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x08 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x6c, 0x00 },
    { 0x6d, 0x00 },
    { 0x6e, 0x00 },
    { 0x6f, 0x00 },
    { 0x70, 0x00 },
    { 0x71, 0x00 },
    { 0x72, 0x00 },
    { 0x73, 0x00 },
    { 0x74, 0x00 },
    { 0x75, 0x00 },
    { 0x76, 0x00 },
    { 0x77, 0x00 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x08 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x29 },
    { 0x08, 0x00 },
    { 0x09, 0x00 },
    { 0x0a, 0x00 },
    { 0x0b, 0x00 },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x00, 0x2e },
    { 0x7c, 0x08 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x2f },
    { 0x08, 0x00 },
    { 0x09, 0x00 },
    { 0x0a, 0x00 },
    { 0x0b, 0x00 },
    { 0x0c, 0x00 },
    { 0x0d, 0x00 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x10, 0x00 },
    { 0x11, 0x00 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x14, 0x00 },
    { 0x15, 0x00 },
    { 0x16, 0x00 },
    { 0x17, 0x00 },
    { 0x1c, 0x08 },
    { 0x1d, 0x00 },
    { 0x1e, 0x00 },
    { 0x1f, 0x00 },
    { 0x20, 0x00 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },
    { 0x24, 0x00 },
    { 0x25, 0x00 },
    { 0x26, 0x00 },
    { 0x27, 0x00 },
    { 0x28, 0x00 },
    { 0x29, 0x00 },
    { 0x2a, 0x00 },
    { 0x2b, 0x00 },
    { 0x2c, 0x00 },
    { 0x2d, 0x00 },
    { 0x2e, 0x00 },
    { 0x2f, 0x00 },
    { 0x00, 0x2a },
    { 0x48, 0x00 },
    { 0x49, 0x15 },
    { 0x4a, 0xa7 },
    { 0x4b, 0x04 },
    { 0x4c, 0x00 },
    { 0x4d, 0x15 },
    { 0x4e, 0xa7 },
    { 0x4f, 0x04 },
    { 0x50, 0x00 },
    { 0x51, 0x15 },
    { 0x52, 0xa7 },
    { 0x53, 0x04 },
    { 0x54, 0x7b },
    { 0x55, 0x43 },
    { 0x56, 0x52 },
    { 0x57, 0x44 },
    { 0x58, 0x89 },
    { 0x59, 0x22 },
    { 0x5a, 0xbf },
    { 0x5b, 0x66 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x2b },
    { 0x34, 0x00 },
    { 0x35, 0x22 },
    { 0x36, 0x1d },
    { 0x37, 0x95 },
    { 0x38, 0x02 },
    { 0x39, 0xa3 },
    { 0x3a, 0x9a },
    { 0x3b, 0xcc },
    { 0x3c, 0x00 },
    { 0x3d, 0x06 },
    { 0x3e, 0xd3 },
    { 0x3f, 0x72 },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x44, 0x00 },
    { 0x45, 0x00 },
    { 0x46, 0x4e },
    { 0x47, 0xa5 },
    { 0x48, 0xff },
    { 0x49, 0x81 },
    { 0x4a, 0x47 },
    { 0x4b, 0xae },
    { 0x4c, 0xf9 },
    { 0x4d, 0x06 },
    { 0x4e, 0x21 },
    { 0x4f, 0xa9 },
    { 0x50, 0xfc },
    { 0x51, 0xc2 },
    { 0x52, 0xd8 },
    { 0x53, 0xc5 },
    { 0x54, 0x00 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x58, 0x00 },
    { 0x59, 0x02 },
    { 0x5a, 0x4b },
    { 0x5b, 0xce },
    { 0x00, 0x2d },
    { 0x58, 0x02 },
    { 0x59, 0xa3 },
    { 0x5a, 0x9a },
    { 0x5b, 0xcc },
    { 0x5c, 0x02 },
    { 0x5d, 0xa3 },
    { 0x5e, 0x9a },
    { 0x5f, 0xcc },
    { 0x60, 0x00 },
    { 0x61, 0x44 },
    { 0x62, 0x32 },
    { 0x63, 0x13 },
    { 0x64, 0x00 },
    { 0x65, 0x00 },
    { 0x66, 0x00 },
    { 0x67, 0x00 },
    { 0x68, 0x00 },
    { 0x69, 0x00 },
    { 0x6a, 0x00 },
    { 0x6b, 0x00 },
    { 0x6c, 0xff },
    { 0x6d, 0x81 },
    { 0x6e, 0x47 },
    { 0x6f, 0xae },
    { 0x70, 0xf9 },
    { 0x71, 0x06 },
    { 0x72, 0x21 },
    { 0x73, 0xa9 },
    { 0x74, 0xfc },
    { 0x75, 0xad },
    { 0x76, 0x96 },
    { 0x77, 0x20 },
    { 0x78, 0x00 },
    { 0x79, 0x00 },
    { 0x7a, 0x00 },
    { 0x7b, 0x00 },
    { 0x7c, 0x00 },
    { 0x7d, 0x00 },
    { 0x7e, 0x00 },
    { 0x7f, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0xaa },
    { 0x00, 0x2e },
    { 0x40, 0x58 },
    { 0x41, 0x3b },
    { 0x42, 0x2f },
    { 0x43, 0x3d },
    { 0x44, 0x58 },
    { 0x45, 0x3b },
    { 0x46, 0x2f },
    { 0x47, 0x3d },
    { 0x48, 0x58 },
    { 0x49, 0x3b },
    { 0x4a, 0x2f },
    { 0x4b, 0x3d },
    { 0x4c, 0xae },
    { 0x4d, 0x1a },
    { 0x4e, 0x80 },
    { 0x4f, 0x9b },
    { 0x50, 0xc2 },
    { 0x51, 0xde },
    { 0x52, 0x41 },
    { 0x53, 0xd5 },
    { 0x00, 0x2b },
    { 0x20, 0x06 },
    { 0x21, 0x55 },
    { 0x22, 0xaf },
    { 0x23, 0xd8 },
    { 0x24, 0xf9 },
    { 0x25, 0xaa },
    { 0x26, 0x50 },
    { 0x27, 0x28 },
    { 0x28, 0x06 },
    { 0x29, 0x55 },
    { 0x2a, 0xaf },
    { 0x2b, 0xd8 },
    { 0x2c, 0xae },
    { 0x2d, 0x1a },
    { 0x2e, 0x80 },
    { 0x2f, 0x9b },
    { 0x30, 0xc2 },
    { 0x31, 0xde },
    { 0x32, 0x41 },
    { 0x33, 0xd5 },
    { 0x0c, 0x06 },
    { 0x0d, 0x55 },
    { 0x0e, 0xaf },
    { 0x0f, 0xd8 },
    { 0x10, 0xf9 },
    { 0x11, 0xaa },
    { 0x12, 0x50 },
    { 0x13, 0x28 },
    { 0x14, 0x06 },
    { 0x15, 0x55 },
    { 0x16, 0xaf },
    { 0x17, 0xd8 },
    { 0x18, 0xae },
    { 0x19, 0x1a },
    { 0x1a, 0x80 },
    { 0x1b, 0x9b },
    { 0x1c, 0xc2 },
    { 0x1d, 0xde },
    { 0x1e, 0x41 },
    { 0x1f, 0xd5 },
    { 0x00, 0x2a },
    { 0x34, 0x00 },
    { 0x35, 0x15 },
    { 0x36, 0xa7 },
    { 0x37, 0x04 },
    { 0x38, 0x00 },
    { 0x39, 0x15 },
    { 0x3a, 0xa7 },
    { 0x3b, 0x04 },
    { 0x3c, 0x00 },
    { 0x3d, 0x15 },
    { 0x3e, 0xa7 },
    { 0x3f, 0x04 },
    { 0x40, 0x7b },
    { 0x41, 0x43 },
    { 0x42, 0x52 },
    { 0x43, 0x44 },
    { 0x44, 0x89 },
    { 0x45, 0x22 },
    { 0x46, 0xbf },
    { 0x47, 0x66 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x2d },
    { 0x30, 0x02 },
    { 0x31, 0xa3 },
    { 0x32, 0x9a },
    { 0x33, 0xcc },
    { 0x34, 0x02 },
    { 0x35, 0xa3 },
    { 0x36, 0x9a },
    { 0x37, 0xcc },
    { 0x38, 0x00 },
    { 0x39, 0x06 },
    { 0x3a, 0xd3 },
    { 0x3b, 0x72 },
    { 0x3c, 0x00 },
    { 0x3d, 0x00 },
    { 0x3e, 0x00 },
    { 0x3f, 0x00 },
    { 0x40, 0x00 },
    { 0x41, 0x00 },
    { 0x42, 0x00 },
    { 0x43, 0x00 },
    { 0x44, 0xff },
    { 0x45, 0x81 },
    { 0x46, 0x47 },
    { 0x47, 0xae },
    { 0x48, 0xf9 },
    { 0x49, 0x06 },
    { 0x4a, 0x21 },
    { 0x4b, 0xa9 },
    { 0x4c, 0xfc },
    { 0x4d, 0xc2 },
    { 0x4e, 0xd8 },
    { 0x4f, 0xc5 },
    { 0x50, 0x00 },
    { 0x51, 0x00 },
    { 0x52, 0x00 },
    { 0x53, 0x00 },
    { 0x54, 0x00 },
    { 0x55, 0x00 },
    { 0x56, 0x00 },
    { 0x57, 0x00 },
    { 0x00, 0x00 },
    { 0x7f, 0xaa },
    { 0x00, 0x2a },
    { 0x5c, 0x7b },
    { 0x5d, 0x58 },
    { 0x5e, 0xf9 },
    { 0x5f, 0x48 },
    { 0x60, 0x84 },
    { 0x61, 0xa7 },
    { 0x62, 0x06 },
    { 0x63, 0xb8 },
    { 0x64, 0x7b },
    { 0x65, 0x58 },
    { 0x66, 0xf9 },
    { 0x67, 0x48 },
    { 0x68, 0x7b },
    { 0x69, 0x43 },
    { 0x6a, 0x52 },
    { 0x6b, 0x44 },
    { 0x6c, 0x89 },
    { 0x6d, 0x22 },
    { 0x6e, 0xbf },
    { 0x6f, 0x66 },
    { 0x70, 0x7b },
    { 0x71, 0x58 },
    { 0x72, 0xf9 },
    { 0x73, 0x48 },
    { 0x74, 0x84 },
    { 0x75, 0xa7 },
    { 0x76, 0x06 },
    { 0x77, 0xb8 },
    { 0x78, 0x7b },
    { 0x79, 0x58 },
    { 0x7a, 0xf9 },
    { 0x7b, 0x48 },
    { 0x7c, 0x7b },
    { 0x7d, 0x43 },
    { 0x7e, 0x52 },
    { 0x7f, 0x44 },
    { 0x00, 0x2b },
    { 0x08, 0x89 },
    { 0x09, 0x22 },
    { 0x0a, 0xbf },
    { 0x0b, 0x66 },
    { 0x00, 0x2e },
    { 0x54, 0x58 },
    { 0x55, 0x3b },
    { 0x56, 0x2f },
    { 0x57, 0x3d },
    { 0x58, 0x58 },
    { 0x59, 0x3b },
    { 0x5a, 0x2f },
    { 0x5b, 0x3d },
    { 0x5c, 0x58 },
    { 0x5d, 0x3b },
    { 0x5e, 0x2f },
    { 0x5f, 0x3d },
    { 0x60, 0xae },
    { 0x61, 0x1a },
    { 0x62, 0x80 },
    { 0x63, 0x9b },
    { 0x64, 0xc2 },
    { 0x65, 0xde },
    { 0x66, 0x41 },
    { 0x67, 0xd5 },
    { 0x00, 0x00 },
    { 0x7f, 0x8c },
    { 0x00, 0x2e },
    { 0x10, 0x00 },
    { 0x11, 0x80 },
    { 0x12, 0x00 },
    { 0x13, 0x00 },
    { 0x0c, 0x00 },
    { 0x0d, 0x80 },
    { 0x0e, 0x00 },
    { 0x0f, 0x00 },
    { 0x08, 0x00 },
    { 0x09, 0x80 },
    { 0x0a, 0x00 },
    { 0x0b, 0x00 },
    { 0x18, 0x00 },
    { 0x19, 0x80 },
    { 0x1a, 0x00 },
    { 0x1b, 0x00 },
    { 0x1c, 0x40 },
    { 0x1d, 0x00 },
    { 0x1e, 0x00 },
    { 0x1f, 0x00 },
    { 0x20, 0x40 },
    { 0x21, 0x00 },
    { 0x22, 0x00 },
    { 0x23, 0x00 },

    //Register Tuning
    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x30, 0x00 },
    { 0x4c, 0x30 },
    { 0x03, 0x03 },

    { 0x00, 0x00 },
    { 0x7f, 0x00 },
    { 0x78, 0x80 },

};

#ifdef __cplusplus
}
#endif

#endif
