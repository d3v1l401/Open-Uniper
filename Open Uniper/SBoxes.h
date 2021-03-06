#pragma once

/* SBoxes */
// All hand wrote...g** damn it...!!
static int S0[4] =
{
	0x14, 0x00, 0x00, 0x00
};

static int S1[4] =
{
	0x84, 0x00, 0x00, 0x00
};

static int SS0[1024] =
{
	0x28, 0x3C, 0x50, 0x14, 0x9A, 0xD7, 0x29, 0x4D, 0x71, 0xC7, 0xE2, 0xB6, 0x46, 0x65, 0x8C, 0x23,
	0x8A, 0xCF, 0x09, 0x45, 0xF9, 0x0B, 0xEF, 0xF2, 0x1F, 0x9E, 0x3E, 0x81, 0xAF, 0x76, 0x43, 0xD9,
	0x79, 0xCB, 0xF2, 0xB2, 0x55, 0xF1, 0xAA, 0xA4, 0xCE, 0xA9, 0x81, 0x67, 0x15, 0x91, 0x2A, 0x84,
	0xBD, 0x6D, 0x67, 0xD0, 0x40, 0x60, 0x80, 0x20, 0xE5, 0x19, 0xD7, 0xFC, 0x67, 0xDA, 0xCE, 0xBD,
	0x8E, 0xC9, 0x01, 0x47, 0xE6, 0x95, 0xD1, 0x73, 0x98, 0xD4, 0x2D, 0x4C, 0xA5, 0x79, 0x57, 0xDC,
	0x5B, 0xF8, 0xB6, 0xA3, 0x76, 0x4D, 0xEC, 0x3B, 0xB8, 0xE4, 0x6D, 0x5C, 0xFB, 0x08, 0xEB, 0xF3,
	0xEC, 0x9A, 0xC5, 0x76, 0x05, 0x89, 0x0A, 0x8C, 0x1C, 0x12, 0x38, 0x0E, 0x03, 0x8C, 0x06, 0x8F,
	0xC0, 0xA0, 0x9D, 0x60, 0xC8, 0xAC, 0x8D, 0x64, 0x81, 0x4F, 0x1F, 0xCE, 0x6B, 0xD0, 0xD6, 0xBB,
	0x7B, 0xC8, 0xF6, 0xB3, 0xE2, 0x93, 0xD9, 0x71, 0x4F, 0xE6, 0x9E, 0xA9, 0xEE, 0x99, 0xC1, 0x77,
	0x70, 0x48, 0xE0, 0x38, 0xD7, 0x32, 0xB3, 0xE5, 0xE0, 0x90, 0xDD, 0x70, 0x83, 0x4C, 0x1B, 0xCF,
	0x9F, 0x5E, 0x23, 0xC1, 0x77, 0xC2, 0xEE, 0xB5, 0x07, 0x8A, 0x0E, 0x8D, 0x33, 0xA4, 0x66, 0x97,
	0x60, 0x50, 0xC0, 0x30, 0x31, 0xA7, 0x62, 0x96, 0xCF, 0x26, 0x83, 0xE9, 0x02, 0x03, 0x04, 0x01,
	0x4A, 0x6F, 0x94, 0x25, 0x48, 0x6C, 0x90, 0x24, 0xB0, 0xE8, 0x7D, 0x58, 0x99, 0x5B, 0x2F, 0xC2,
	0x32, 0x2B, 0x64, 0x19, 0x53, 0xF4, 0xA6, 0xA7, 0xB3, 0x64, 0x7B, 0xD7, 0x2E, 0x39, 0x5C, 0x17,
	0x5C, 0x72, 0xB8, 0x2E, 0x92, 0xDB, 0x39, 0x49, 0x58, 0x74, 0xB0, 0x2C, 0x8B, 0x40, 0x0B, 0xCB,
	0xF2, 0x8B, 0xF9, 0x79, 0x23, 0xBC, 0x46, 0x9F, 0x87, 0x4A, 0x13, 0xCD, 0xE9, 0x13, 0xCF, 0xFA,
	0x8F, 0x46, 0x03, 0xC9, 0x9C, 0xD2, 0x25, 0x4E, 0x4D, 0xE5, 0x9A, 0xA8, 0x37, 0xA2, 0x6E, 0x95,
	0x95, 0x51, 0x37, 0xC4, 0xC1, 0x2F, 0x9F, 0xEE, 0x4B, 0xE0, 0x96, 0xAB, 0xDA, 0xB7, 0xA9, 0x6D,
	0x04, 0x06, 0x08, 0x02, 0xFA, 0x87, 0xE9, 0x7D, 0xD9, 0x3B, 0xAF, 0xE2, 0xB5, 0x61, 0x77, 0xD4,
	0x4C, 0x6A, 0x98, 0x26, 0x49, 0xE3, 0x92, 0xAA, 0xF3, 0x04, 0xFB, 0xF7, 0x27, 0xBA, 0x4E, 0x9D,
	0xFD, 0x0D, 0xE7, 0xF0, 0x20, 0x30, 0x40, 0x10, 0x89, 0x43, 0x0F, 0xCA, 0x08, 0x0C, 0x10, 0x04,
	0xB1, 0x67, 0x7F, 0xD6, 0x47, 0xEA, 0x8E, 0xAD, 0xAB, 0x70, 0x4B, 0xDB, 0xC2, 0xA3, 0x99, 0x61,
	0x0C, 0x0A, 0x18, 0x06, 0x2A, 0x3F, 0x54, 0x15, 0xAA, 0xFF, 0x49, 0x55, 0xBB, 0x68, 0x6B, 0xD3,
	0xD5, 0x31, 0xB7, 0xE4, 0x5A, 0x77, 0xB4, 0x2D, 0x3D, 0xAD, 0x7A, 0x90, 0x01, 0x8F, 0x02, 0x8E,
	0x19, 0x9B, 0x32, 0x82, 0x65, 0xD9, 0xCA, 0xBC, 0x18, 0x14, 0x30, 0x0C, 0x6E, 0x59, 0xDC, 0x37,
	0x64, 0x56, 0xC8, 0x32, 0x6A, 0x5F, 0xD4, 0x35, 0xFE, 0x81, 0xE1, 0x7F, 0x0A, 0x0F, 0x14, 0x05,
	0x25, 0xB9, 0x4A, 0x9C, 0xBA, 0xE7, 0x69, 0x5D, 0x9B, 0x58, 0x2B, 0xC3, 0xE4, 0x96, 0xD5, 0x72,
	0xEB, 0x10, 0xCB, 0xFB, 0x50, 0x78, 0xA0, 0x28, 0x2B, 0xB0, 0x56, 0x9B, 0x7D, 0xCD, 0xFA, 0xB0,
	0x12, 0x1B, 0x24, 0x09, 0xC5, 0x29, 0x97, 0xEC, 0x75, 0xC1, 0xEA, 0xB4, 0x3C, 0x22, 0x78, 0x1E,
	0x10, 0x18, 0x20, 0x08, 0x86, 0xC5, 0x11, 0x43, 0xF7, 0x02, 0xF3, 0xF5, 0xD4, 0xBE, 0xB5, 0x6A,
	0x45, 0xE9, 0x8A, 0xAC, 0xA6, 0xF5, 0x51, 0x53, 0xA3, 0x7C, 0x5B, 0xDF, 0x1D, 0x9D, 0x3A, 0x80,
	0xF1, 0x07, 0xFF, 0xF6, 0x21, 0xBF, 0x42, 0x9E, 0xC6, 0xA5, 0x91, 0x63, 0xBF, 0x6E, 0x63, 0xD1,
	0xF5, 0x01, 0xF7, 0xF4, 0xAE, 0xF9, 0x41, 0x57, 0x72, 0x4B, 0xE4, 0x39, 0x7E, 0x41, 0xFC, 0x3F,
	0x94, 0xDE, 0x35, 0x4A, 0x93, 0x54, 0x3B, 0xC7, 0xA9, 0x73, 0x4F, 0xDA, 0x2F, 0xB6, 0x5E, 0x99,
	0xF8, 0x84, 0xED, 0x7C, 0xB6, 0xED, 0x71, 0x5B, 0xD2, 0xBB, 0xB9, 0x69, 0x52, 0x7B, 0xA4, 0x29,
	0x97, 0x52, 0x33, 0xC5, 0x3B, 0xA8, 0x76, 0x93, 0x51, 0xF7, 0xA2, 0xA6, 0xF4, 0x8E, 0xF5, 0x7A,
	0x3E, 0x21, 0x7C, 0x1F, 0xB7, 0x62, 0x73, 0xD5, 0x41, 0xEF, 0x82, 0xAE, 0x73, 0xC4, 0xE6, 0xB7,
	0xDE, 0xB1, 0xA1, 0x6F, 0x24, 0x36, 0x48, 0x12, 0xE8, 0x9C, 0xCD, 0x74, 0x57, 0xF2, 0xAE, 0xA5,
	0x1A, 0x17, 0x34, 0x0D, 0x7C, 0x42, 0xF8, 0x3E, 0x96, 0xDD, 0x31, 0x4B, 0x1E, 0x11, 0x3C, 0x0F,
	0xCB, 0x20, 0x8B, 0xEB, 0x63, 0xDC, 0xC6, 0xBF, 0xA1, 0x7F, 0x5F, 0xDE, 0xB9, 0x6B, 0x6F, 0xD2,
	0xCC, 0xAA, 0x85, 0x66, 0x7A, 0x47, 0xF4, 0x3D, 0x2C, 0x3A, 0x58, 0x16, 0x13, 0x94, 0x26, 0x87,
	0xF6, 0x8D, 0xF1, 0x7B, 0xE1, 0x1F, 0xDF, 0xFE, 0x38, 0x24, 0x70, 0x1C, 0x68, 0x5C, 0xD0, 0x34,
	0xEA, 0x9F, 0xC9, 0x75, 0x36, 0x2D, 0x6C, 0x1B, 0x91, 0x57, 0x3F, 0xC6, 0x0F, 0x86, 0x1E, 0x89,
	0xE7, 0x1A, 0xD3, 0xFD, 0xD1, 0x37, 0xBF, 0xE6, 0x5D, 0xFD, 0xBA, 0xA0, 0x16, 0x1D, 0x2C, 0x0B,
	0x3A, 0x27, 0x74, 0x1D, 0x1B, 0x98, 0x36, 0x83, 0x29, 0xB3, 0x52, 0x9A, 0x42, 0x63, 0x84, 0x21,
	0x69, 0xD3, 0xD2, 0xBA, 0xCD, 0x25, 0x87, 0xE8, 0xEF, 0x16, 0xC3, 0xF9, 0x00, 0x00, 0x00, 0x00,
	0xD8, 0xB4, 0xAD, 0x6C, 0x82, 0xC3, 0x19, 0x41, 0x11, 0x97, 0x22, 0x86, 0xAD, 0x75, 0x47, 0xD8,
	0xAC, 0xFA, 0x45, 0x56, 0x6C, 0x5A, 0xD8, 0x36, 0xB2, 0xEB, 0x79, 0x59, 0xA4, 0xF6, 0x55, 0x52,
	0xBE, 0xE1, 0x61, 0x5F, 0x17, 0x92, 0x2E, 0x85, 0x80, 0xC0, 0x1D, 0x40, 0x44, 0x66, 0x88, 0x22,
	0x30, 0x28, 0x60, 0x18, 0xD6, 0xBD, 0xB1, 0x6B, 0x0B, 0x80, 0x16, 0x8B, 0x9E, 0xD1, 0x21, 0x4F,
	0x0E, 0x09, 0x1C, 0x07, 0x8D, 0x45, 0x07, 0xC8, 0x09, 0x83, 0x12, 0x8A, 0xDC, 0xB2, 0xA5, 0x6E,
	0x43, 0xEC, 0x86, 0xAF, 0x26, 0x35, 0x4C, 0x13, 0x39, 0xAB, 0x72, 0x92, 0x84, 0xC6, 0x15, 0x42,
	0xA0, 0xF0, 0x5D, 0x50, 0x2D, 0xB5, 0x5A, 0x98, 0x61, 0xDF, 0xC2, 0xBE, 0x3F, 0xAE, 0x7E, 0x91,
	0xFF, 0x0E, 0xE3, 0xF1, 0x78, 0x44, 0xF0, 0x3C, 0x4E, 0x69, 0x9C, 0x27, 0xFC, 0x82, 0xE5, 0x7E,
	0xC7, 0x2A, 0x93, 0xED, 0x54, 0x7E, 0xA8, 0x2A, 0x14, 0x1E, 0x28, 0x0A, 0x66, 0x55, 0xCC, 0x33,
	0xA7, 0x7A, 0x53, 0xDD, 0xA8, 0xFC, 0x4D, 0x54, 0x8C, 0xCA, 0x05, 0x46, 0x5E, 0x71, 0xBC, 0x2F,
	0x35, 0xA1, 0x6A, 0x94, 0xC4, 0xA6, 0x95, 0x62, 0xD0, 0xB8, 0xBD, 0x68, 0xB4, 0xEE, 0x75, 0x5A,
	0x88, 0xCC, 0x0D, 0x44, 0x9D, 0x5D, 0x27, 0xC0, 0x22, 0x33, 0x44, 0x11, 0x06, 0x05, 0x0C, 0x03,
	0x34, 0x2E, 0x68, 0x1A, 0x6D, 0xD5, 0xDA, 0xB8, 0x7F, 0xCE, 0xFE, 0xB1, 0xDD, 0x3D, 0xA7, 0xE0,
	0xC9, 0x23, 0x8F, 0xEA, 0x59, 0xFB, 0xB2, 0xA2, 0x56, 0x7D, 0xAC, 0x2B, 0xF0, 0x88, 0xFD, 0x78,
	0x90, 0xD8, 0x3D, 0x48, 0x62, 0x53, 0xC4, 0x31, 0x6F, 0xD6, 0xDE, 0xB9, 0xDB, 0x38, 0xAB, 0xE3,
	0xE3, 0x1C, 0xDB, 0xFF, 0xC3, 0x2C, 0x9B, 0xEF, 0xBC, 0xE2, 0x65, 0x5E, 0xD3, 0x34, 0xBB, 0xE7,
	0xCA, 0xAF, 0x89, 0x65, 0x85, 0x49, 0x17, 0xCC, 0xA2, 0xF3, 0x59, 0x51, 0xDF, 0x3E, 0xA3, 0xE1,
	0x5F, 0xFE, 0xBE, 0xA1, 0x74, 0x4E, 0xE8, 0x3A, 0xED, 0x15, 0xC7, 0xF8, 0x0D, 0x85, 0x1A, 0x88
};

