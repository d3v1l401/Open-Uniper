#pragma once
#include <Windows.h>
#include "SBoxes.h"
#include "Standards.h"

#define UNIPER_MODE_ECB 1
#define UNIPER_MODE_CBC 2 
#define UNIPER_MODE_CFB 3 
#define UNIPER_MODE_OFB 4

class Uniper
{
private:

protected:

public:

	EXPORT_STATIC int SetSubKey(unsigned long Key, unsigned long Size);
	EXPORT_STATIC void DisplayUnipherData(char *Data); // Empty function,maybe used during development.
	EXPORT_STATIC signed int UniperEncFunc(unsigned char *OutBuffer, int Size, unsigned char *Key, unsigned int KeySize, int Mode);
	EXPORT_STATIC int BufEncryptionECB(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4);
	EXPORT_STATIC int BufEncryptionCBC(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4);
	EXPORT_STATIC void BufEncryptionCFB(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4);
	EXPORT_STATIC void BufEncryptionOFB(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4);
	EXPORT_STATIC unsigned __int32 encryption(unsigned long *a1, unsigned long *a2, unsigned long *a3);
	EXPORT_STATIC signed int UniperDecFunc(unsigned char *OutBuffer, int Size, unsigned char *Key, unsigned int KeySize, int Mode);
	EXPORT_STATIC int BufDecryptionECB(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4);
	EXPORT_STATIC int BufDecryptionCBC(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4);
	EXPORT_STATIC unsigned __int32 BufDecryptionCFB(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4);
	EXPORT_STATIC unsigned __int32 BufDecryptionOFB(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4);
	EXPORT_STATIC unsigned __int32 decryption(unsigned long *a1, unsigned long *a2, unsigned long *a3);
};