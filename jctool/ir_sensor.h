#pragma once

// crc-8-ccitt / polynomial 0x07 look up table
static uint8_t mcu_crc8_table[256] = {
    0x00, 0x07, 0x0E, 0x09, 0x1C, 0x1B, 0x12, 0x15, 0x38, 0x3F, 0x36, 0x31, 0x24, 0x23, 0x2A, 0x2D,
    0x70, 0x77, 0x7E, 0x79, 0x6C, 0x6B, 0x62, 0x65, 0x48, 0x4F, 0x46, 0x41, 0x54, 0x53, 0x5A, 0x5D,
    0xE0, 0xE7, 0xEE, 0xE9, 0xFC, 0xFB, 0xF2, 0xF5, 0xD8, 0xDF, 0xD6, 0xD1, 0xC4, 0xC3, 0xCA, 0xCD,
    0x90, 0x97, 0x9E, 0x99, 0x8C, 0x8B, 0x82, 0x85, 0xA8, 0xAF, 0xA6, 0xA1, 0xB4, 0xB3, 0xBA, 0xBD,
    0xC7, 0xC0, 0xC9, 0xCE, 0xDB, 0xDC, 0xD5, 0xD2, 0xFF, 0xF8, 0xF1, 0xF6, 0xE3, 0xE4, 0xED, 0xEA,
    0xB7, 0xB0, 0xB9, 0xBE, 0xAB, 0xAC, 0xA5, 0xA2, 0x8F, 0x88, 0x81, 0x86, 0x93, 0x94, 0x9D, 0x9A,
    0x27, 0x20, 0x29, 0x2E, 0x3B, 0x3C, 0x35, 0x32, 0x1F, 0x18, 0x11, 0x16, 0x03, 0x04, 0x0D, 0x0A,
    0x57, 0x50, 0x59, 0x5E, 0x4B, 0x4C, 0x45, 0x42, 0x6F, 0x68, 0x61, 0x66, 0x73, 0x74, 0x7D, 0x7A,
    0x89, 0x8E, 0x87, 0x80, 0x95, 0x92, 0x9B, 0x9C, 0xB1, 0xB6, 0xBF, 0xB8, 0xAD, 0xAA, 0xA3, 0xA4,
    0xF9, 0xFE, 0xF7, 0xF0, 0xE5, 0xE2, 0xEB, 0xEC, 0xC1, 0xC6, 0xCF, 0xC8, 0xDD, 0xDA, 0xD3, 0xD4,
    0x69, 0x6E, 0x67, 0x60, 0x75, 0x72, 0x7B, 0x7C, 0x51, 0x56, 0x5F, 0x58, 0x4D, 0x4A, 0x43, 0x44,
    0x19, 0x1E, 0x17, 0x10, 0x05, 0x02, 0x0B, 0x0C, 0x21, 0x26, 0x2F, 0x28, 0x3D, 0x3A, 0x33, 0x34,
    0x4E, 0x49, 0x40, 0x47, 0x52, 0x55, 0x5C, 0x5B, 0x76, 0x71, 0x78, 0x7F, 0x6A, 0x6D, 0x64, 0x63,
    0x3E, 0x39, 0x30, 0x37, 0x22, 0x25, 0x2C, 0x2B, 0x06, 0x01, 0x08, 0x0F, 0x1A, 0x1D, 0x14, 0x13,
    0xAE, 0xA9, 0xA0, 0xA7, 0xB2, 0xB5, 0xBC, 0xBB, 0x96, 0x91, 0x98, 0x9F, 0x8A, 0x8D, 0x84, 0x83,
    0xDE, 0xD9, 0xD0, 0xD7, 0xC2, 0xC5, 0xCC, 0xCB, 0xE6, 0xE1, 0xE8, 0xEF, 0xFA, 0xFD, 0xF4, 0xF3
};