static int SS1[1024] =
{
	0x91, 0x2A, 0x84, 0x15, 0xC8, 0xF6, 0xB3, 0x7B, 0xA3, 0x99, 0x61, 0xC2, 0x2F, 0x9F, 0xEE, 0xC1,
	0x3A, 0x58, 0x16, 0x2C, 0x6E, 0x63, 0xD1, 0xBF, 0x1D, 0x2C, 0x0B, 0x16, 0xD5, 0xDA, 0xB8, 0x6D,
	0x2E, 0x68, 0x1A, 0x34, 0xE8, 0x7D, 0x58, 0xB0, 0xE2, 0x65, 0x5E, 0xBC, 0x01, 0xF7, 0xF4, 0xF5,
	0xB6, 0x5E, 0x99, 0x2F, 0x8F, 0x02, 0x8E, 0x01, 0x20, 0x8B, 0xEB, 0xCB, 0xF1, 0xAA, 0xA4, 0x55,
	0x0B, 0xEF, 0xF2, 0xF9, 0x15, 0xC7, 0xF8, 0xED, 0x59, 0xDC, 0x37, 0x6E, 0xC9, 0x01, 0x47, 0x8E,
	0xC5, 0x11, 0x43, 0x86, 0xA7, 0x62, 0x96, 0x31, 0x23, 0x8F, 0xEA, 0xC9, 0xFF, 0x49, 0x55, 0xAA,
	0x09, 0x1C, 0x07, 0x0E, 0xF3, 0x59, 0x51, 0xA2, 0x28, 0x60, 0x18, 0x30, 0x53, 0xC4, 0x31, 0x62,
	0xCF, 0x09, 0x45, 0x8A, 0x42, 0xF8, 0x3E, 0x7C, 0x82, 0xE5, 0x7E, 0xFC, 0x4D, 0xEC, 0x3B, 0x76,
	0xBF, 0x42, 0x9E, 0x21, 0x24, 0x70, 0x1C, 0x38, 0x06, 0x08, 0x02, 0x04, 0x98, 0x36, 0x83, 0x1B,
	0x07, 0xFF, 0xF6, 0xF1, 0x39, 0x5C, 0x17, 0x2E, 0xB5, 0x5A, 0x98, 0x2D, 0x13, 0xCF, 0xFA, 0xE9,
	0x5D, 0x27, 0xC0, 0x9D, 0x03, 0x04, 0x01, 0x02, 0x62, 0x73, 0xD5, 0xB7, 0xDB, 0x39, 0x49, 0x92,
	0xF5, 0x51, 0x53, 0xA6, 0x4A, 0x13, 0xCD, 0x87, 0x46, 0x03, 0xC9, 0x8F, 0xF7, 0xA2, 0xA6, 0x51,
	0x93, 0xD9, 0x71, 0xE2, 0x02, 0xF3, 0xF5, 0xF7, 0xAE, 0x7E, 0x91, 0x3F, 0xFD, 0xBA, 0xA0, 0x5D,
	0x7F, 0x5F, 0xDE, 0xA1, 0x48, 0xE0, 0x38, 0x70, 0x9B, 0x32, 0x82, 0x19, 0x31, 0xB7, 0xE4, 0xD5,
	0xC1, 0xEA, 0xB4, 0x75, 0x45, 0x07, 0xC8, 0x8D, 0xF0, 0x5D, 0x50, 0xA0, 0x9E, 0x3E, 0x81, 0x1F,
	0xD6, 0xDE, 0xB9, 0x6F, 0x29, 0x97, 0xEC, 0xC5, 0x22, 0x78, 0x1E, 0x3C, 0x9C, 0xCD, 0x74, 0xE8,
	0xAF, 0x89, 0x65, 0xCA, 0x68, 0x6B, 0xD3, 0xBB, 0x97, 0x22, 0x86, 0x11, 0xEA, 0x8E, 0xAD, 0x47,
	0x41, 0xFC, 0x3F, 0x7E, 0x6B, 0x6F, 0xD2, 0xB9, 0x37, 0xBF, 0xE6, 0xD1, 0x21, 0x7C, 0x1F, 0x3E,
	0x57, 0x3F, 0xC6, 0x91, 0x5B, 0x2F, 0xC2, 0x99, 0x14, 0x30, 0x0C, 0x18, 0x3B, 0xAF, 0xE2, 0xD9,
	0x33, 0x44, 0x11, 0x22, 0xA6, 0x95, 0x62, 0xC4, 0x72, 0xB8, 0x2E, 0x5C, 0x18, 0x20, 0x08, 0x10,
	0x5F, 0xD4, 0x35, 0x6A, 0x1C, 0xDB, 0xFF, 0xE3, 0x0F, 0x14, 0x05, 0x0A, 0xEB, 0x79, 0x59, 0xB2,
	0x0A, 0x18, 0x06, 0x0C, 0x8B, 0xF9, 0x79, 0xF2, 0xE4, 0x6D, 0x5C, 0xB8, 0x5E, 0x23, 0xC1, 0x9F,
	0xDA, 0xCE, 0xBD, 0x67, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0B, 0xCB, 0x8B, 0x16, 0xC3, 0xF9, 0xEF,
	0xA8, 0x76, 0x93, 0x3B, 0x61, 0x77, 0xD4, 0xB5, 0xF6, 0x55, 0x52, 0xA4, 0xC2, 0xEE, 0xB5, 0x77,
	0xBD, 0xB1, 0x6B, 0xD6, 0x60, 0x80, 0x20, 0x40, 0x19, 0xD7, 0xFC, 0xE5, 0xD8, 0x3D, 0x48, 0x90,
	0xC4, 0xE6, 0xB7, 0x73, 0xE9, 0x8A, 0xAC, 0x45, 0x6A, 0x98, 0x26, 0x4C, 0x7A, 0x53, 0xDD, 0xA7,
	0x89, 0x0A, 0x8C, 0x05, 0xB2, 0xA5, 0x6E, 0xDC, 0x6C, 0x90, 0x24, 0x48, 0x84, 0xED, 0x7C, 0xF8,
	0x0D, 0xE7, 0xF0, 0xFD, 0x7D, 0xAC, 0x2B, 0x56, 0xA4, 0x66, 0x97, 0x33, 0x1F, 0xDF, 0xFE, 0xE1,
	0x05, 0x0C, 0x03, 0x06, 0x5A, 0xD8, 0x36, 0x6C, 0x92, 0x2E, 0x85, 0x17, 0x52, 0x33, 0xC5, 0x97,
	0x94, 0x26, 0x87, 0x13, 0x86, 0x1E, 0x89, 0x0F, 0x43, 0x0F, 0xCA, 0x89, 0x0C, 0x10, 0x04, 0x08,
	0x1A, 0xD3, 0xFD, 0xE7, 0xFC, 0x4D, 0x54, 0xA8, 0x69, 0x9C, 0x27, 0x4E, 0x8C, 0x06, 0x8F, 0x03,
	0xE3, 0x92, 0xAA, 0x49, 0xB8, 0xBD, 0x68, 0xD0, 0x6F, 0x94, 0x25, 0x4A, 0x27, 0x74, 0x1D, 0x3A,
	0xD2, 0x25, 0x4E, 0x9C, 0x71, 0xBC, 0x2F, 0x5E, 0x96, 0xD5, 0x72, 0xE4, 0x2A, 0x93, 0xED, 0xC7,
	0xE5, 0x9A, 0xA8, 0x4D, 0xE1, 0x61, 0x5F, 0xBE, 0x75, 0x47, 0xD8, 0xAD, 0x95, 0xD1, 0x73, 0xE6,
	0xCA, 0x05, 0x46, 0x8C, 0x0E, 0xE3, 0xF1, 0xFF, 0xAC, 0x8D, 0x64, 0xC8, 0xEC, 0x86, 0xAF, 0x43,
	0xD0, 0xD6, 0xBB, 0x6B, 0x56, 0xC8, 0x32, 0x64, 0xD9, 0xCA, 0xBC, 0x65, 0x76, 0x43, 0xD9, 0xAF,
	0xC3, 0x19, 0x41, 0x82, 0xAA, 0x85, 0x66, 0xCC, 0x2B, 0x64, 0x19, 0x32, 0x32, 0xB3, 0xE5, 0xD7,
	0x10, 0xCB, 0xFB, 0xEB, 0x2D, 0x6C, 0x1B, 0x36, 0x38, 0xAB, 0xE3, 0xDB, 0x79, 0x57, 0xDC, 0xA5,
	0x88, 0xFD, 0x78, 0xF0, 0xBB, 0xB9, 0x69, 0xD2, 0x74, 0xB0, 0x2C, 0x58, 0xB9, 0x4A, 0x9C, 0x25,
	0x77, 0xB4, 0x2D, 0x5A, 0xC0, 0x1D, 0x40, 0x80, 0xF8, 0xB6, 0xA3, 0x5B, 0x87, 0xE9, 0x7D, 0xFA,
	0x73, 0x4F, 0xDA, 0xA9, 0x1B, 0x24, 0x09, 0x12, 0xA0, 0x9D, 0x60, 0xC0, 0xA1, 0x6A, 0x94, 0x35,
	0xE7, 0x69, 0x5D, 0xBA, 0x11, 0x3C, 0x0F, 0x1E, 0x63, 0x84, 0x21, 0x42, 0x78, 0xA0, 0x28, 0x50,
	0xA9, 0x81, 0x67, 0xCE, 0x4E, 0xE8, 0x3A, 0x74, 0x70, 0x4B, 0xDB, 0xAB, 0xEF, 0x82, 0xAE, 0x41,
	0xB1, 0xA1, 0x6F, 0xDE, 0x99, 0xC1, 0x77, 0xEE, 0x65, 0x8C, 0x23, 0x46, 0x34, 0xBB, 0xE7, 0xD3,
	0xF2, 0xAE, 0xA5, 0x57, 0x2C, 0x9B, 0xEF, 0xC3, 0x35, 0x4C, 0x13, 0x26, 0x1E, 0x28, 0x0A, 0x14,
	0xDC, 0xC6, 0xBF, 0x63, 0xD7, 0x29, 0x4D, 0x9A, 0x3C, 0x50, 0x14, 0x28, 0x66, 0x88, 0x22, 0x44,
	0xB0, 0x56, 0x9B, 0x2B, 0xB7, 0xA9, 0x6D, 0xDA, 0x30, 0x40, 0x10, 0x20, 0x44, 0xF0, 0x3C, 0x78,
	0xE0, 0x96, 0xAB, 0x4B, 0x49, 0x17, 0xCC, 0x85, 0x3F, 0x54, 0x15, 0x2A, 0x6D, 0x67, 0xD0, 0xBD,
	0x83, 0x12, 0x8A, 0x09, 0x90, 0xDD, 0x70, 0xE0, 0x26, 0x83, 0xE9, 0xCF, 0xBE, 0xB5, 0x6A, 0xD4,
	0xEE, 0x75, 0x5A, 0xB4, 0x9D, 0x3A, 0x80, 0x1D, 0xDE, 0x35, 0x4A, 0x94, 0xF9, 0x41, 0x57, 0xAE,
	0x4B, 0xE4, 0x39, 0x72, 0x3E, 0xA3, 0xE1, 0xDF, 0x4F, 0x1F, 0xCE, 0x81, 0x81, 0xE1, 0x7F, 0xFE,
	0xBA, 0x4E, 0x9D, 0x27, 0xBC, 0x46, 0x9F, 0x23, 0xC7, 0xE2, 0xB6, 0x71, 0x17, 0x34, 0x0D, 0x1A,
	0x5C, 0xD0, 0x34, 0x68, 0x04, 0xFB, 0xF7, 0xF3, 0x51, 0x37, 0xC4, 0x95, 0x67, 0x7F, 0xD6, 0xB1,
	0xCE, 0xFE, 0xB1, 0x7F, 0x8A, 0x0E, 0x8D, 0x07, 0xA2, 0x6E, 0x95, 0x37, 0xFB, 0xB2, 0xA2, 0x59,
	0xCB, 0xF2, 0xB2, 0x79, 0x4C, 0x1B, 0xCF, 0x83, 0xA5, 0x91, 0x63, 0xC6, 0x55, 0xCC, 0x33, 0x66,
	0x58, 0x2B, 0xC3, 0x9B, 0xD1, 0x21, 0x4F, 0x9E, 0x9A, 0xC5, 0x76, 0xEC, 0x50, 0xC0, 0x30, 0x60,
	0x7B, 0xA4, 0x29, 0x52, 0xFE, 0xBE, 0xA1, 0x5F, 0x3D, 0xA7, 0xE0, 0xDD, 0x9F, 0xC9, 0x75, 0xEA,
	0xAB, 0x72, 0x92, 0x39, 0xCC, 0x0D, 0x44, 0x88, 0x8D, 0xF1, 0x7B, 0xF6, 0xC6, 0x15, 0x42, 0x84,
	0xDF, 0xC2, 0xBE, 0x61, 0xED, 0x71, 0x5B, 0xB6, 0x8E, 0xF5, 0x7A, 0xF4, 0x25, 0x87, 0xE8, 0xCD,
	0xE6, 0x9E, 0xA9, 0x4F, 0x54, 0x3B, 0xC7, 0x93, 0xDD, 0x31, 0x4B, 0x96, 0x47, 0xF4, 0x3D, 0x7A,
	0xD4, 0x2D, 0x4C, 0x98, 0x64, 0x7B, 0xD7, 0xB3, 0x7C, 0x5B, 0xDF, 0xA3, 0x85, 0x1A, 0x88, 0x0D,
	0x80, 0x16, 0x8B, 0x0B, 0xFA, 0x45, 0x56, 0xAC, 0x12, 0x38, 0x0E, 0x1C, 0x08, 0xEB, 0xF3, 0xFB,
	0xD3, 0xD2, 0xBA, 0x69, 0xB3, 0x52, 0x9A, 0x29, 0xCD, 0xFA, 0xB0, 0x7D, 0xB4, 0xAD, 0x6C, 0xD8,
	0xF4, 0xA6, 0xA7, 0x53, 0x36, 0x48, 0x12, 0x24, 0xAD, 0x7A, 0x90, 0x3D, 0x7E, 0xA8, 0x2A, 0x54
};

