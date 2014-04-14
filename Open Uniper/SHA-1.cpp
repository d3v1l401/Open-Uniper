#include "SHA-1.h"
#include "SBoxes.h"


void SHA1::SHA1DigestInit()
{
	VirtualProtect(S0, sizeof(S1), PAGE_READONLY, OldProtection);
	VirtualProtect(&S1, sizeof(S1), PAGE_READONLY, OldProtection);
	VirtualProtect(SS0, sizeof(SS0), PAGE_READONLY, OldProtection);
	VirtualProtect(SS1, sizeof(SS1), PAGE_READONLY, OldProtection);
	VirtualProtect(SS2, sizeof(SS2), PAGE_READONLY, OldProtection);
	VirtualProtect(SS3, sizeof(SS3), PAGE_READONLY, OldProtection);
}