// ARGB Ironbow palette
static uint32_t iron_palette[] = {
    0xff000014, 0xff000025, 0xff00002a, 0xff000032, 0xff000036, 0xff00003e, 0xff000042, 0xff00004f,
    0xff010055, 0xff010057, 0xff02005c, 0xff03005e, 0xff040063, 0xff050065, 0xff070069, 0xff0a0070,
    0xff0b0073, 0xff0d0075, 0xff0d0076, 0xff100078, 0xff120079, 0xff15007c, 0xff17007d, 0xff1c0081,
    0xff200084, 0xff220085, 0xff260087, 0xff280089, 0xff2c008a, 0xff2e008b, 0xff32008d, 0xff38008f,
    0xff390090, 0xff3c0092, 0xff3e0093, 0xff410094, 0xff420095, 0xff450096, 0xff470096, 0xff4c0097,
    0xff4f0097, 0xff510097, 0xff540098, 0xff560098, 0xff5a0099, 0xff5c0099, 0xff5f009a, 0xff64009b,
    0xff66009b, 0xff6a009b, 0xff6c009c, 0xff6f009c, 0xff70009c, 0xff73009d, 0xff75009d, 0xff7a009d,
    0xff7e009d, 0xff7f009d, 0xff83009d, 0xff84009d, 0xff87009d, 0xff89009d, 0xff8b009d, 0xff91009c, 
    0xff93009c, 0xff96009b, 0xff98009b, 0xff9b009b, 0xff9c009b, 0xff9f009b, 0xffa0009b, 0xffa4009b,
    0xffa7009a, 0xffa8009a, 0xffaa0099, 0xffab0099, 0xffae0198, 0xffaf0198, 0xffb00198, 0xffb30196,
    0xffb40296, 0xffb60295, 0xffb70395, 0xffb90495, 0xffba0495, 0xffbb0593, 0xffbc0593, 0xffbf0692,
    0xffc00791, 0xffc00791, 0xffc10990, 0xffc20a8f, 0xffc30b8e, 0xffc40c8d, 0xffc60d8b, 0xffc81088,
    0xffc91187, 0xffca1385, 0xffcb1385, 0xffcc1582, 0xffcd1681, 0xffce187e, 0xffcf187c, 0xffd11b78,
    0xffd21c75, 0xffd21d74, 0xffd32071, 0xffd4216f, 0xffd5236b, 0xffd52469, 0xffd72665, 0xffd92a60,
    0xffda2b5e, 0xffdb2e5a, 0xffdb2f57, 0xffdd3051, 0xffdd314e, 0xffde3347, 0xffdf3444, 0xffe0373a,
    0xffe03933, 0xffe13a30, 0xffe23c2a, 0xffe33d26, 0xffe43f20, 0xffe4411d, 0xffe5431b, 0xffe64616,
    0xffe74715, 0xffe74913, 0xffe84a12, 0xffe84c0f, 0xffe94d0e, 0xffea4e0c, 0xffea4f0c, 0xffeb520a,
    0xffec5409, 0xffec5608, 0xffec5808, 0xffed5907, 0xffed5b06, 0xffee5c06, 0xffee5d05, 0xffef6004,
    0xffef6104, 0xfff06303, 0xfff06403, 0xfff16603, 0xfff16603, 0xfff16803, 0xfff16902, 0xfff16b02,
    0xfff26d01, 0xfff26e01, 0xfff37001, 0xfff37101, 0xfff47300, 0xfff47400, 0xfff47600, 0xfff47a00,
    0xfff57b00, 0xfff57e00, 0xfff57f00, 0xfff68100, 0xfff68200, 0xfff78400, 0xfff78500, 0xfff88800,
    0xfff88900, 0xfff88a00, 0xfff88c00, 0xfff98d00, 0xfff98e00, 0xfff98f00, 0xfff99100, 0xfffa9400,
    0xfffa9500, 0xfffb9800, 0xfffb9900, 0xfffb9c00, 0xfffc9d00, 0xfffca000, 0xfffca100, 0xfffda400,
    0xfffda700, 0xfffda800, 0xfffdab00, 0xfffdac00, 0xfffdae00, 0xfffeaf00, 0xfffeb100, 0xfffeb400,
    0xfffeb500, 0xfffeb800, 0xfffeb900, 0xfffeba00, 0xfffebb00, 0xfffebd00, 0xfffebe00, 0xfffec200,
    0xfffec400, 0xfffec500, 0xfffec700, 0xfffec800, 0xfffeca01, 0xfffeca01, 0xfffecc02, 0xfffecf04,
    0xfffecf04, 0xfffed106, 0xfffed308, 0xfffed50a, 0xfffed60a, 0xfffed80c, 0xfffed90d, 0xffffdb10,
    0xffffdc14, 0xffffdd16, 0xffffde1b, 0xffffdf1e, 0xffffe122, 0xffffe224, 0xffffe328, 0xffffe531,
    0xffffe635, 0xffffe73c, 0xffffe83f, 0xffffea46, 0xffffeb49, 0xffffec50, 0xffffed54, 0xffffee5f,
    0xffffef67, 0xfffff06a, 0xfffff172, 0xfffff177, 0xfffff280, 0xfffff285, 0xfffff38e, 0xfffff49a,
    0xfffff59e, 0xfffff5a6, 0xfffff6aa, 0xfffff7b3, 0xfffff7b6, 0xfffff8bd, 0xfffff8c1, 0xfffff9ca,
    0xfffffad1, 0xfffffad4, 0xfffffcdb, 0xfffffcdf, 0xfffffde5, 0xfffffde8, 0xfffffeee, 0xfffffff6
};

//ir registers to maximize output
static uint8_t ir_registers[] = {
    0x00, 0x00, 0x7f, 0x01, 0x00, 0x7f, 0x02, 0x00, 0x7f,
    0x03, 0x00, 0x7f, 0x04, 0x00, 0x7f
};