static int SS2[1024] =
{
	0x50, 0x14, 0x28, 0x3C, 0x29, 0x4D, 0x9A, 0xD7, 0xE2, 0xB6, 0x71, 0xC7, 0x8C, 0x23, 0x46, 0x65,
	0x09, 0x45, 0x8A, 0xCF, 0xEF, 0xF2, 0xF9, 0x0B, 0x3E, 0x81, 0x1F, 0x9E, 0x43, 0xD9, 0xAF, 0x76,
	0xF2, 0xB2, 0x79, 0xCB, 0xAA, 0xA4, 0x55, 0xF1, 0x81, 0x67, 0xCE, 0xA9, 0x2A, 0x84, 0x15, 0x91,
	0x67, 0xD0, 0xBD, 0x6D, 0x80, 0x20, 0x40, 0x60, 0xD7, 0xFC, 0xE5, 0x19, 0xCE, 0xBD, 0x67, 0xDA,
	0x01, 0x47, 0x8E, 0xC9, 0xD1, 0x73, 0xE6, 0x95, 0x2D, 0x4C, 0x98, 0xD4, 0x57, 0xDC, 0xA5, 0x79,
	0xB6, 0xA3, 0x5B, 0xF8, 0xEC, 0x3B, 0x76, 0x4D, 0x6D, 0x5C, 0xB8, 0xE4, 0xEB, 0xF3, 0xFB, 0x08,
	0xC5, 0x76, 0xEC, 0x9A, 0x0A, 0x8C, 0x05, 0x89, 0x38, 0x0E, 0x1C, 0x12, 0x06, 0x8F, 0x03, 0x8C,
	0x9D, 0x60, 0xC0, 0xA0, 0x8D, 0x64, 0xC8, 0xAC, 0x1F, 0xCE, 0x81, 0x4F, 0xD6, 0xBB, 0x6B, 0xD0,
	0xF6, 0xB3, 0x7B, 0xC8, 0xD9, 0x71, 0xE2, 0x93, 0x9E, 0xA9, 0x4F, 0xE6, 0xC1, 0x77, 0xEE, 0x99,
	0xE0, 0x38, 0x70, 0x48, 0xB3, 0xE5, 0xD7, 0x32, 0xDD, 0x70, 0xE0, 0x90, 0x1B, 0xCF, 0x83, 0x4C,
	0x23, 0xC1, 0x9F, 0x5E, 0xEE, 0xB5, 0x77, 0xC2, 0x0E, 0x8D, 0x07, 0x8A, 0x66, 0x97, 0x33, 0xA4,
	0xC0, 0x30, 0x60, 0x50, 0x62, 0x96, 0x31, 0xA7, 0x83, 0xE9, 0xCF, 0x26, 0x04, 0x01, 0x02, 0x03,
	0x94, 0x25, 0x4A, 0x6F, 0x90, 0x24, 0x48, 0x6C, 0x7D, 0x58, 0xB0, 0xE8, 0x2F, 0xC2, 0x99, 0x5B,
	0x64, 0x19, 0x32, 0x2B, 0xA6, 0xA7, 0x53, 0xF4, 0x7B, 0xD7, 0xB3, 0x64, 0x5C, 0x17, 0x2E, 0x39,
	0xB8, 0x2E, 0x5C, 0x72, 0x39, 0x49, 0x92, 0xDB, 0xB0, 0x2C, 0x58, 0x74, 0x0B, 0xCB, 0x8B, 0x40,
	0xF9, 0x79, 0xF2, 0x8B, 0x46, 0x9F, 0x23, 0xBC, 0x13, 0xCD, 0x87, 0x4A, 0xCF, 0xFA, 0xE9, 0x13,
	0x03, 0xC9, 0x8F, 0x46, 0x25, 0x4E, 0x9C, 0xD2, 0x9A, 0xA8, 0x4D, 0xE5, 0x6E, 0x95, 0x37, 0xA2,
	0x37, 0xC4, 0x95, 0x51, 0x9F, 0xEE, 0xC1, 0x2F, 0x96, 0xAB, 0x4B, 0xE0, 0xA9, 0x6D, 0xDA, 0xB7,
	0x08, 0x02, 0x04, 0x06, 0xE9, 0x7D, 0xFA, 0x87, 0xAF, 0xE2, 0xD9, 0x3B, 0x77, 0xD4, 0xB5, 0x61,
	0x98, 0x26, 0x4C, 0x6A, 0x92, 0xAA, 0x49, 0xE3, 0xFB, 0xF7, 0xF3, 0x04, 0x4E, 0x9D, 0x27, 0xBA,
	0xE7, 0xF0, 0xFD, 0x0D, 0x40, 0x10, 0x20, 0x30, 0x0F, 0xCA, 0x89, 0x43, 0x10, 0x04, 0x08, 0x0C,
	0x7F, 0xD6, 0xB1, 0x67, 0x8E, 0xAD, 0x47, 0xEA, 0x4B, 0xDB, 0xAB, 0x70, 0x99, 0x61, 0xC2, 0xA3,
	0x18, 0x06, 0x0C, 0x0A, 0x54, 0x15, 0x2A, 0x3F, 0x49, 0x55, 0xAA, 0xFF, 0x6B, 0xD3, 0xBB, 0x68,
	0xB7, 0xE4, 0xD5, 0x31, 0xB4, 0x2D, 0x5A, 0x77, 0x7A, 0x90, 0x3D, 0xAD, 0x02, 0x8E, 0x01, 0x8F,
	0x32, 0x82, 0x19, 0x9B, 0xCA, 0xBC, 0x65, 0xD9, 0x30, 0x0C, 0x18, 0x14, 0xDC, 0x37, 0x6E, 0x59,
	0xC8, 0x32, 0x64, 0x56, 0xD4, 0x35, 0x6A, 0x5F, 0xE1, 0x7F, 0xFE, 0x81, 0x14, 0x05, 0x0A, 0x0F,
	0x4A, 0x9C, 0x25, 0xB9, 0x69, 0x5D, 0xBA, 0xE7, 0x2B, 0xC3, 0x9B, 0x58, 0xD5, 0x72, 0xE4, 0x96,
	0xCB, 0xFB, 0xEB, 0x10, 0xA0, 0x28, 0x50, 0x78, 0x56, 0x9B, 0x2B, 0xB0, 0xFA, 0xB0, 0x7D, 0xCD,
	0x24, 0x09, 0x12, 0x1B, 0x97, 0xEC, 0xC5, 0x29, 0xEA, 0xB4, 0x75, 0xC1, 0x78, 0x1E, 0x3C, 0x22,
	0x20, 0x08, 0x10, 0x18, 0x11, 0x43, 0x86, 0xC5, 0xF3, 0xF5, 0xF7, 0x02, 0xB5, 0x6A, 0xD4, 0xBE,
	0x8A, 0xAC, 0x45, 0xE9, 0x51, 0x53, 0xA6, 0xF5, 0x5B, 0xDF, 0xA3, 0x7C, 0x3A, 0x80, 0x1D, 0x9D,
	0xFF, 0xF6, 0xF1, 0x07, 0x42, 0x9E, 0x21, 0xBF, 0x91, 0x63, 0xC6, 0xA5, 0x63, 0xD1, 0xBF, 0x6E,
	0xF7, 0xF4, 0xF5, 0x01, 0x41, 0x57, 0xAE, 0xF9, 0xE4, 0x39, 0x72, 0x4B, 0xFC, 0x3F, 0x7E, 0x41,
	0x35, 0x4A, 0x94, 0xDE, 0x3B, 0xC7, 0x93, 0x54, 0x4F, 0xDA, 0xA9, 0x73, 0x5E, 0x99, 0x2F, 0xB6,
	0xED, 0x7C, 0xF8, 0x84, 0x71, 0x5B, 0xB6, 0xED, 0xB9, 0x69, 0xD2, 0xBB, 0xA4, 0x29, 0x52, 0x7B,
	0x33, 0xC5, 0x97, 0x52, 0x76, 0x93, 0x3B, 0xA8, 0xA2, 0xA6, 0x51, 0xF7, 0xF5, 0x7A, 0xF4, 0x8E,
	0x7C, 0x1F, 0x3E, 0x21, 0x73, 0xD5, 0xB7, 0x62, 0x82, 0xAE, 0x41, 0xEF, 0xE6, 0xB7, 0x73, 0xC4,
	0xA1, 0x6F, 0xDE, 0xB1, 0x48, 0x12, 0x24, 0x36, 0xCD, 0x74, 0xE8, 0x9C, 0xAE, 0xA5, 0x57, 0xF2,
	0x34, 0x0D, 0x1A, 0x17, 0xF8, 0x3E, 0x7C, 0x42, 0x31, 0x4B, 0x96, 0xDD, 0x3C, 0x0F, 0x1E, 0x11,
	0x8B, 0xEB, 0xCB, 0x20, 0xC6, 0xBF, 0x63, 0xDC, 0x5F, 0xDE, 0xA1, 0x7F, 0x6F, 0xD2, 0xB9, 0x6B,
	0x85, 0x66, 0xCC, 0xAA, 0xF4, 0x3D, 0x7A, 0x47, 0x58, 0x16, 0x2C, 0x3A, 0x26, 0x87, 0x13, 0x94,
	0xF1, 0x7B, 0xF6, 0x8D, 0xDF, 0xFE, 0xE1, 0x1F, 0x70, 0x1C, 0x38, 0x24, 0xD0, 0x34, 0x68, 0x5C,
	0xC9, 0x75, 0xEA, 0x9F, 0x6C, 0x1B, 0x36, 0x2D, 0x3F, 0xC6, 0x91, 0x57, 0x1E, 0x89, 0x0F, 0x86,
	0xD3, 0xFD, 0xE7, 0x1A, 0xBF, 0xE6, 0xD1, 0x37, 0xBA, 0xA0, 0x5D, 0xFD, 0x2C, 0x0B, 0x16, 0x1D,
	0x74, 0x1D, 0x3A, 0x27, 0x36, 0x83, 0x1B, 0x98, 0x52, 0x9A, 0x29, 0xB3, 0x84, 0x21, 0x42, 0x63,
	0xD2, 0xBA, 0x69, 0xD3, 0x87, 0xE8, 0xCD, 0x25, 0xC3, 0xF9, 0xEF, 0x16, 0x00, 0x00, 0x00, 0x00,
	0xAD, 0x6C, 0xD8, 0xB4, 0x19, 0x41, 0x82, 0xC3, 0x22, 0x86, 0x11, 0x97, 0x47, 0xD8, 0xAD, 0x75,
	0x45, 0x56, 0xAC, 0xFA, 0xD8, 0x36, 0x6C, 0x5A, 0x79, 0x59, 0xB2, 0xEB, 0x55, 0x52, 0xA4, 0xF6,
	0x61, 0x5F, 0xBE, 0xE1, 0x2E, 0x85, 0x17, 0x92, 0x1D, 0x40, 0x80, 0xC0, 0x88, 0x22, 0x44, 0x66,
	0x60, 0x18, 0x30, 0x28, 0xB1, 0x6B, 0xD6, 0xBD, 0x16, 0x8B, 0x0B, 0x80, 0x21, 0x4F, 0x9E, 0xD1,
	0x1C, 0x07, 0x0E, 0x09, 0x07, 0xC8, 0x8D, 0x45, 0x12, 0x8A, 0x09, 0x83, 0xA5, 0x6E, 0xDC, 0xB2,
	0x86, 0xAF, 0x43, 0xEC, 0x4C, 0x13, 0x26, 0x35, 0x72, 0x92, 0x39, 0xAB, 0x15, 0x42, 0x84, 0xC6,
	0x5D, 0x50, 0xA0, 0xF0, 0x5A, 0x98, 0x2D, 0xB5, 0xC2, 0xBE, 0x61, 0xDF, 0x7E, 0x91, 0x3F, 0xAE,
	0xE3, 0xF1, 0xFF, 0x0E, 0xF0, 0x3C, 0x78, 0x44, 0x9C, 0x27, 0x4E, 0x69, 0xE5, 0x7E, 0xFC, 0x82,
	0x93, 0xED, 0xC7, 0x2A, 0xA8, 0x2A, 0x54, 0x7E, 0x28, 0x0A, 0x14, 0x1E, 0xCC, 0x33, 0x66, 0x55,
	0x53, 0xDD, 0xA7, 0x7A, 0x4D, 0x54, 0xA8, 0xFC, 0x05, 0x46, 0x8C, 0xCA, 0xBC, 0x2F, 0x5E, 0x71,
	0x6A, 0x94, 0x35, 0xA1, 0x95, 0x62, 0xC4, 0xA6, 0xBD, 0x68, 0xD0, 0xB8, 0x75, 0x5A, 0xB4, 0xEE,
	0x0D, 0x44, 0x88, 0xCC, 0x27, 0xC0, 0x9D, 0x5D, 0x44, 0x11, 0x22, 0x33, 0x0C, 0x03, 0x06, 0x05,
	0x68, 0x1A, 0x34, 0x2E, 0xDA, 0xB8, 0x6D, 0xD5, 0xFE, 0xB1, 0x7F, 0xCE, 0xA7, 0xE0, 0xDD, 0x3D,
	0x8F, 0xEA, 0xC9, 0x23, 0xB2, 0xA2, 0x59, 0xFB, 0xAC, 0x2B, 0x56, 0x7D, 0xFD, 0x78, 0xF0, 0x88,
	0x3D, 0x48, 0x90, 0xD8, 0xC4, 0x31, 0x62, 0x53, 0xDE, 0xB9, 0x6F, 0xD6, 0xAB, 0xE3, 0xDB, 0x38,
	0xDB, 0xFF, 0xE3, 0x1C, 0x9B, 0xEF, 0xC3, 0x2C, 0x65, 0x5E, 0xBC, 0xE2, 0xBB, 0xE7, 0xD3, 0x34,
	0x89, 0x65, 0xCA, 0xAF, 0x17, 0xCC, 0x85, 0x49, 0x59, 0x51, 0xA2, 0xF3, 0xA3, 0xE1, 0xDF, 0x3E,
	0xBE, 0xA1, 0x5F, 0xFE, 0xE8, 0x3A, 0x74, 0x4E, 0xC7, 0xF8, 0xED, 0x15, 0x1A, 0x88, 0x0D, 0x85
};

static int SS3[1024] =
{
	0x84, 0x15, 0x91, 0x2A, 0xB3, 0x7B, 0xC8, 0xF6, 0x61, 0xC2, 0xA3, 0x99, 0xEE, 0xC1, 0x2F, 0x9F,
	0x16, 0x2C, 0x3A, 0x58, 0xD1, 0xBF, 0x6E, 0x63, 0x0B, 0x16, 0x1D, 0x2C, 0xB8, 0x6D, 0xD5, 0xDA,
	0x1A, 0x34, 0x2E, 0x68, 0x58, 0xB0, 0xE8, 0x7D, 0x5E, 0xBC, 0xE2, 0x65, 0xF4, 0xF5, 0x01, 0xF7,
	0x99, 0x2F, 0xB6, 0x5E, 0x8E, 0x01, 0x8F, 0x02, 0xEB, 0xCB, 0x20, 0x8B, 0xA4, 0x55, 0xF1, 0xAA,
	0xF2, 0xF9, 0x0B, 0xEF, 0xF8, 0xED, 0x15, 0xC7, 0x37, 0x6E, 0x59, 0xDC, 0x47, 0x8E, 0xC9, 0x01,
	0x43, 0x86, 0xC5, 0x11, 0x96, 0x31, 0xA7, 0x62, 0xEA, 0xC9, 0x23, 0x8F, 0x55, 0xAA, 0xFF, 0x49,
	0x07, 0x0E, 0x09, 0x1C, 0x51, 0xA2, 0xF3, 0x59, 0x18, 0x30, 0x28, 0x60, 0x31, 0x62, 0x53, 0xC4,
	0x45, 0x8A, 0xCF, 0x09, 0x3E, 0x7C, 0x42, 0xF8, 0x7E, 0xFC, 0x82, 0xE5, 0x3B, 0x76, 0x4D, 0xEC,
	0x9E, 0x21, 0xBF, 0x42, 0x1C, 0x38, 0x24, 0x70, 0x02, 0x04, 0x06, 0x08, 0x83, 0x1B, 0x98, 0x36,
	0xF6, 0xF1, 0x07, 0xFF, 0x17, 0x2E, 0x39, 0x5C, 0x98, 0x2D, 0xB5, 0x5A, 0xFA, 0xE9, 0x13, 0xCF,
	0xC0, 0x9D, 0x5D, 0x27, 0x01, 0x02, 0x03, 0x04, 0xD5, 0xB7, 0x62, 0x73, 0x49, 0x92, 0xDB, 0x39,
	0x53, 0xA6, 0xF5, 0x51, 0xCD, 0x87, 0x4A, 0x13, 0xC9, 0x8F, 0x46, 0x03, 0xA6, 0x51, 0xF7, 0xA2,
	0x71, 0xE2, 0x93, 0xD9, 0xF5, 0xF7, 0x02, 0xF3, 0x91, 0x3F, 0xAE, 0x7E, 0xA0, 0x5D, 0xFD, 0xBA,
	0xDE, 0xA1, 0x7F, 0x5F, 0x38, 0x70, 0x48, 0xE0, 0x82, 0x19, 0x9B, 0x32, 0xE4, 0xD5, 0x31, 0xB7,
	0xB4, 0x75, 0xC1, 0xEA, 0xC8, 0x8D, 0x45, 0x07, 0x50, 0xA0, 0xF0, 0x5D, 0x81, 0x1F, 0x9E, 0x3E,
	0xB9, 0x6F, 0xD6, 0xDE, 0xEC, 0xC5, 0x29, 0x97, 0x1E, 0x3C, 0x22, 0x78, 0x74, 0xE8, 0x9C, 0xCD,
	0x65, 0xCA, 0xAF, 0x89, 0xD3, 0xBB, 0x68, 0x6B, 0x86, 0x11, 0x97, 0x22, 0xAD, 0x47, 0xEA, 0x8E,
	0x3F, 0x7E, 0x41, 0xFC, 0xD2, 0xB9, 0x6B, 0x6F, 0xE6, 0xD1, 0x37, 0xBF, 0x1F, 0x3E, 0x21, 0x7C,
	0xC6, 0x91, 0x57, 0x3F, 0xC2, 0x99, 0x5B, 0x2F, 0x0C, 0x18, 0x14, 0x30, 0xE2, 0xD9, 0x3B, 0xAF,
	0x11, 0x22, 0x33, 0x44, 0x62, 0xC4, 0xA6, 0x95, 0x2E, 0x5C, 0x72, 0xB8, 0x08, 0x10, 0x18, 0x20,
	0x35, 0x6A, 0x5F, 0xD4, 0xFF, 0xE3, 0x1C, 0xDB, 0x05, 0x0A, 0x0F, 0x14, 0x59, 0xB2, 0xEB, 0x79,
	0x06, 0x0C, 0x0A, 0x18, 0x79, 0xF2, 0x8B, 0xF9, 0x5C, 0xB8, 0xE4, 0x6D, 0xC1, 0x9F, 0x5E, 0x23,
	0xBD, 0x67, 0xDA, 0xCE, 0x00, 0x00, 0x00, 0x00, 0xCB, 0x8B, 0x40, 0x0B, 0xF9, 0xEF, 0x16, 0xC3,
	0x93, 0x3B, 0xA8, 0x76, 0xD4, 0xB5, 0x61, 0x77, 0x52, 0xA4, 0xF6, 0x55, 0xB5, 0x77, 0xC2, 0xEE,
	0x6B, 0xD6, 0xBD, 0xB1, 0x20, 0x40, 0x60, 0x80, 0xFC, 0xE5, 0x19, 0xD7, 0x48, 0x90, 0xD8, 0x3D,
	0xB7, 0x73, 0xC4, 0xE6, 0xAC, 0x45, 0xE9, 0x8A, 0x26, 0x4C, 0x6A, 0x98, 0xDD, 0xA7, 0x7A, 0x53,
	0x8C, 0x05, 0x89, 0x0A, 0x6E, 0xDC, 0xB2, 0xA5, 0x24, 0x48, 0x6C, 0x90, 0x7C, 0xF8, 0x84, 0xED,
	0xF0, 0xFD, 0x0D, 0xE7, 0x2B, 0x56, 0x7D, 0xAC, 0x97, 0x33, 0xA4, 0x66, 0xFE, 0xE1, 0x1F, 0xDF,
	0x03, 0x06, 0x05, 0x0C, 0x36, 0x6C, 0x5A, 0xD8, 0x85, 0x17, 0x92, 0x2E, 0xC5, 0x97, 0x52, 0x33,
	0x87, 0x13, 0x94, 0x26, 0x89, 0x0F, 0x86, 0x1E, 0xCA, 0x89, 0x43, 0x0F, 0x04, 0x08, 0x0C, 0x10,
	0xFD, 0xE7, 0x1A, 0xD3, 0x54, 0xA8, 0xFC, 0x4D, 0x27, 0x4E, 0x69, 0x9C, 0x8F, 0x03, 0x8C, 0x06,
	0xAA, 0x49, 0xE3, 0x92, 0x68, 0xD0, 0xB8, 0xBD, 0x25, 0x4A, 0x6F, 0x94, 0x1D, 0x3A, 0x27, 0x74,
	0x4E, 0x9C, 0xD2, 0x25, 0x2F, 0x5E, 0x71, 0xBC, 0x72, 0xE4, 0x96, 0xD5, 0xED, 0xC7, 0x2A, 0x93,
	0xA8, 0x4D, 0xE5, 0x9A, 0x5F, 0xBE, 0xE1, 0x61, 0xD8, 0xAD, 0x75, 0x47, 0x73, 0xE6, 0x95, 0xD1,
	0x46, 0x8C, 0xCA, 0x05, 0xF1, 0xFF, 0x0E, 0xE3, 0x64, 0xC8, 0xAC, 0x8D, 0xAF, 0x43, 0xEC, 0x86,
	0xBB, 0x6B, 0xD0, 0xD6, 0x32, 0x64, 0x56, 0xC8, 0xBC, 0x65, 0xD9, 0xCA, 0xD9, 0xAF, 0x76, 0x43,
	0x41, 0x82, 0xC3, 0x19, 0x66, 0xCC, 0xAA, 0x85, 0x19, 0x32, 0x2B, 0x64, 0xE5, 0xD7, 0x32, 0xB3,
	0xFB, 0xEB, 0x10, 0xCB, 0x1B, 0x36, 0x2D, 0x6C, 0xE3, 0xDB, 0x38, 0xAB, 0xDC, 0xA5, 0x79, 0x57,
	0x78, 0xF0, 0x88, 0xFD, 0x69, 0xD2, 0xBB, 0xB9, 0x2C, 0x58, 0x74, 0xB0, 0x9C, 0x25, 0xB9, 0x4A,
	0x2D, 0x5A, 0x77, 0xB4, 0x40, 0x80, 0xC0, 0x1D, 0xA3, 0x5B, 0xF8, 0xB6, 0x7D, 0xFA, 0x87, 0xE9,
	0xDA, 0xA9, 0x73, 0x4F, 0x09, 0x12, 0x1B, 0x24, 0x60, 0xC0, 0xA0, 0x9D, 0x94, 0x35, 0xA1, 0x6A,
	0x5D, 0xBA, 0xE7, 0x69, 0x0F, 0x1E, 0x11, 0x3C, 0x21, 0x42, 0x63, 0x84, 0x28, 0x50, 0x78, 0xA0,
	0x67, 0xCE, 0xA9, 0x81, 0x3A, 0x74, 0x4E, 0xE8, 0xDB, 0xAB, 0x70, 0x4B, 0xAE, 0x41, 0xEF, 0x82,
	0x6F, 0xDE, 0xB1, 0xA1, 0x77, 0xEE, 0x99, 0xC1, 0x23, 0x46, 0x65, 0x8C, 0xE7, 0xD3, 0x34, 0xBB,
	0xA5, 0x57, 0xF2, 0xAE, 0xEF, 0xC3, 0x2C, 0x9B, 0x13, 0x26, 0x35, 0x4C, 0x0A, 0x14, 0x1E, 0x28,
	0xBF, 0x63, 0xDC, 0xC6, 0x4D, 0x9A, 0xD7, 0x29, 0x14, 0x28, 0x3C, 0x50, 0x22, 0x44, 0x66, 0x88,
	0x9B, 0x2B, 0xB0, 0x56, 0x6D, 0xDA, 0xB7, 0xA9, 0x10, 0x20, 0x30, 0x40, 0x3C, 0x78, 0x44, 0xF0,
	0xAB, 0x4B, 0xE0, 0x96, 0xCC, 0x85, 0x49, 0x17, 0x15, 0x2A, 0x3F, 0x54, 0xD0, 0xBD, 0x6D, 0x67,
	0x8A, 0x09, 0x83, 0x12, 0x70, 0xE0, 0x90, 0xDD, 0xE9, 0xCF, 0x26, 0x83, 0x6A, 0xD4, 0xBE, 0xB5,
	0x5A, 0xB4, 0xEE, 0x75, 0x80, 0x1D, 0x9D, 0x3A, 0x4A, 0x94, 0xDE, 0x35, 0x57, 0xAE, 0xF9, 0x41,
	0x39, 0x72, 0x4B, 0xE4, 0xE1, 0xDF, 0x3E, 0xA3, 0xCE, 0x81, 0x4F, 0x1F, 0x7F, 0xFE, 0x81, 0xE1,
	0x9D, 0x27, 0xBA, 0x4E, 0x9F, 0x23, 0xBC, 0x46, 0xB6, 0x71, 0xC7, 0xE2, 0x0D, 0x1A, 0x17, 0x34,
	0x34, 0x68, 0x5C, 0xD0, 0xF7, 0xF3, 0x04, 0xFB, 0xC4, 0x95, 0x51, 0x37, 0xD6, 0xB1, 0x67, 0x7F,
	0xB1, 0x7F, 0xCE, 0xFE, 0x8D, 0x07, 0x8A, 0x0E, 0x95, 0x37, 0xA2, 0x6E, 0xA2, 0x59, 0xFB, 0xB2,
	0xB2, 0x79, 0xCB, 0xF2, 0xCF, 0x83, 0x4C, 0x1B, 0x63, 0xC6, 0xA5, 0x91, 0x33, 0x66, 0x55, 0xCC,
	0xC3, 0x9B, 0x58, 0x2B, 0x4F, 0x9E, 0xD1, 0x21, 0x76, 0xEC, 0x9A, 0xC5, 0x30, 0x60, 0x50, 0xC0,
	0x29, 0x52, 0x7B, 0xA4, 0xA1, 0x5F, 0xFE, 0xBE, 0xE0, 0xDD, 0x3D, 0xA7, 0x75, 0xEA, 0x9F, 0xC9,
	0x92, 0x39, 0xAB, 0x72, 0x44, 0x88, 0xCC, 0x0D, 0x7B, 0xF6, 0x8D, 0xF1, 0x42, 0x84, 0xC6, 0x15,
	0xBE, 0x61, 0xDF, 0xC2, 0x5B, 0xB6, 0xED, 0x71, 0x7A, 0xF4, 0x8E, 0xF5, 0xE8, 0xCD, 0x25, 0x87,
	0xA9, 0x4F, 0xE6, 0x9E, 0xC7, 0x93, 0x54, 0x3B, 0x4B, 0x96, 0xDD, 0x31, 0x3D, 0x7A, 0x47, 0xF4,
	0x4C, 0x98, 0xD4, 0x2D, 0xD7, 0xB3, 0x64, 0x7B, 0xDF, 0xA3, 0x7C, 0x5B, 0x88, 0x0D, 0x85, 0x1A,
	0x8B, 0x0B, 0x80, 0x16, 0x56, 0xAC, 0xFA, 0x45, 0x0E, 0x1C, 0x12, 0x38, 0xF3, 0xFB, 0x08, 0xEB,
	0xBA, 0x69, 0xD3, 0xD2, 0x9A, 0x29, 0xB3, 0x52, 0xB0, 0x7D, 0xCD, 0xFA, 0x6C, 0xD8, 0xB4, 0xAD,
	0xA7, 0x53, 0xF4, 0xA6, 0x12, 0x24, 0x36, 0x48, 0x90, 0x3D, 0xAD, 0x7A, 0x2A, 0x54, 0x7E, 0xA8
};