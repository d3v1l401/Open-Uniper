#pragma warning (disable: 4146)
#pragma warning (disable: 4700)
#include "Uniper.h"
#include "BYTE.h"

void Uniper::DisplayUnipherData(char *Data)
{
	return;
}

int Uniper::SetSubKey(unsigned long Key, unsigned long Size)
{
  int Head2; // eax@1
  int Head1; // ecx@1
  int PtrToHead; // ebp@1
  int Head3; // esi@1
  signed int v6; // ecx@3
  int v7; // ecx@3
  int v8; // ebp@3
  int v9; // ebx@3
  unsigned int v10; // edx@3
  int v11; // eax@3
  unsigned int v12; // esi@3
  int v13; // eax@3
  unsigned int v14; // edi@3
  int v15; // ST18_4@3
  int v16; // ebp@3
  char v17; // zf@5
  signed int v18; // ecx@6
  int v19; // esi@6
  int result; // eax@7
  int v21; // edx@7
  int v22; // [sp+18h] [bp-14Ch]@3
  char *v23; // [sp+1Ch] [bp-148h]@1
  signed int v24; // [sp+20h] [bp-144h]@1
  int InitialKey5; // [sp+24h] [bp-140h]@1
  int InitialKey6; // [sp+28h] [bp-13Ch]@1
  int InitialKey7; // [sp+2Ch] [bp-138h]@1
  int InitialKey8; // [sp+30h] [bp-134h]@1
  int InitialKey1; // [sp+34h] [bp-130h]@1
  int InitialKey2; // [sp+38h] [bp-12Ch]@1
  int InitialKey3; // [sp+3Ch] [bp-128h]@1
  int InitialKey4; // [sp+40h] [bp-124h]@1
  int v33; // [sp+44h] [bp-120h]@4
  char v34; // [sp+48h] [bp-11Ch]@1

  PtrToHead = *(_DWORD *)Key;
  Head1 = *(_DWORD *)(Key + 4);
  Head2 = *(_DWORD *)(Key + 8);
  Head3 = *(_DWORD *)(Key + 12);
  InitialKey1 = -1209970334;
  InitialKey2 = -1964168598;
  InitialKey3 = -1083090816;
  InitialKey4 = -1661668409;
  InitialKey5 = 608135816;
  InitialKey6 = -2052912941;
  InitialKey7 = 320440878;
  InitialKey8 = 57701188;
  v23 = &v34;
  v24 = 18;
  while ( 1 )
  {
    v7 = InitialKey2 + Head1;
    v8 = InitialKey1 ^ PtrToHead;
    v9 = v7 ^ (Head3 + InitialKey4);
    v10 = v8 + (InitialKey3 ^ Head2);
    v11 = SS3[(unsigned __int8)v9] ^ SS0[(unsigned int)v9 >> 24] ^ SS2[BYTE1(v9)] ^ SS1[BYTE2(v9)];
    v12 = (unsigned int)(&S1)[(unsigned __int8)v11] ^ ((S0[BYTE1(v11)] ^ (((S0[(unsigned int)v11 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v11)]) << 8)) << 8);
    v13 = SS3[(unsigned __int8)v10] ^ SS0[v10 >> 24] ^ SS2[BYTE1(v10)] ^ SS1[BYTE2(v10)];
    v14 = (unsigned int)(&S1)[(unsigned __int8)v13] ^ ((S0[BYTE1(v13)] ^ (((S0[(unsigned int)v13 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v13)]) << 8)) << 8);
    v15 = (v14 + v12) ^ v7;
    v16 = v14 + 2 * v12 + v8;
    Head3 = InitialKey5 ^ v16;
    *((_DWORD *)v23 - 1) = InitialKey5 ^ v16;
    Head2 = InitialKey8 + ((v9 << (v16 & 0x1F)) | ((unsigned int)v9 >> (32 - (v16 & 0x1Fu))));
    PtrToHead = v15 + InitialKey6;
    *(_DWORD *)v23 = v15 + InitialKey6;
    v22 = ((v10 << (v15 & 0x1F)) | (v10 >> (32 - (v15 & 0x1Fu)))) ^ InitialKey7;
    *((_DWORD *)v23 + 1) = v22;
    *((_DWORD *)v23 + 2) = Head2;
    v6 = 0;
    do
    {
      *(int *)((char *)&InitialKey1 + v6) = *(int *)((char *)&InitialKey5 + v6);
      *(int *)((char *)&InitialKey5 + v6) = *(int *)((char *)&v33 + v6);
      v6 += 4;
    }
    while ( v6 < 16 );
    v17 = v24 == 1;
    v23 += 16;
    --v24;
    if ( v17 )
      break;
    Head1 = v22;
  }
  v19 = Size;
  v18 = 0;
  do
  {
    result = v18 / 72;
    v21 = v18 % 72;
    v18 += 11;
    v19 += 4;
    *(_DWORD *)(v19 - 4) = *(&v33 + v21);
  }
  while ( v18 < 792 );
  return result;
}

/* Encrypt */

int Uniper::BufEncryptionECB(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4)
{
  int result; // eax@1
  int v5; // edi@2
  int v6; // esi@2
  unsigned __int32 *v7; // ecx@4
  signed int v8; // ebp@4
  int v9; // edi@4
  signed int v10; // eax@5
  int v11; // edx@6
  signed int v12; // edx@8
  unsigned __int32 *v13; // ebp@8
  signed int v14; // eax@9
  unsigned int v15; // edi@9
  int v16; // ecx@10
  char v17; // zf@12
  unsigned __int32 v18; // [sp+0h] [bp-20h]@4
  unsigned __int32 v19; // [sp+10h] [bp-10h]@8
  int v20; // [sp+28h] [bp+8h]@2
  int v21; // [sp+2Ch] [bp+Ch]@2

  result = a2 / 16;
  if ( a2 / 16 > 0 )
  {
    v5 = a1 - a3;
    v6 = (int)a3;
    v21 = a1 - a3;
    v20 = a2 / 16;
    while ( 1 )
    {
      v7 = &v18;
      v9 = v6 + v5;
      v8 = 4;
      do
      {
        v10 = 0;
        do
        {
          v11 = (*v7 << 8) ^ *(_BYTE *)(v9 + v10++);
          *v7 = v11;
        }
        while ( v10 < 4 );
        ++v7;
        v9 += 4;
        --v8;
      }
      while ( v8 );
      encryption((unsigned long*)v18, (unsigned long*)v19, a4);
      v13 = &v19;
      v12 = 4;
      do
      {
        v15 = *v13;
        v14 = 0;
        do
        {
          v16 = 24 - v14;
          v14 += 8;
          ++v6;
          *(_BYTE *)(v6 - 1) = v15 >> v16;
        }
        while ( v14 < 32 );
        ++v13;
        --v12;
      }
      while ( v12 );
      result = v20 - 1;
      v17 = v20-- == 1;
      if ( v17 )
        break;
      v5 = v21;
    }
  }
  return result;
}

int Uniper::BufEncryptionCBC(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4)
{
  int result; // eax@1
  int v5; // esi@2
  signed int v6; // ecx@3
  int v7; // edi@3
  signed int v8; // eax@4
  int v9; // edx@5
  signed int v10; // ebp@7
  signed int v11; // eax@8
  unsigned int v12; // edi@8
  int v13; // ecx@9
  unsigned __int32 v15; // [sp+0h] [bp-30h]@1
  int v16; // [sp+4h] [bp-2Ch]@1
  int v17; // [sp+8h] [bp-28h]@1
  int v18; // [sp+Ch] [bp-24h]@1
  int v19; // [sp+10h] [bp-20h]@5
  unsigned __int32 v20; // [sp+20h] [bp-10h]@7
  int v21; // [sp+38h] [bp+8h]@2

  v15 = 305419896;
  v16 = 1450727032;
  v17 = -1698933128;
  result = a2 / 16;
  v18 = -553691528;
  if ( a2 / 16 > 0 )
  {
    v5 = (int)a3;
    v21 = a2 / 16;
    do
    {
      v7 = a1 - a3 + v5;
      v6 = 0;
      do
      {
        v8 = 0;
        do
        {
          v9 = (*(int *)((char *)&v19 + v6) << 8) ^ *(_BYTE *)(v7 + v8++);
          *(int *)((char *)&v19 + v6) = v9;
        }
        while ( v8 < 4 );
        v7 += 4;
        *(unsigned __int32 *)((char *)&v15 + v6) ^= v9;
        v6 += 4;
      }
      while ( v6 < 16 );
      encryption((unsigned long*)v15, (unsigned long*)v20, a4);
      v10 = 0;
      do
      {
        v12 = *(unsigned __int32 *)((char *)&v20 + v10);
        v11 = 0;
        *(unsigned __int32 *)((char *)&v15 + v10) = v12;
        do
        {
          v13 = 24 - v11;
          v11 += 8;
          ++v5;
          *(_BYTE *)(v5 - 1) = v12 >> v13;
        }
        while ( v11 < 32 );
        v10 += 4;
      }
      while ( v10 < 16 );
      result = v21 - 1;
    }
    while ( v21-- != 1 );
  }
  return result;
}

void Uniper::BufEncryptionCFB(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4)
{
	char v4; // zf@1
  int v5; // ecx@1
  int v6; // edi@1
  int v7; // esi@1
  char v8; // sf@1
  int v9; // ebp@5
  int v10; // esi@5
  int *v11; // ecx@7
  signed int v12; // edi@7
  int v13; // esi@7
  signed int v14; // eax@8
  int v15; // edx@9
  signed int v16; // ebp@11
  int v17; // edi@11
  signed int v18; // eax@12
  unsigned __int32 v19; // esi@12
  int v20; // ecx@13
  char v21; // zf@15
  int v22; // ebp@18
  int v23; // esi@18
  int *v24; // ecx@20
  signed int v25; // edi@20
  int v26; // esi@20
  signed int v27; // eax@21
  int v28; // edx@22
  signed int v29; // ebp@24
  int v30; // edi@24
  signed int v31; // eax@25
  unsigned __int32 v32; // esi@25
  int v33; // ecx@26
  char v34; // zf@28
  int v35; // ebx@30
  int v36; // esi@30
  int v37; // ecx@32
  int v38; // edi@32
  int *v39; // esi@32
  signed int v40; // eax@33
  int v41; // edx@34
  int v42; // ebp@37
  int v43; // edi@38
  signed int v44; // eax@39
  unsigned __int32 v45; // esi@39
  int v46; // ecx@40
  int v47; // ecx@44
  int v48; // edi@44
  int *v49; // esi@44
  signed int v50; // eax@45
  int v51; // edx@46
  int v52; // eax@49
  int v53; // ecx@50
  int v54; // ebp@51
  int v55; // edi@52
  signed int v56; // eax@53
  unsigned __int32 v57; // esi@53
  int v58; // ecx@54
  int v59; // eax@56
  unsigned __int32 v60; // edi@56
  int v61; // esi@57
  int v62; // ecx@58
  int v63; // [sp+10h] [bp-3Ch]@5
  int v64; // [sp+14h] [bp-38h]@18
  int v65; // [sp+14h] [bp-38h]@30
  int v66; // [sp+18h] [bp-34h]@3
  int v67; // [sp+1Ch] [bp-30h]@1
  int v68; // [sp+20h] [bp-2Ch]@1
  int v69; // [sp+24h] [bp-28h]@1
  int v70; // [sp+28h] [bp-24h]@1
  unsigned __int32 v71; // [sp+2Ch] [bp-20h]@1
  int v72; // [sp+30h] [bp-1Ch]@1
  int v73; // [sp+34h] [bp-18h]@1
  int v74; // [sp+38h] [bp-14h]@1
  unsigned __int32 v75; // [sp+3Ch] [bp-10h]@1
  int v76; // [sp+40h] [bp-Ch]@1
  int v77; // [sp+44h] [bp-8h]@1
  int v78; // [sp+48h] [bp-4h]@1
  int v79; // [sp+50h] [bp+4h]@5
  int v80; // [sp+54h] [bp+8h]@1

  v5 = 0;
  v75 = 305419896;
  v76 = 1450727032;
  v6 = a2 / 16;
  v7 = a2 & 0x8000000F;
  v4 = (a2 & 0x8000000F) == 0;
  v8 = (a2 & 0x8000000F) < 0;
  v77 = -1698933128;
  v78 = -553691528;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v80 = a2 / 16;
  if ( v8 )
  {
    v7 = ((v7 - 1) | 0xFFFFFFF0) + 1;
    v4 = v7 == 0;
  }
  v66 = v7;
  if ( v4 )
  {
    if ( v6 > 0 )
    {
      v10 = a1 - a3;
      v9 = (int)a3;
      v63 = a1 - a3;
      v79 = v6;
      while ( 1 )
      {
        v11 = &v67;
        v13 = v9 + v10;
        v12 = 4;
        do
        {
          v14 = 0;
          do
          {
            v15 = (*v11 << 8) ^ *(_BYTE *)(v13 + v14++);
            *v11 = v15;
          }
          while ( v14 < 4 );
          ++v11;
          v13 += 4;
          --v12;
        }
        while ( v12 );
        encryption((unsigned long*)v75, (unsigned long*)v71, a4);
        v17 = v9;
        v16 = 0;
        do
        {
          v19 = *(int *)((char *)&v67 + v16) ^ *(unsigned __int32 *)((char *)&v71 + v16);
          v18 = 0;
          *(unsigned __int32 *)((char *)&v75 + v16) = v19;
          do
          {
            v20 = 24 - v18;
            v18 += 8;
            ++v17;
            *(_BYTE *)(v17 - 1) = v19 >> v20;
          }
          while ( v18 < 32 );
          v16 += 4;
        }
        while ( v16 < 16 );
        v9 = v17;
        v21 = v79-- == 1;
        if ( v21 )
          break;
        v10 = v63;
      }
    }
  }
  else
  {
    if ( v6 > 0 )
    {
      v23 = a1 - a3;
      v22 = (int)a3;
      v64 = v6;
      while ( 1 )
      {
        v24 = &v67;
        v26 = v22 + v23;
        v25 = 4;
        do
        {
          v27 = 0;
          do
          {
            v28 = (*v24 << 8) ^ *(_BYTE *)(v26 + v27++);
            *v24 = v28;
          }
          while ( v27 < 4 );
          ++v24;
          v26 += 4;
          --v25;
        }
        while ( v25 );
        encryption((unsigned long*)v75, (unsigned long*)v71, a4);
        v30 = v22;
        v29 = 0;
        do
        {
          v32 = *(int *)((char *)&v67 + v29) ^ *(unsigned __int32 *)((char *)&v71 + v29);
          v31 = 0;
          *(unsigned __int32 *)((char *)&v75 + v29) = v32;
          do
          {
            v33 = 24 - v31;
            v31 += 8;
            ++v30;
            *(_BYTE *)(v30 - 1) = v32 >> v33;
          }
          while ( v31 < 32 );
          v29 += 4;
        }
        while ( v29 < 16 );
        v22 = v30;
        v34 = v64-- == 1;
        if ( v34 )
          break;
        v23 = a1 - a3;
      }
      v6 = v80;
      v7 = v66;
      v5 = 0;
    }
    v35 = v7 / 4;
    v36 = v7 % 4;
    v65 = v36;
    if ( v36 )
    {
      if ( v35 > v5 )
      {
        v49 = &v67;
        v47 = (int)(a1 + 16 * v6);
        v48 = v35;
        do
        {
          v50 = 0;
          do
          {
            v51 = (*v49 << 8) ^ *(_BYTE *)(v47 + v50++);
            *v49 = v51;
          }
          while ( v50 < 4 );
          ++v49;
          v47 += 4;
          --v48;
        }
        while ( v48 );
        v6 = v80;
        v36 = v65;
        v5 = 0;
      }
      v52 = 0;
      if ( v36 > v5 )
      {
        do
        {
          v53 = (*(&v67 + v35) << 8) ^ *(_BYTE *)(v52++ + a1 + 4 * (v35 + 4 * v6));
          *(&v67 + v35) = v53;
        }
        while ( v52 < v36 );
      }
      *(&v67 + v35) <<= 32 - 8 * v36;
      encryption((unsigned long*)v75, (unsigned long*)v71, a4);
      v54 = 0;
      if ( v35 > 0 )
      {
        v55 = (int)(a3 + 16 * v6);
        do
        {
          v57 = *(&v67 + v54) ^ *(&v71 + v54);
          v56 = 0;
          *(&v75 + v54) = v57;
          do
          {
            v58 = 24 - v56;
            v56 += 8;
            ++v55;
            *(_BYTE *)(v55 - 1) = v57 >> v58;
          }
          while ( v56 < 32 );
          ++v54;
        }
        while ( v54 < v35 );
      }
      v60 = *(&v67 + v35) ^ *(&v71 + v35);
      v59 = 0;
      *(&v75 + v35) = v60;
      if ( v65 > 0 )
      {
        v61 = 0;
        do
        {
          v62 = 24 - v61;
          v61 += 8;
          ++v59;
          *(_BYTE *)(a3 + 4 * (v35 + 4 * v80) - 1 + v59) = v60 >> v62;
        }
        while ( v59 < v65 );
      }
    }
    else
    {
      if ( v35 > v5 )
      {
        v39 = &v67;
        v37 = (int)(a1 + 16 * v6);
        v38 = v35;
        do
        {
          v40 = 0;
          do
          {
            v41 = (*v39 << 8) ^ *(_BYTE *)(v37 + v40++);
            *v39 = v41;
          }
          while ( v40 < 4 );
          ++v39;
          v37 += 4;
          --v38;
        }
        while ( v38 );
        v6 = v80;
      }
      encryption((unsigned long*)v75, (unsigned long*)v71, a4);
      v42 = 0;
      if ( v35 > 0 )
      {
        v43 = (int)(a3 + 16 * v6);
        do
        {
          v45 = *(&v67 + v42) ^ *(&v71 + v42);
          v44 = 0;
          *(&v75 + v42) = v45;
          do
          {
            v46 = 24 - v44;
            v44 += 8;
            ++v43;
            *(_BYTE *)(v43 - 1) = v45 >> v46;
          }
          while ( v44 < 32 );
          ++v42;
        }
        while ( v42 < v35 );
      }
    }
  }
}

void Uniper::BufEncryptionOFB(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4)
{
	char v4; // zf@1
  int v5; // ebp@1
  int v6; // esi@1
  char v7; // sf@1
  int v8; // edi@5
  int v9; // esi@5
  int v10; // ecx@7
  signed int v11; // ebp@7
  int v12; // edi@7
  signed int v13; // eax@8
  int v14; // edx@9
  signed int v15; // edi@11
  signed int v16; // eax@12
  unsigned __int32 v17; // eax@12
  int v18; // ebp@12
  int v19; // ecx@13
  char v20; // zf@15
  int v21; // edi@18
  int v22; // esi@18
  int v23; // ecx@20
  signed int v24; // ebp@20
  int v25; // edi@20
  signed int v26; // eax@21
  int v27; // edx@22
  signed int v28; // edi@24
  signed int v29; // eax@25
  unsigned __int32 v30; // eax@25
  int v31; // ebp@25
  int v32; // ecx@26
  char v33; // zf@28
  int v34; // ebx@30
  int v35; // esi@30
  int v36; // ecx@32
  int v37; // edi@32
  int v38; // esi@32
  signed int v39; // eax@33
  int v40; // edx@34
  int v41; // ebp@36
  int v42; // esi@37
  signed int v43; // eax@38
  unsigned __int32 v44; // eax@38
  int v45; // edi@38
  int v46; // ecx@39
  int v47; // ecx@43
  int v48; // edi@43
  int v49; // esi@43
  signed int v50; // eax@44
  int v51; // edx@45
  int i; // eax@48
  int v53; // ecx@49
  int v54; // edi@50
  int v55; // esi@51
  signed int v56; // eax@52
  unsigned __int32 v57; // eax@52
  int v58; // ebp@52
  int v59; // ecx@53
  int v60; // eax@56
  unsigned __int32 v61; // edi@56
  int v62; // ebp@57
  int v63; // esi@57
  int v64; // ecx@58
  int v65; // [sp+10h] [bp-4Ch]@5
  int v66; // [sp+10h] [bp-4Ch]@30
  int v67; // [sp+14h] [bp-48h]@18
  int v68; // [sp+18h] [bp-44h]@3
  int v69[4]; // [sp+1Ch] [bp-40h]@7
  unsigned __int32 v70; // [sp+2Ch] [bp-30h]@1
  int v71; // [sp+30h] [bp-2Ch]@1
  int v72; // [sp+34h] [bp-28h]@1
  int v73; // [sp+38h] [bp-24h]@1
  unsigned __int32 v74[4]; // [sp+3Ch] [bp-20h]@11
  int v75[4]; // [sp+4Ch] [bp-10h]@12
  int v76; // [sp+60h] [bp+4h]@5
  int v77; // [sp+64h] [bp+8h]@1

  v70 = 305419896;
  v71 = 1450727032;
  v72 = -1698933128;
  v5 = a2 / 16;
  v6 = a2 & 0x8000000F;
  v4 = (a2 & 0x8000000F) == 0;
  v7 = (a2 & 0x8000000F) < 0;
  v73 = -553691528;
  v77 = a2 / 16;
  if ( v7 )
  {
    v6 = ((v6 - 1) | 0xFFFFFFF0) + 1;
    v4 = v6 == 0;
  }
  v68 = v6;
  if ( v4 )
  {
    if ( v5 > 0 )
    {
      v8 = a1 - a3;
      v9 = (int)a3;
      v65 = a1 - a3;
      v76 = v5;
      while ( 1 )
      {
        v10 = (int)v69;
        v12 = v9 + v8;
        v11 = 4;
        do
        {
          v13 = 0;
          do
          {
            v14 = (*(_DWORD *)v10 << 8) ^ *(_BYTE *)(v12 + v13++);
            *(_DWORD *)v10 = v14;
          }
          while ( v13 < 4 );
          v10 += 4;
          v12 += 4;
          --v11;
        }
        while ( v11 );
        encryption((unsigned long*)v70, (unsigned long*)v74, a4);
        v15 = 0;
        do
        {
          v17 = *(unsigned __int32 *)((char *)v74 + v15);
          v18 = v17 ^ *(int *)((char *)v69 + v15);
          *(unsigned __int32 *)((char *)&v70 + v15) = v17;
          *(int *)((char *)v75 + v15) = v18;
          v16 = 0;
          do
          {
            v19 = 24 - v16;
            v16 += 8;
            ++v9;
            *(_BYTE *)(v9 - 1) = (unsigned int)v18 >> v19;
          }
          while ( v16 < 32 );
          v15 += 4;
        }
        while ( v15 < 16 );
        v20 = v76-- == 1;
        if ( v20 )
          break;
        v8 = v65;
      }
    }
  }
  else
  {
    if ( v5 > 0 )
    {
      v21 = a1 - a3;
      v22 = (int)a3;
      v67 = v5;
      while ( 1 )
      {
        v23 = (int)v69;
        v25 = v22 + v21;
        v24 = 4;
        do
        {
          v26 = 0;
          do
          {
            v27 = (*(_DWORD *)v23 << 8) ^ *(_BYTE *)(v25 + v26++);
            *(_DWORD *)v23 = v27;
          }
          while ( v26 < 4 );
          v23 += 4;
          v25 += 4;
          --v24;
        }
        while ( v24 );
        encryption((unsigned long*)v70, (unsigned long*)v74, a4);
        v28 = 0;
        do
        {
          v30 = *(unsigned __int32 *)((char *)v74 + v28);
          v31 = v30 ^ *(int *)((char *)v69 + v28);
          *(unsigned __int32 *)((char *)&v70 + v28) = v30;
          *(int *)((char *)v75 + v28) = v31;
          v29 = 0;
          do
          {
            v32 = 24 - v29;
            v29 += 8;
            ++v22;
            *(_BYTE *)(v22 - 1) = (unsigned int)v31 >> v32;
          }
          while ( v29 < 32 );
          v28 += 4;
        }
        while ( v28 < 16 );
        v33 = v67-- == 1;
        if ( v33 )
          break;
        v21 = a1 - a3;
      }
      v5 = v77;
      v6 = v68;
    }
    v34 = v6 / 4;
    v35 = v6 % 4;
    v66 = v35;
    if ( v35 )
    {
      if ( v34 > 0 )
      {
        v49 = (int)v69;
        v47 = (int)(a1 + 16 * v5);
        v48 = v34;
        do
        {
          v50 = 0;
          do
          {
            v51 = (*(_DWORD *)v49 << 8) ^ *(_BYTE *)(v47 + v50++);
            *(_DWORD *)v49 = v51;
          }
          while ( v50 < 4 );
          v49 += 4;
          v47 += 4;
          --v48;
        }
        while ( v48 );
        v5 = v77;
        v35 = v66;
      }
      for ( i = 0; i < v35; v69[v34] = v53 )
        v53 = (v69[v34] << 8) ^ *(_BYTE *)(a1 + 4 * (v34 + 4 * v5) + i++);
      v69[v34] <<= 32 - 8 * v35;
      encryption((unsigned long*)v70, (unsigned long*)v74, a4);
      v54 = 0;
      if ( v34 > 0 )
      {
        v55 = (int)(a3 + 16 * v5);
        do
        {
          v57 = v74[v54];
          v58 = v57 ^ v69[v54];
          *(&v70 + v54) = v57;
          v75[v54] = v58;
          v56 = 0;
          do
          {
            v59 = 24 - v56;
            v56 += 8;
            ++v55;
            *(_BYTE *)(v55 - 1) = (unsigned int)v58 >> v59;
          }
          while ( v56 < 32 );
          ++v54;
        }
        while ( v54 < v34 );
        v5 = v77;
        v35 = v66;
      }
      v61 = v69[v34] ^ v74[v34];
      v60 = 0;
      v75[v34] = v61;
      if ( v35 > 0 )
      {
        v63 = 0;
        v62 = (int)a3 + 4 * (v34 + 4 * v5);
        do
        {
          v64 = 24 - v63;
          v63 += 8;
          ++v60;
          *(_BYTE *)(v62 - 1 + v60) = v61 >> v64;
        }
        while ( v60 < v66 );
      }
    }
    else
    {
      if ( v34 > 0 )
      {
        v38 = (int)v69;
        v36 = (int)a1 + 16 * v5;
        v37 = v34;
        do
        {
          v39 = 0;
          do
          {
            v40 = (*(_DWORD *)v38 << 8) ^ *(_BYTE *)(v36 + v39++);
            *(_DWORD *)v38 = v40;
          }
          while ( v39 < 4 );
          v38 += 4;
          v36 += 4;
          --v37;
        }
        while ( v37 );
      }
      encryption((unsigned long*)v70, (unsigned long*)v74, a4);
      v41 = 0;
      if ( v34 > 0 )
      {
        v42 = (int)a3 + 16 * v77;
        do
        {
          v44 = v74[v41];
          v45 = v44 ^ v69[v41];
          *(&v70 + v41) = v44;
          v75[v41] = v45;
          v43 = 0;
          do
          {
            v46 = 24 - v43;
            v43 += 8;
            ++v42;
            *(_BYTE *)(v42 - 1) = (unsigned int)v45 >> v46;
          }
          while ( v43 < 32 );
          ++v41;
        }
        while ( v41 < v34 );
      }
    }
  }
}

unsigned __int32 Uniper::encryption(unsigned long *a1, unsigned long *a2, unsigned long *a3)
{
	unsigned __int32 result; // eax@1
  unsigned __int32 *v4; // esi@1
  unsigned __int32 *v5; // edi@1
  unsigned __int32 v6; // ebp@1
  int v7; // ST1C_4@1
  unsigned int v8; // ecx@1
  unsigned int v9; // edx@1
  unsigned __int32 v10; // eax@1
  int v11; // ecx@1
  unsigned int v12; // edi@1
  unsigned int v13; // eax@1
  int v14; // ST18_4@1
  int v15; // ecx@1
  unsigned int v16; // edi@1
  unsigned int v17; // ST18_4@1
  int v18; // ecx@1
  unsigned int v19; // edi@1
  int v20; // ST14_4@1
  int v21; // ST1C_4@1
  unsigned int v22; // edi@1
  unsigned int v23; // ST14_4@1
  int v24; // ebx@1
  int v25; // eax@1
  unsigned int v26; // edi@1
  int v27; // edx@1
  int v28; // ST1C_4@1
  unsigned int v29; // edi@1
  unsigned int v30; // edx@1
  int v31; // ebp@1
  int v32; // eax@1
  unsigned int v33; // edi@1
  int v34; // eax@1
  int v35; // ebp@1
  int v36; // edx@1
  int v37; // eax@1
  int v38; // ebp@1
  unsigned int v39; // edi@1
  unsigned int v40; // ebx@1
  int v41; // eax@1
  int v42; // edi@1
  int v43; // ebp@1
  unsigned int v44; // ebx@1
  int v45; // edi@1
  int v46; // eax@1
  int v47; // edi@1
  int v48; // edx@1
  int v49; // eax@1
  int v50; // edx@1
  int v51; // edi@1
  unsigned int v52; // ebx@1
  unsigned int v53; // ebp@1
  int v54; // edx@1
  int v55; // ebx@1
  int v56; // edi@1
  unsigned int v57; // ebp@1
  int v58; // ebx@1
  int v59; // edx@1
  int v60; // ebx@1
  int v61; // eax@1
  int v62; // edx@1
  unsigned int v63; // ebp@1
  int v64; // eax@1
  int v65; // ebx@1
  int v66; // eax@1
  int v67; // edi@1
  int v68; // ebx@1
  unsigned int v69; // ebp@1
  int v70; // edi@1
  int v71; // eax@1
  int v72; // edi@1
  int v73; // edx@1
  int v74; // eax@1
  unsigned int v75; // ebp@1
  int v76; // edx@1
  int v77; // edi@1
  int v78; // edx@1
  int v79; // ebx@1
  int v80; // edi@1
  unsigned int v81; // ebp@1
  int v82; // ebx@1
  int v83; // edx@1
  int v84; // ebx@1
  int v85; // eax@1
  int v86; // edx@1
  unsigned int v87; // ebp@1
  int v88; // eax@1
  int v89; // ebx@1
  int v90; // eax@1
  int v91; // edi@1
  int v92; // ebx@1
  unsigned int v93; // ebp@1
  int v94; // edi@1
  int v95; // eax@1
  int v96; // edi@1
  int v97; // edx@1
  char v98; // ST10_1@1
  int v99; // eax@1
  unsigned int v100; // ebp@1
  int v101; // edx@1
  int v102; // edi@1
  int v103; // edx@1
  int v104; // ebx@1
  int v105; // edi@1
  unsigned int v106; // ST14_4@1
  int v107; // ebx@1
  int v108; // edx@1
  unsigned int v109; // ebp@1
  unsigned int v110; // eax@1
  int v111; // ebx@1
  int v112; // ebp@1
  int v113; // edx@1
  unsigned int v114; // eax@1
  int v115; // ebp@1
  int v116; // ebx@1
  int v117; // ebp@1
  int v118; // edi@1
  int v119; // ebx@1
  unsigned int v120; // eax@1
  unsigned int v121; // ST18_4@1
  int v122; // edi@1
  int v123; // ebp@1
  unsigned int v124; // eax@1
  unsigned int v125; // edx@1
  int v126; // edi@1
  int v127; // eax@1
  int v128; // ebp@1
  unsigned int v129; // edx@1
  int v130; // eax@1
  int v131; // edi@1
  int v132; // eax@1
  int v133; // ebx@1
  int v134; // edi@1
  unsigned int v135; // edx@1
  unsigned int v136; // eax@1
  int v137; // ebp@1
  int v138; // ST14_4@1
  unsigned int v139; // ebx@1
  int v140; // edi@1
  unsigned int v141; // ebp@1
  int v142; // ebx@1
  int v143; // edi@1
  int v144; // edi@1
  int v145; // ecx@1
  unsigned int v146; // ebp@1
  int v147; // eax@1
  int v148; // ST14_4@1
  int v149; // edi@1
  int v150; // ecx@1
  unsigned int v151; // ebp@1
  int v152; // edx@1
  int v153; // edi@1
  unsigned int v154; // edi@1
  unsigned int v155; // ST18_4@1
  int v156; // ebp@1
  int v157; // eax@1
  unsigned int v158; // edi@1
  int v159; // ebp@1
  int v160; // edx@1
  int v161; // eax@1
  unsigned int v162; // edi@1
  int v163; // edx@1
  int v164; // ST18_4@1
  int v165; // ST14_4@1
  int v166; // edi@1
  unsigned int v167; // edi@1
  int v168; // eax@1
  int v169; // ST1C_4@1
  unsigned int v170; // eax@1
  unsigned int v171; // [sp+24h] [bp+4h]@1
  int v172; // [sp+24h] [bp+4h]@1
  unsigned int v173; // [sp+24h] [bp+4h]@1
  unsigned int v174; // [sp+24h] [bp+4h]@1
  int v175; // [sp+24h] [bp+4h]@1
  int v176; // [sp+24h] [bp+4h]@1
  int v177; // [sp+24h] [bp+4h]@1
  unsigned int v178; // [sp+2Ch] [bp+Ch]@1
  unsigned int v179; // [sp+2Ch] [bp+Ch]@1
  int v180; // [sp+2Ch] [bp+Ch]@1
  int v181; // [sp+2Ch] [bp+Ch]@1

  v4 = (unsigned int*)a3;
  v5 = (unsigned int*)a1;
  v6 = a3[3] ^ a1[3];
  v171 = *a3 + *a1;
  v7 = SS3[(unsigned __int8)v171] ^ SS0[v171 >> 24] ^ SS2[BYTE1(v171)] ^ SS1[BYTE2(v171)];
  v8 = (unsigned int)(&S1)[(unsigned __int8)v7] ^ ((S0[BYTE1(v7)] ^ (((S0[(unsigned int)v7 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v7)]) << 8)) << 8);
  v9 = v8 + (a3[1] ^ v5[1]);
  v10 = v8 ^ (a3[2] + v5[2]);
  v11 = SS3[(unsigned __int8)v9] ^ SS0[v9 >> 24] ^ SS2[BYTE1(v9)] ^ SS1[BYTE2(v9)];
  v12 = (unsigned int)(&S1)[(unsigned __int8)v11] ^ ((S0[BYTE1(v11)] ^ (((S0[(unsigned int)v11 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v11)]) << 8)) << 8);
  v13 = v12 + v10;
  v14 = v12 ^ ((v6 << (v171 & 0x1F)) | (v6 >> (32 - (v171 & 0x1F))));
  v15 = SS3[(unsigned __int8)v13] ^ SS0[v13 >> 24] ^ SS2[BYTE1(v13)] ^ SS1[BYTE2(v13)];
  v16 = (unsigned int)(&S1)[(unsigned __int8)v15] ^ ((S0[BYTE1(v15)] ^ (((S0[(unsigned int)v15 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v15)]) << 8)) << 8);
  v17 = v16 + v14;
  v172 = v16 ^ ((v171 << (v9 & 0x1F)) | (v171 >> (32 - (v9 & 0x1F))));
  v18 = SS3[(unsigned __int8)v17] ^ SS0[v17 >> 24] ^ SS2[BYTE1(v17)] ^ SS1[BYTE2(v17)];
  v19 = (unsigned int)(&S1)[(unsigned __int8)v18] ^ ((S0[BYTE1(v18)] ^ (((S0[(unsigned int)v18 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v18)]) << 8)) << 8);
  v173 = v19 + v172;
  v20 = v19 ^ ((v9 << (v13 & 0x1F)) | (v9 >> (32 - (v13 & 0x1F))));
  v21 = SS3[(unsigned __int8)v173] ^ SS0[v173 >> 24] ^ SS2[BYTE1(v173)] ^ SS1[BYTE2(v173)];
  v22 = (unsigned int)(&S1)[(unsigned __int8)v21] ^ ((S0[BYTE1(v21)] ^ (((S0[(unsigned int)v21 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v21)]) << 8)) << 8);
  v23 = v22 + v20;
  v24 = v22 ^ ((v13 << (v17 & 0x1F)) | (v13 >> (32 - (v17 & 0x1F))));
  v25 = SS3[(unsigned __int8)v23] ^ SS0[v23 >> 24] ^ SS2[BYTE1(v23)] ^ SS1[BYTE2(v23)];
  v26 = (unsigned int)(&S1)[(unsigned __int8)v25] ^ ((S0[BYTE1(v25)] ^ (((S0[(unsigned int)v25 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v25)]) << 8)) << 8);
  v178 = v26 + v24;
  v27 = v26 ^ ((v17 << (v173 & 0x1F)) | (v17 >> (32 - (v173 & 0x1F))));
  v28 = SS3[(unsigned __int8)v178] ^ SS0[v178 >> 24] ^ SS2[BYTE1(v178)] ^ SS1[BYTE2(v178)];
  LOBYTE(v24) = (LOBYTE((&S1)[(unsigned __int8)v25]) + v24) & 0x1F;
  v29 = (unsigned int)(&S1)[(unsigned __int8)v28] ^ ((S0[BYTE1(v28)] ^ (((S0[(unsigned int)v28 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v28)]) << 8)) << 8);
  v30 = v29 + v27;
  v31 = v29 ^ ((v173 << (v23 & 0x1F)) | (v173 >> (32 - (v23 & 0x1F))));
  v32 = SS3[(unsigned __int8)v30] ^ SS0[v30 >> 24] ^ SS2[BYTE1(v30)] ^ SS1[BYTE2(v30)];
  v33 = (unsigned int)(&S1)[(unsigned __int8)v32] ^ ((S0[BYTE1(v32)] ^ (((S0[(unsigned int)v32 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v32)]) << 8)) << 8);
  v34 = v4[5] + (v33 ^ ((v23 << v24) | (v23 >> (32 - v24))));
  v35 = v4[4] ^ (v33 + v31);
  LOBYTE(v33) = v30 & 0x1F;
  v36 = v34 ^ v30;
  v179 = v35 + ((v178 << v33) | (v178 >> (32 - (_BYTE)v33)));
  v37 = (v36 + v179) ^ v34;
  v38 = v179 + 2 * v36 + v35;
  v39 = v179 >> (32 - (v37 & 0x1Fu));
  v40 = v179 << (v37 & 0x1F);
  v41 = v4[8] ^ v37;
  v42 = v4[9] + (v4[6] ^ (v40 | v39));
  LOBYTE(v40) = v38 & 0x1F;
  v43 = v42 ^ v38;
  v44 = v41 + v4[7] + ((v36 << v40) | ((unsigned int)v36 >> (32 - (_BYTE)v40)));
  v45 = (v44 + v43) ^ v42;
  v46 = v44 + 2 * v43 + v41;
  LOBYTE(v36) = v45 & 0x1F;
  v47 = v4[12] ^ v45;
  v48 = v4[13] + (v4[10] ^ ((v44 << v36) | (v44 >> (32 - v36))));
  LOBYTE(v44) = v46 & 0x1F;
  v49 = v48 ^ v46;
  v174 = v47 + v4[11] + ((v43 << v44) | ((unsigned int)v43 >> (32 - (_BYTE)v44)));
  v50 = (v49 + v174) ^ v48;
  v51 = v174 + 2 * v49 + v47;
  v52 = v174 >> (32 - (v50 & 0x1Fu));
  v53 = v174 << (v50 & 0x1F);
  v54 = v4[16] ^ v50;
  v55 = v4[17] + (v4[14] ^ (v53 | v52));
  LOBYTE(v53) = v51 & 0x1F;
  v56 = v55 ^ v51;
  v57 = v54 + v4[15] + ((v49 << v53) | ((unsigned int)v49 >> (32 - (_BYTE)v53)));
  v58 = (v56 + v57) ^ v55;
  v59 = v57 + 2 * v56 + v54;
  LOBYTE(v49) = v58 & 0x1F;
  v60 = v4[20] ^ v58;
  v61 = v4[21] + (v4[18] ^ ((v57 << v49) | (v57 >> (32 - v49))));
  LOBYTE(v57) = v59 & 0x1F;
  v62 = v61 ^ v59;
  v63 = v60 + v4[19] + ((v56 << v57) | ((unsigned int)v56 >> (32 - (_BYTE)v57)));
  v64 = (v62 + v63) ^ v61;
  v65 = v63 + 2 * v62 + v60;
  LOBYTE(v56) = v64 & 0x1F;
  v66 = v4[24] ^ v64;
  v67 = v4[25] + (v4[22] ^ ((v63 << v56) | (v63 >> (32 - v56))));
  LOBYTE(v63) = v65 & 0x1F;
  v68 = v67 ^ v65;
  v69 = v66 + v4[23] + ((v62 << v63) | ((unsigned int)v62 >> (32 - (_BYTE)v63)));
  v70 = (v68 + v69) ^ v67;
  v71 = v69 + 2 * v68 + v66;
  LOBYTE(v62) = v70 & 0x1F;
  v72 = v4[28] ^ v70;
  v73 = v4[29] + (v4[26] ^ ((v69 << v62) | (v69 >> (32 - v62))));
  LOBYTE(v69) = v71 & 0x1F;
  v74 = v73 ^ v71;
  v75 = v72 + v4[27] + ((v68 << v69) | ((unsigned int)v68 >> (32 - (_BYTE)v69)));
  v76 = (v74 + v75) ^ v73;
  v77 = v75 + 2 * v74 + v72;
  LOBYTE(v68) = v76 & 0x1F;
  v78 = v4[32] ^ v76;
  v79 = v4[33] + (v4[30] ^ ((v75 << v68) | (v75 >> (32 - v68))));
  LOBYTE(v75) = v77 & 0x1F;
  v80 = v79 ^ v77;
  v81 = v78 + v4[31] + ((v74 << v75) | ((unsigned int)v74 >> (32 - (_BYTE)v75)));
  v82 = (v80 + v81) ^ v79;
  v83 = v81 + 2 * v80 + v78;
  LOBYTE(v74) = v82 & 0x1F;
  v84 = v4[36] ^ v82;
  v85 = v4[37] + (v4[34] ^ ((v81 << v74) | (v81 >> (32 - v74))));
  LOBYTE(v81) = v83 & 0x1F;
  v86 = v85 ^ v83;
  v87 = v84 + v4[35] + ((v80 << v81) | ((unsigned int)v80 >> (32 - (_BYTE)v81)));
  v88 = (v86 + v87) ^ v85;
  v89 = v87 + 2 * v86 + v84;
  LOBYTE(v80) = v88 & 0x1F;
  v90 = v4[40] ^ v88;
  v91 = v4[41] + (v4[38] ^ ((v87 << v80) | (v87 >> (32 - v80))));
  LOBYTE(v87) = v89 & 0x1F;
  v92 = v91 ^ v89;
  v93 = v90 + v4[39] + ((v86 << v87) | ((unsigned int)v86 >> (32 - (_BYTE)v87)));
  v94 = (v92 + v93) ^ v91;
  v95 = v93 + 2 * v92 + v90;
  LOBYTE(v86) = v94 & 0x1F;
  v96 = v4[44] ^ v94;
  v97 = v4[45] + (v4[42] ^ ((v93 << v86) | (v93 >> (32 - v86))));
  LOBYTE(v93) = v95 & 0x1F;
  v98 = v95 & 0x1F;
  v99 = v97 ^ v95;
  v100 = v96 + v4[43] + ((v92 << v98) | ((unsigned int)v92 >> (32 - (_BYTE)v93)));
  v101 = (v99 + v100) ^ v97;
  v102 = v100 + 2 * v99 + v96;
  LOBYTE(v92) = v101 & 0x1F;
  v103 = v4[48] ^ v101;
  v104 = v4[49] + (v4[46] ^ ((v100 << v92) | (v100 >> (32 - v92))));
  LOBYTE(v100) = v102 & 0x1F;
  v105 = v104 ^ v102;
  v106 = v103 + v4[47] + ((v99 << v100) | ((unsigned int)v99 >> (32 - (_BYTE)v100)));
  v107 = (v105 + v106) ^ v104;
  v108 = v106 + 2 * v105 + v103;
  v109 = v106 >> (32 - (v107 & 0x1Fu));
  v110 = v106 << (v107 & 0x1F);
  v111 = v4[52] ^ v107;
  v112 = v4[53] + (v4[50] ^ (v110 | v109));
  LOBYTE(v110) = v108 & 0x1F;
  v113 = v112 ^ v108;
  v114 = v111 + v4[51] + ((v105 << v110) | ((unsigned int)v105 >> (32 - (_BYTE)v110)));
  v115 = (v113 + v114) ^ v112;
  v116 = v114 + 2 * v113 + v111;
  LOBYTE(v105) = v115 & 0x1F;
  v117 = v4[56] ^ v115;
  v118 = v4[57] + (v4[54] ^ ((v114 << v105) | (v114 >> (32 - v105))));
  LOBYTE(v114) = v116 & 0x1F;
  v119 = v118 ^ v116;
  v120 = v117 + v4[55] + ((v113 << v114) | ((unsigned int)v113 >> (32 - (_BYTE)v114)));
  v121 = v120;
  v122 = (v120 + v119) ^ v118;
  v123 = v120 + 2 * v119 + v117;
  v124 = v120 >> (32 - (v122 & 0x1Fu));
  v125 = v121 << (v122 & 0x1F);
  v126 = v4[60] ^ v122;
  v127 = v4[61] + (v4[58] ^ (v125 | v124));
  LOBYTE(v125) = v123 & 0x1F;
  v128 = v127 ^ v123;
  v129 = v126 + v4[59] + ((v119 << v125) | ((unsigned int)v119 >> (32 - (_BYTE)v125)));
  v130 = (v129 + v128) ^ v127;
  v131 = v129 + 2 * v128 + v126;
  LOBYTE(v119) = v130 & 0x1F;
  v132 = v4[64] ^ v130;
  v133 = v4[65] + (v4[62] ^ ((v129 << v119) | (v129 >> (32 - v119))));
  LOBYTE(v129) = v131 & 0x1F;
  v134 = v133 ^ v131;
  v135 = v132 + v4[63] + ((v128 << v129) | ((unsigned int)v128 >> (32 - (_BYTE)v129)));
  v136 = v135 + 2 * v134 + v132;
  v175 = (v134 + v135) ^ v133;
  v137 = v136 & 0x1F;
  v138 = 32 - v137;
  v139 = v4[67] + ((v134 << (v136 & 0x1F)) | ((unsigned int)v134 >> (32 - v137)));
  v140 = SS3[(unsigned __int8)v136] ^ SS0[v136 >> 24] ^ SS2[BYTE1(v136)] ^ SS1[BYTE2(v136)];
  v141 = (unsigned int)(&S1)[(unsigned __int8)v140] ^ ((S0[BYTE1(v140)] ^ (((S0[(unsigned int)v140 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v140)]) << 8)) << 8);
  v142 = (v139 >> (v136 & 0x1F)) | (v139 << v138);
  v143 = v4[66] ^ ((v135 << (v175 & 0x1F)) | (v135 >> (32 - (v175 & 0x1Fu))));
  v176 = v175 - v141;
  v144 = v141 ^ v143;
  v145 = SS3[(unsigned __int8)v142] ^ SS0[(unsigned int)v142 >> 24] ^ SS2[BYTE1(v142)] ^ SS1[BYTE2(v142)];
  v146 = (unsigned int)(&S1)[(unsigned __int8)v145] ^ ((S0[BYTE1(v145)] ^ (((S0[(unsigned int)v145 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v145)]) << 8)) << 8);
  v147 = v136 - v146;
  v148 = ((unsigned int)v144 >> (v142 & 0x1Fu)) | (v144 << (32 - (v142 & 0x1F)));
  v149 = v146 ^ v176;
  v150 = SS3[(unsigned __int8)v148] ^ SS0[(unsigned int)v148 >> 24] ^ SS2[BYTE1(v148)] ^ SS1[BYTE2(v148)];
  v151 = (unsigned int)(&S1)[(unsigned __int8)v150] ^ ((S0[BYTE1(v150)] ^ (((S0[(unsigned int)v150 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v150)]) << 8)) << 8);
  v152 = ((unsigned int)v149 >> (v148 & 0x1Fu)) | (v149 << (32 - (v148 & 0x1F)));
  v153 = SS3[(unsigned __int8)v152] ^ SS0[(unsigned int)v152 >> 24] ^ SS2[BYTE1(v152)] ^ SS1[BYTE2(v152)];
  v154 = (unsigned int)(&S1)[(unsigned __int8)v153] ^ ((S0[BYTE1(v153)] ^ (((S0[(unsigned int)v153 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v153)]) << 8)) << 8);
  v180 = v154 ^ (v142 - v151);
  v155 = ((v151 ^ v147) >> (v152 & 0x1Fu)) | ((v151 ^ v147) << (32 - (v152 & 0x1F)));
  v156 = v148 - v154;
  v157 = SS3[(unsigned __int8)v155] ^ SS0[v155 >> 24] ^ SS2[BYTE1(v155)] ^ SS1[BYTE2(v155)];
  v158 = (unsigned int)(&S1)[(unsigned __int8)v157] ^ ((S0[BYTE1(v157)] ^ (((S0[(unsigned int)v157 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v157)]) << 8)) << 8);
  v159 = v158 ^ v156;
  v160 = v152 - v158;
  v181 = ((unsigned int)v180 >> (v155 & 0x1F)) | (v180 << (32 - (v155 & 0x1F)));
  v161 = SS3[(unsigned __int8)v181] ^ SS0[(unsigned int)v181 >> 24] ^ SS2[BYTE1(v181)] ^ SS1[BYTE2(v181)];
  v162 = (unsigned int)(&S1)[(unsigned __int8)v161] ^ ((S0[BYTE1(v161)] ^ (((S0[(unsigned int)v161 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v161)]) << 8)) << 8);
  v163 = v162 ^ v160;
  v164 = v155 - v162;
  v165 = ((unsigned int)v159 >> (v181 & 0x1Fu)) | (v159 << (32 - (v181 & 0x1F)));
  v166 = SS3[(unsigned __int8)v165] ^ SS0[(unsigned int)v165 >> 24] ^ SS2[BYTE1(v165)] ^ SS1[BYTE2(v165)];
  v167 = (unsigned int)(&S1)[(unsigned __int8)v166] ^ ((S0[BYTE1(v166)] ^ (((S0[(unsigned int)v166 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v166)]) << 8)) << 8);
  v168 = ((unsigned int)v163 >> (v165 & 0x1Fu)) | (v163 << (32 - (v165 & 0x1F)));
  v177 = v168;
  v169 = SS3[(unsigned __int8)v168] ^ SS0[(unsigned int)v168 >> 24] ^ SS2[BYTE1(v168)] ^ SS1[BYTE2(v168)];
  LOBYTE(v150) = ((unsigned int)v163 >> (v165 & 0x1Fu)) | ((_BYTE)v163 << (32 - (v165 & 0x1F)));
  v170 = (unsigned int)(&S1)[(unsigned __int8)v169] ^ ((S0[BYTE1(v169)] ^ (((S0[(unsigned int)v169 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v169)]) << 8)) << 8);
  *a2 = v177 - v4[68];
  a2[1] = v4[69] ^ (v165 - v170);
  a2[2] = ((v181 - v167) ^ v170) - v4[70];
  result = v4[71];
  a2[3] = result ^ (((v167 ^ v164) >> (v150 & 0x1Fu)) | ((v167 ^ v164) << (32 - (v150 & 0x1F))));
  return result;
}

signed int Uniper::UniperEncFunc(unsigned char *OutBuffer, int Size, unsigned char *Key, unsigned int KeySize, int Mode)
{
  void *InBuffer; // ebx@1
  signed int result; // eax@2
  unsigned int i; // ecx@3
  unsigned int v8; // edi@3
  unsigned __int32 v9; // [sp+8h] [bp-130h]@6
  int v10; // [sp+Ch] [bp-12Ch]@6
  int v11; // [sp+10h] [bp-128h]@6
  int v12; // [sp+14h] [bp-124h]@6
  unsigned __int32 v13; // [sp+18h] [bp-120h]@6
  int v14; // [sp+1Ch] [bp-11Ch]@6
  char v15; // [sp+20h] [bp-118h]@6

  InBuffer = malloc(Size);
  if ( InBuffer )
  {
    memset(InBuffer, 0, 4 * (Size >> 2));
    v8 = (unsigned int)((char *)InBuffer + 4 * (Size >> 2));
    for ( i = Size & 3; i; --i )
      *(_BYTE *)v8++ = 0;
    v13 = 0;
    v14 = 0;
    v9 = 0;
    memset(&v15, 0, 0x118u);
    v10 = 0;
    v11 = 0;
    v12 = 0;
    memcpy(&v9, Key, KeySize);
    SetSubKey(v9, v13);
    switch ( Mode )
    {
      case UNIPER_MODE_CBC:
        BufEncryptionECB(OutBuffer, Size, (unsigned char*)InBuffer, (unsigned long*)v13);
        break;
      case UNIPER_MODE_CFB:
        BufEncryptionCBC(OutBuffer, Size, (unsigned char*)InBuffer, (unsigned long*)v13);
        break;
      case UNIPER_MODE_ECB:
        BufEncryptionCFB(OutBuffer, Size, (unsigned char*)InBuffer, (unsigned long*)v13);
        break;
      case UNIPER_MODE_OFB:
        BufEncryptionOFB(OutBuffer, Size, (unsigned char*)InBuffer, (unsigned long*)v13);
        break;
      default:
        break;
    }
    memcpy((void *)OutBuffer, InBuffer, Size);
    free(InBuffer);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}

/* Decrypt */

unsigned __int32 __cdecl Uniper::decryption(unsigned long *a1, unsigned long *a2, unsigned long *a3)
{
  unsigned __int32 result; // eax@1
  unsigned __int32 *v4; // esi@1
  unsigned __int32 v5; // ebp@1
  unsigned int v6; // ST14_4@1
  unsigned int v7; // ecx@1
  unsigned int v8; // edx@1
  unsigned __int32 v9; // eax@1
  int v10; // ecx@1
  unsigned int v11; // edi@1
  unsigned int v12; // eax@1
  int v13; // ST18_4@1
  int v14; // ecx@1
  unsigned int v15; // edi@1
  unsigned int v16; // ST18_4@1
  int v17; // ST14_4@1
  int v18; // ecx@1
  unsigned int v19; // edi@1
  unsigned int v20; // ST14_4@1
  int v21; // ST10_4@1
  unsigned int v22; // edi@1
  unsigned int v23; // ST10_4@1
  int v24; // edx@1
  unsigned int v25; // edi@1
  unsigned int v26; // edx@1
  int v27; // eax@1
  unsigned int v28; // edi@1
  unsigned int v29; // eax@1
  int v30; // ebp@1
  int v31; // edi@1
  unsigned int v32; // edi@1
  int v33; // ebp@1
  int v34; // edi@1
  unsigned int v35; // ebx@1
  int v36; // edx@1
  unsigned int v37; // ebx@1
  int v38; // eax@1
  int v39; // ebp@1
  int v40; // edx@1
  unsigned int v41; // ebx@1
  int v42; // eax@1
  int v43; // edi@1
  int v44; // ebx@1
  int v45; // ebp@1
  int v46; // edx@1
  int v47; // eax@1
  int v48; // edi@1
  unsigned int v49; // ebp@1
  int v50; // edx@1
  int v51; // ebx@1
  int v52; // eax@1
  int v53; // ebp@1
  int v54; // edi@1
  int v55; // edx@1
  int v56; // ebx@1
  unsigned int v57; // ebp@1
  int v58; // edi@1
  int v59; // eax@1
  int v60; // edx@1
  int v61; // ebp@1
  int v62; // ebx@1
  int v63; // edi@1
  int v64; // eax@1
  unsigned int v65; // ebp@1
  int v66; // ebx@1
  int v67; // edx@1
  int v68; // edi@1
  int v69; // ebp@1
  int v70; // eax@1
  int v71; // ebx@1
  int v72; // edx@1
  unsigned int v73; // ebp@1
  int v74; // eax@1
  int v75; // edi@1
  int v76; // ebx@1
  int v77; // ebp@1
  int v78; // edx@1
  int v79; // eax@1
  int v80; // edi@1
  unsigned int v81; // ebp@1
  int v82; // edx@1
  int v83; // ebx@1
  int v84; // eax@1
  int v85; // ebp@1
  int v86; // edi@1
  int v87; // edx@1
  int v88; // ebx@1
  unsigned int v89; // ebp@1
  int v90; // edi@1
  int v91; // eax@1
  int v92; // edx@1
  int v93; // ebp@1
  int v94; // ebx@1
  int v95; // edi@1
  int v96; // eax@1
  unsigned int v97; // ebp@1
  int v98; // ebx@1
  int v99; // edx@1
  int v100; // edi@1
  int v101; // ebp@1
  int v102; // eax@1
  int v103; // ebx@1
  int v104; // ebp@1
  int v105; // edx@1
  int v106; // eax@1
  unsigned int v107; // edi@1
  int v108; // ebx@1
  int v109; // ebp@1
  int v110; // edx@1
  int v111; // eax@1
  int v112; // edi@1
  unsigned int v113; // ebp@1
  int v114; // edx@1
  int v115; // ebx@1
  int v116; // eax@1
  int v117; // ebp@1
  int v118; // edi@1
  int v119; // edx@1
  int v120; // ebx@1
  unsigned int v121; // ebp@1
  int v122; // edi@1
  int v123; // eax@1
  int v124; // edx@1
  int v125; // ebp@1
  int v126; // ebx@1
  int v127; // edi@1
  int v128; // eax@1
  unsigned int v129; // ebp@1
  int v130; // ebx@1
  int v131; // edx@1
  int v132; // edi@1
  int v133; // ebp@1
  int v134; // eax@1
  int v135; // ebx@1
  int v136; // edx@1
  unsigned int v137; // ebp@1
  int v138; // eax@1
  int v139; // edi@1
  int v140; // ebx@1
  int v141; // ebp@1
  int v142; // edx@1
  int v143; // eax@1
  int v144; // edi@1
  unsigned int v145; // ebp@1
  int v146; // edx@1
  int v147; // ebx@1
  int v148; // eax@1
  int v149; // ebp@1
  int v150; // edi@1
  int v151; // edx@1
  int v152; // ebx@1
  unsigned int v153; // ebp@1
  int v154; // edi@1
  int v155; // eax@1
  int v156; // edx@1
  int v157; // ebp@1
  int v158; // edi@1
  int v159; // ebx@1
  int v160; // eax@1
  int v161; // ecx@1
  unsigned int v162; // ebp@1
  int v163; // ST10_4@1
  int v164; // edi@1
  int v165; // ecx@1
  unsigned int v166; // ebp@1
  int v167; // edi@1
  int v168; // eax@1
  int v169; // ST10_4@1
  int v170; // ecx@1
  unsigned int v171; // ebp@1
  int v172; // eax@1
  int v173; // edx@1
  int v174; // edi@1
  unsigned int v175; // edi@1
  int v176; // ebp@1
  int v177; // ST18_4@1
  int v178; // eax@1
  unsigned int v179; // edi@1
  int v180; // ebp@1
  int v181; // edx@1
  int v182; // eax@1
  unsigned int v183; // edi@1
  int v184; // edx@1
  int v185; // ST18_4@1
  int v186; // ST10_4@1
  int v187; // edi@1
  unsigned int v188; // edi@1
  int v189; // eax@1
  int v190; // ST14_4@1
  unsigned int v191; // eax@1
  unsigned int v192; // [sp+20h] [bp+4h]@1
  int v193; // [sp+20h] [bp+4h]@1
  int v194; // [sp+20h] [bp+4h]@1
  int v195; // [sp+20h] [bp+4h]@1
  int v196; // [sp+20h] [bp+4h]@1
  int v197; // [sp+28h] [bp+Ch]@1
  int v198; // [sp+28h] [bp+Ch]@1
  int v199; // [sp+28h] [bp+Ch]@1
  int v200; // [sp+28h] [bp+Ch]@1
  int v201; // [sp+28h] [bp+Ch]@1
  int v202; // [sp+28h] [bp+Ch]@1
  int v203; // [sp+28h] [bp+Ch]@1
  int v204; // [sp+28h] [bp+Ch]@1
  int v205; // [sp+28h] [bp+Ch]@1

  v4 = (unsigned int*)a3;
  v5 = a1[3] ^ a3[71];
  v6 = *a1 + a3[68];
  v197 = *(_DWORD *)&SS3[4 * (unsigned __int8)v6] ^ *(_DWORD *)&SS0[4 * (v6 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v6)] ^ *(_DWORD *)&SS1[4 * BYTE2(v6)];
  v7 = (unsigned int)(&S1)[(unsigned __int8)v197] ^ ((S0[BYTE1(v197)] ^ (((S0[(unsigned int)v197 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v197)]) << 8)) << 8);
  v8 = v7 + (a1[1] ^ v4[69]);
  v9 = v7 ^ (a1[2] + v4[70]);
  v10 = *(_DWORD *)&SS3[4 * (unsigned __int8)v8] ^ *(_DWORD *)&SS0[4 * (v8 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v8)] ^ *(_DWORD *)&SS1[4 * BYTE2(v8)];
  v11 = (unsigned int)(&S1)[(unsigned __int8)v10] ^ ((S0[BYTE1(v10)] ^ (((S0[(unsigned int)v10 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v10)]) << 8)) << 8);
  v12 = v11 + v9;
  v13 = v11 ^ ((v5 << (v6 & 0x1F)) | (v5 >> (32 - (v6 & 0x1F))));
  v14 = *(_DWORD *)&SS3[4 * (unsigned __int8)v12] ^ *(_DWORD *)&SS0[4 * (v12 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v12)] ^ *(_DWORD *)&SS1[4 * BYTE2(v12)];
  v15 = (unsigned int)(&S1)[(unsigned __int8)v14] ^ ((S0[BYTE1(v14)] ^ (((S0[(unsigned int)v14 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v14)]) << 8)) << 8);
  v16 = v15 + v13;
  v17 = v15 ^ ((v6 << (v8 & 0x1F)) | (v6 >> (32 - (v8 & 0x1F))));
  v18 = *(_DWORD *)&SS3[4 * (unsigned __int8)v16] ^ *(_DWORD *)&SS0[4 * (v16 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v16)] ^ *(_DWORD *)&SS1[4 * BYTE2(v16)];
  v19 = (unsigned int)(&S1)[(unsigned __int8)v18] ^ ((S0[BYTE1(v18)] ^ (((S0[(unsigned int)v18 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v18)]) << 8)) << 8);
  v20 = v19 + v17;
  v21 = v19 ^ ((v8 << (v12 & 0x1F)) | (v8 >> (32 - (v12 & 0x1F))));
  v198 = *(_DWORD *)&SS3[4 * (unsigned __int8)v20] ^ *(_DWORD *)&SS0[4 * (v20 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v20)] ^ *(_DWORD *)&SS1[4 * BYTE2(v20)];
  v22 = (unsigned int)(&S1)[(unsigned __int8)v198] ^ ((S0[BYTE1(v198)] ^ (((S0[(unsigned int)v198 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v198)]) << 8)) << 8);
  v23 = v22 + v21;
  v24 = v22 ^ ((v12 << (v16 & 0x1F)) | (v12 >> (32 - (v16 & 0x1F))));
  v199 = *(_DWORD *)&SS3[4 * (unsigned __int8)v23] ^ *(_DWORD *)&SS0[4 * (v23 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v23)] ^ *(_DWORD *)&SS1[4 * BYTE2(v23)];
  v25 = (unsigned int)(&S1)[(unsigned __int8)v199] ^ ((S0[BYTE1(v199)] ^ (((S0[(unsigned int)v199 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v199)]) << 8)) << 8);
  v26 = v25 + v24;
  v27 = v25 ^ ((v16 << (v20 & 0x1F)) | (v16 >> (32 - (v20 & 0x1F))));
  v200 = *(_DWORD *)&SS3[4 * (unsigned __int8)v26] ^ *(_DWORD *)&SS0[4 * (v26 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v26)] ^ *(_DWORD *)&SS1[4 * BYTE2(v26)];
  v28 = (unsigned int)(&S1)[(unsigned __int8)(SS3[4 * (unsigned __int8)v26] ^ SS0[4 * (v26 >> 24)] ^ SS2[4 * BYTE1(v26)] ^ SS1[4 * BYTE2(v26)])] ^ ((S0[BYTE1(v200)] ^ (((S0[(unsigned int)v200 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v200)]) << 8)) << 8);
  v29 = v28 + v27;
  v30 = v28 ^ ((v20 << (v23 & 0x1F)) | (v20 >> (32 - (v23 & 0x1F))));
  v31 = *(_DWORD *)&SS3[4 * (unsigned __int8)v29] ^ *(_DWORD *)&SS0[4 * (v29 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v29)] ^ *(_DWORD *)&SS1[4 * BYTE2(v29)];
  v201 = v31;
  v32 = (unsigned int)(&S1)[(unsigned __int8)v31] ^ ((S0[BYTE1(v201)] ^ (((S0[(unsigned int)v31 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v31)]) << 8)) << 8);
  v33 = v32 + v30;
  v34 = v32 ^ ((v23 << (v26 & 0x1F)) | (v23 >> (32 - (v26 & 0x1F))));
  v202 = v29 & 0x1F;
  v35 = ((v26 << v202) | (v26 >> (32 - v202))) - v4[67];
  v36 = (v35 >> v202) | (v35 << (32 - v202));
  v37 = ((v4[66] ^ v34) >> (v33 & 0x1Fu)) | ((v4[66] ^ v34) << (32 - (v33 & 0x1F)));
  v38 = -v37 - 2 * v36 + v29;
  v39 = (v36 + v37) ^ v33;
  v40 = v39 ^ v36;
  v41 = v37 - v38 - v4[63];
  v42 = v4[64] ^ v38;
  v43 = (v41 >> (v40 & 0x1Fu)) | (v41 << (32 - (v40 & 0x1F)));
  v44 = v4[62] ^ (v39 - v4[65]);
  v45 = ((unsigned int)v44 >> (v42 & 0x1Fu)) | (v44 << (32 - (v42 & 0x1F)));
  v46 = -v45 - 2 * v43 + v40;
  v47 = (v43 + v45) ^ v42;
  v48 = v47 ^ v43;
  v49 = v45 - v46 - v4[59];
  v50 = v4[60] ^ v46;
  v51 = (v49 >> (v48 & 0x1Fu)) | (v49 << (32 - (v48 & 0x1F)));
  v52 = v4[58] ^ (v47 - v4[61]);
  v53 = ((unsigned int)v52 >> (v50 & 0x1Fu)) | (v52 << (32 - (v50 & 0x1F)));
  v54 = -v53 - 2 * v51 + v48;
  v55 = (v51 + v53) ^ v50;
  v56 = v55 ^ v51;
  v57 = v53 - v54 - v4[55];
  v58 = v4[56] ^ v54;
  v59 = (v57 >> (v56 & 0x1Fu)) | (v57 << (32 - (v56 & 0x1F)));
  v60 = v4[54] ^ (v55 - v4[57]);
  v61 = ((unsigned int)v60 >> (v58 & 0x1Fu)) | (v60 << (32 - (v58 & 0x1F)));
  v62 = -v61 - 2 * v59 + v56;
  v63 = (v59 + v61) ^ v58;
  v64 = v63 ^ v59;
  v65 = v61 - v62 - v4[51];
  v66 = v4[52] ^ v62;
  v67 = (v65 >> (v64 & 0x1Fu)) | (v65 << (32 - (v64 & 0x1F)));
  v68 = v4[50] ^ (v63 - v4[53]);
  v69 = ((unsigned int)v68 >> (v66 & 0x1Fu)) | (v68 << (32 - (v66 & 0x1F)));
  v70 = -v69 - 2 * v67 + v64;
  v71 = (v67 + v69) ^ v66;
  v72 = v71 ^ v67;
  v73 = v69 - v70 - v4[47];
  v74 = v4[48] ^ v70;
  v75 = (v73 >> (v72 & 0x1Fu)) | (v73 << (32 - (v72 & 0x1F)));
  v76 = v4[46] ^ (v71 - v4[49]);
  v77 = ((unsigned int)v76 >> (v74 & 0x1Fu)) | (v76 << (32 - (v74 & 0x1F)));
  v78 = -v77 - 2 * v75 + v72;
  v79 = (v75 + v77) ^ v74;
  v80 = v79 ^ v75;
  v81 = v77 - v78 - v4[43];
  v82 = v4[44] ^ v78;
  v83 = (v81 >> (v80 & 0x1Fu)) | (v81 << (32 - (v80 & 0x1F)));
  v84 = v4[42] ^ (v79 - v4[45]);
  v85 = ((unsigned int)v84 >> (v82 & 0x1Fu)) | (v84 << (32 - (v82 & 0x1F)));
  v86 = -v85 - 2 * v83 + v80;
  v87 = (v83 + v85) ^ v82;
  v88 = v87 ^ v83;
  v89 = v85 - v86 - v4[39];
  v90 = v4[40] ^ v86;
  v91 = (v89 >> (v88 & 0x1Fu)) | (v89 << (32 - (v88 & 0x1F)));
  v92 = v4[38] ^ (v87 - v4[41]);
  v93 = ((unsigned int)v92 >> (v90 & 0x1Fu)) | (v92 << (32 - (v90 & 0x1F)));
  v94 = -v93 - 2 * v91 + v88;
  v95 = (v91 + v93) ^ v90;
  v96 = v95 ^ v91;
  v97 = v93 - v94 - v4[35];
  v98 = v4[36] ^ v94;
  v99 = (v97 >> (v96 & 0x1Fu)) | (v97 << (32 - (v96 & 0x1F)));
  v100 = v4[34] ^ (v95 - v4[37]);
  v101 = ((unsigned int)v100 >> (v98 & 0x1Fu)) | (v100 << (32 - (v98 & 0x1F)));
  v102 = -v101 - 2 * v99 + v96;
  v103 = (v99 + v101) ^ v98;
  v104 = v101 - v102;
  v105 = v103 ^ v99;
  v106 = v4[32] ^ v102;
  v107 = ((v104 - v4[31]) >> (v105 & 0x1Fu)) | ((v104 - v4[31]) << (32 - (v105 & 0x1F)));
  v108 = v4[30] ^ (v103 - v4[33]);
  v109 = ((unsigned int)v108 >> (v106 & 0x1Fu)) | (v108 << (32 - (v106 & 0x1F)));
  v110 = -(((unsigned int)v108 >> (v106 & 0x1Fu)) | (v108 << (32 - (v106 & 0x1F)))) - 2 * v107 + v105;
  v111 = (v107 + v109) ^ v106;
  v112 = v111 ^ v107;
  v113 = v109 - v110 - v4[27];
  v114 = v4[28] ^ v110;
  v115 = (v113 >> (v112 & 0x1Fu)) | (v113 << (32 - (v112 & 0x1F)));
  v116 = v4[26] ^ (v111 - v4[29]);
  v117 = ((unsigned int)v116 >> (v114 & 0x1Fu)) | (v116 << (32 - (v114 & 0x1F)));
  v118 = -v117 - 2 * v115 + v112;
  v119 = (v115 + v117) ^ v114;
  v120 = v119 ^ v115;
  v121 = v117 - v118 - v4[23];
  v122 = v4[24] ^ v118;
  v123 = (v121 >> (v120 & 0x1Fu)) | (v121 << (32 - (v120 & 0x1F)));
  v124 = v4[22] ^ (v119 - v4[25]);
  v125 = ((unsigned int)v124 >> (v122 & 0x1Fu)) | (v124 << (32 - (v122 & 0x1F)));
  v126 = -(((unsigned int)v124 >> (v122 & 0x1Fu)) | (v124 << (32 - (v122 & 0x1F)))) - 2 * v123 + v120;
  v127 = (v123 + v125) ^ v122;
  v128 = v127 ^ v123;
  v129 = v125 - v126 - v4[19];
  v130 = v4[20] ^ v126;
  v131 = (v129 >> (v128 & 0x1Fu)) | (v129 << (32 - (v128 & 0x1F)));
  v132 = v4[18] ^ (v127 - v4[21]);
  v133 = ((unsigned int)v132 >> (v130 & 0x1Fu)) | (v132 << (32 - (v130 & 0x1F)));
  v134 = -v133 - 2 * v131 + v128;
  v135 = (v131 + v133) ^ v130;
  v136 = v135 ^ v131;
  v137 = v133 - v134 - v4[15];
  v138 = v4[16] ^ v134;
  v139 = (v137 >> (v136 & 0x1Fu)) | (v137 << (32 - (v136 & 0x1F)));
  v140 = v4[14] ^ (v135 - v4[17]);
  v141 = ((unsigned int)v140 >> (v138 & 0x1Fu)) | (v140 << (32 - (v138 & 0x1F)));
  v142 = -(((unsigned int)v140 >> (v138 & 0x1Fu)) | (v140 << (32 - (v138 & 0x1F)))) - 2 * v139 + v136;
  v143 = (v139 + v141) ^ v138;
  v144 = v143 ^ v139;
  v145 = v141 - v142 - v4[11];
  v146 = v4[12] ^ v142;
  v147 = (v145 >> (v144 & 0x1Fu)) | (v145 << (32 - (v144 & 0x1F)));
  v148 = v4[10] ^ (v143 - v4[13]);
  v149 = ((unsigned int)v148 >> (v146 & 0x1Fu)) | (v148 << (32 - (v146 & 0x1F)));
  v150 = -v149 - 2 * v147 + v144;
  v151 = (v147 + v149) ^ v146;
  v152 = v151 ^ v147;
  v153 = v149 - v150 - v4[7];
  v154 = v4[8] ^ v150;
  v155 = (v153 >> (v152 & 0x1Fu)) | (v153 << (32 - (v152 & 0x1F)));
  v156 = v4[6] ^ (v151 - v4[9]);
  v157 = ((unsigned int)v156 >> (v154 & 0x1Fu)) | (v156 << (32 - (v154 & 0x1F)));
  v158 = (v155 + v157) ^ v154;
  v159 = -v157 - 2 * v155 + v152;
  v160 = v158 ^ v155;
  v192 = v157 - v159;
  v161 = *(_DWORD *)&SS3[4 * (unsigned __int8)v160] ^ *(_DWORD *)&SS0[4 * ((unsigned int)v160 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v160)] ^ *(_DWORD *)&SS1[4 * BYTE2(v160)];
  v162 = (unsigned int)(&S1)[(unsigned __int8)v161] ^ ((S0[BYTE1(v161)] ^ (((S0[(unsigned int)v161 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v161)]) << 8)) << 8);
  v193 = (v192 >> (v160 & 0x1Fu)) | (v192 << (32 - (v160 & 0x1F)));
  v163 = v162 ^ (v158 - v4[5]);
  v164 = (v159 ^ v4[4]) - v162;
  v165 = *(_DWORD *)&SS3[4 * (unsigned __int8)v193] ^ *(_DWORD *)&SS0[4 * ((unsigned int)v193 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v193)] ^ *(_DWORD *)&SS1[4 * BYTE2(v193)];
  v166 = (unsigned int)(&S1)[(unsigned __int8)v165] ^ ((S0[BYTE1(v165)] ^ (((S0[(unsigned int)v165 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v165)]) << 8)) << 8);
  v167 = v166 ^ v164;
  v168 = v160 - v166;
  v169 = ((unsigned int)v163 >> (v193 & 0x1Fu)) | (v163 << (32 - (v193 & 0x1F)));
  v170 = *(_DWORD *)&SS3[4 * (unsigned __int8)v169] ^ *(_DWORD *)&SS0[4 * ((unsigned int)v169 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v169)] ^ *(_DWORD *)&SS1[4 * BYTE2(v169)];
  v171 = (unsigned int)(&S1)[(unsigned __int8)v170] ^ ((S0[BYTE1(v170)] ^ (((S0[(unsigned int)v170 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v170)]) << 8)) << 8);
  v172 = v171 ^ v168;
  v194 = v193 - v171;
  v173 = ((unsigned int)v167 >> (v169 & 0x1Fu)) | (v167 << (32 - (v169 & 0x1F)));
  v174 = *(_DWORD *)&SS3[4 * (unsigned __int8)v173] ^ *(_DWORD *)&SS0[4 * ((unsigned int)v173 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v173)] ^ *(_DWORD *)&SS1[4 * BYTE2(v173)];
  v203 = v174;
  v175 = (unsigned int)(&S1)[(unsigned __int8)v174] ^ ((S0[BYTE1(v203)] ^ (((S0[(unsigned int)v174 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v174)]) << 8)) << 8);
  v176 = v169 - v175;
  v195 = v175 ^ v194;
  v177 = ((unsigned int)v172 >> (v173 & 0x1Fu)) | (v172 << (32 - (v173 & 0x1F)));
  v178 = *(_DWORD *)&SS3[4 * (unsigned __int8)v177] ^ *(_DWORD *)&SS0[4 * ((unsigned int)v177 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v177)] ^ *(_DWORD *)&SS1[4 * BYTE2(v177)];
  v179 = (unsigned int)(&S1)[(unsigned __int8)v178] ^ ((S0[BYTE1(v178)] ^ (((S0[(unsigned int)v178 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v178)]) << 8)) << 8);
  v180 = v179 ^ v176;
  v181 = v173 - v179;
  v196 = ((unsigned int)v195 >> (v177 & 0x1Fu)) | (v195 << (32 - (v177 & 0x1F)));
  v182 = *(_DWORD *)&SS3[4 * (unsigned __int8)v196] ^ *(_DWORD *)&SS0[4 * ((unsigned int)v196 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v196)] ^ *(_DWORD *)&SS1[4 * BYTE2(v196)];
  v183 = (unsigned int)(&S1)[(unsigned __int8)v182] ^ ((S0[BYTE1(v182)] ^ (((S0[(unsigned int)v182 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v182)]) << 8)) << 8);
  v184 = v183 ^ v181;
  v185 = v177 - v183;
  v186 = ((unsigned int)v180 >> (v196 & 0x1Fu)) | (v180 << (32 - (v196 & 0x1F)));
  v187 = *(_DWORD *)&SS3[4 * (unsigned __int8)v186] ^ *(_DWORD *)&SS0[4 * ((unsigned int)v186 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v186)] ^ *(_DWORD *)&SS1[4 * BYTE2(v186)];
  v204 = v187;
  v188 = (unsigned int)(&S1)[(unsigned __int8)v187] ^ ((S0[BYTE1(v204)] ^ (((S0[(unsigned int)v187 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v187)]) << 8)) << 8);
  v189 = ((unsigned int)v184 >> (v186 & 0x1Fu)) | (v184 << (32 - (v186 & 0x1F)));
  v190 = v189;
  v205 = *(_DWORD *)&SS3[4 * (unsigned __int8)v189] ^ *(_DWORD *)&SS0[4 * ((unsigned int)v189 >> 24)] ^ *(_DWORD *)&SS2[4 * BYTE1(v189)] ^ *(_DWORD *)&SS1[4 * BYTE2(v189)];
  LOBYTE(v170) = ((unsigned int)v184 >> (v186 & 0x1Fu)) | ((_BYTE)v184 << (32 - (v186 & 0x1F)));
  v191 = (unsigned int)(&S1)[(unsigned __int8)v205] ^ ((S0[BYTE1(v205)] ^ (((S0[(unsigned int)v205 >> 24] << 8) ^ (unsigned int)(&S1)[BYTE2(v205)]) << 8)) << 8);
  *a2 = v190 - *v4;
  a2[1] = v4[1] ^ (v186 - v191);
  a2[2] = ((v196 - v188) ^ v191) - v4[2];
  result = v4[3];
  a2[3] = result ^ (((v188 ^ v185) >> (v170 & 0x1Fu)) | ((v188 ^ v185) << (32 - (v170 & 0x1F))));
  return result;
}

unsigned __int32 Uniper::BufDecryptionOFB(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4)
{
  char v4; // zf@1
  unsigned __int32 result; // eax@1
  int v6; // ebp@1
  int v7; // esi@1
  char v8; // sf@1
  int v9; // edi@5
  int v10; // esi@5
  int v11; // ecx@7
  signed int v12; // ebp@7
  int v13; // edi@7
  signed int v14; // eax@8
  int v15; // edx@9
  signed int v16; // edi@11
  signed int v17; // eax@12
  unsigned __int32 v18; // eax@12
  int v19; // ebp@12
  int v20; // ecx@13
  char v21; // zf@15
  int v22; // edi@18
  int v23; // esi@18
  int v24; // ecx@20
  signed int v25; // ebp@20
  int v26; // edi@20
  signed int v27; // eax@21
  int v28; // edx@22
  signed int v29; // edi@24
  signed int v30; // eax@25
  unsigned __int32 v31; // eax@25
  int v32; // ebp@25
  int v33; // ecx@26
  char v34; // zf@28
  int v35; // ebx@30
  int v36; // esi@30
  int v37; // ecx@32
  int v38; // edi@32
  int v39; // esi@32
  signed int v40; // eax@33
  int v41; // edx@34
  int v42; // ebp@36
  int v43; // esi@37
  unsigned __int32 v44; // eax@38
  int v45; // edi@38
  int v46; // ecx@39
  int v47; // ecx@43
  int v48; // edi@43
  int v49; // esi@43
  signed int v50; // eax@44
  int v51; // edx@45
  int i; // eax@48
  int v53; // ecx@49
  int v54; // edi@50
  int v55; // esi@51
  signed int v56; // eax@52
  unsigned __int32 v57; // eax@52
  int v58; // ebp@52
  int v59; // ecx@53
  unsigned __int32 v60; // edi@56
  int v61; // ebp@57
  int v62; // esi@57
  int v63; // ecx@58
  int v64; // [sp+10h] [bp-4Ch]@5
  signed int v65; // [sp+10h] [bp-4Ch]@30
  int v66; // [sp+14h] [bp-48h]@18
  int v67; // [sp+18h] [bp-44h]@3
  int v68[4]; // [sp+1Ch] [bp-40h]@7
  unsigned __int32 v69; // [sp+2Ch] [bp-30h]@1
  int v70; // [sp+30h] [bp-2Ch]@1
  int v71; // [sp+34h] [bp-28h]@1
  int v72; // [sp+38h] [bp-24h]@1
  unsigned __int32 v73[4]; // [sp+3Ch] [bp-20h]@11
  int v74[4]; // [sp+4Ch] [bp-10h]@12
  int v75; // [sp+60h] [bp+4h]@5
  int v76; // [sp+64h] [bp+8h]@1

  v69 = 305419896;
  result = (((unsigned __int64)a2 >> 32) & 0xF) + a2;
  v70 = 1450727032;
  v71 = -1698933128;
  v6 = a2 / 16;
  v7 = a2 & 0x8000000F;
  v4 = (a2 & 0x8000000F) == 0;
  v8 = (a2 & 0x8000000F) < 0;
  v72 = -553691528;
  v76 = a2 / 16;
  if ( v8 )
  {
    v7 = ((v7 - 1) | 0xFFFFFFF0) + 1;
    v4 = v7 == 0;
  }
  v67 = v7;
  if ( v4 )
  {
    if ( v6 > 0 )
    {
      v9 = a1 - a3;
      v10 = (int)a3;
      v64 = a1 - a3;
      v75 = v6;
      while ( 1 )
      {
        v11 = (int)v68;
        v13 = v10 + v9;
        v12 = 4;
        do
        {
          v14 = 0;
          do
          {
            v15 = (*(_DWORD *)v11 << 8) ^ *(_BYTE *)(v13 + v14++);
            *(_DWORD *)v11 = v15;
          }
          while ( v14 < 4 );
          v11 += 4;
          v13 += 4;
          --v12;
        }
        while ( v12 );
        encryption((unsigned long*)v69, (unsigned long*)v73, a4);
        v16 = 0;
        do
        {
          v18 = *(unsigned __int32 *)((char *)v73 + v16);
          v19 = v18 ^ *(int *)((char *)v68 + v16);
          *(unsigned __int32 *)((char *)&v69 + v16) = v18;
          *(int *)((char *)v74 + v16) = v19;
          v17 = 0;
          do
          {
            v20 = 24 - v17;
            v17 += 8;
            ++v10;
            *(_BYTE *)(v10 - 1) = (unsigned int)v19 >> v20;
          }
          while ( v17 < 32 );
          v16 += 4;
        }
        while ( v16 < 16 );
        result = v75 - 1;
        v21 = v75-- == 1;
        if ( v21 )
          break;
        v9 = v64;
      }
    }
  }
  else
  {
    if ( v6 > 0 )
    {
      v22 = a1 - a3;
      v23 = (int)a3;
      v66 = v6;
      while ( 1 )
      {
        v24 = (int)v68;
        v26 = v23 + v22;
        v25 = 4;
        do
        {
          v27 = 0;
          do
          {
            v28 = (*(_DWORD *)v24 << 8) ^ *(_BYTE *)(v26 + v27++);
            *(_DWORD *)v24 = v28;
          }
          while ( v27 < 4 );
          v24 += 4;
          v26 += 4;
          --v25;
        }
        while ( v25 );
        encryption((unsigned long*)v69, (unsigned long*)v73, a4);
        v29 = 0;
        do
        {
          v31 = *(unsigned __int32 *)((char *)v73 + v29);
          v32 = v31 ^ *(int *)((char *)v68 + v29);
          *(unsigned __int32 *)((char *)&v69 + v29) = v31;
          *(int *)((char *)v74 + v29) = v32;
          v30 = 0;
          do
          {
            v33 = 24 - v30;
            v30 += 8;
            ++v23;
            *(_BYTE *)(v23 - 1) = (unsigned int)v32 >> v33;
          }
          while ( v30 < 32 );
          v29 += 4;
        }
        while ( v29 < 16 );
        v34 = v66-- == 1;
        if ( v34 )
          break;
        v22 = a1 - a3;
      }
      v6 = v76;
      v7 = v67;
    }
    v35 = v7 / 4;
    v36 = v7 % 4;
    v65 = v36;
    if ( v36 )
    {
      if ( v35 > 0 )
      {
        v49 = (int)v68;
        v47 = (int)a1 + 16 * v6;
        v48 = v35;
        do
        {
          v50 = 0;
          do
          {
            v51 = (*(_DWORD *)v49 << 8) ^ *(_BYTE *)(v47 + v50++);
            *(_DWORD *)v49 = v51;
          }
          while ( v50 < 4 );
          v49 += 4;
          v47 += 4;
          --v48;
        }
        while ( v48 );
        v6 = v76;
        v36 = v65;
      }
      for ( i = 0; i < v36; v68[v35] = v53 )
        v53 = (v68[v35] << 8) ^ *(_BYTE *)(a1 + 4 * (v35 + 4 * v6) + i++);
      v68[v35] <<= 32 - 8 * v36;
      encryption((unsigned long*)v69, (unsigned long*)v73, a4);
      v54 = 0;
      if ( v35 > 0 )
      {
        v55 = (int)a3 + 16 * v6;
        do
        {
          v57 = v73[v54];
          v58 = v57 ^ v68[v54];
          *(&v69 + v54) = v57;
          v74[v54] = v58;
          v56 = 0;
          do
          {
            v59 = 24 - v56;
            v56 += 8;
            ++v55;
            *(_BYTE *)(v55 - 1) = (unsigned int)v58 >> v59;
          }
          while ( v56 < 32 );
          ++v54;
        }
        while ( v54 < v35 );
        v6 = v76;
        v36 = v65;
      }
      v60 = v68[v35] ^ v73[v35];
      result = 0;
      v74[v35] = v60;
      if ( v36 > 0 )
      {
        v62 = 0;
        v61 = (int)a3 + 4 * (v35 + 4 * v6);
        do
        {
          v63 = 24 - v62;
          v62 += 8;
          ++result;
          *(_BYTE *)(v61 - 1 + result) = v60 >> v63;
        }
        while ( (signed int)result < v65 );
      }
    }
    else
    {
      if ( v35 > 0 )
      {
        v39 = (int)v68;
        v37 = (int)a1 + 16 * v6;
        v38 = v35;
        do
        {
          v40 = 0;
          do
          {
            v41 = (*(_DWORD *)v39 << 8) ^ *(_BYTE *)(v37 + v40++);
            *(_DWORD *)v39 = v41;
          }
          while ( v40 < 4 );
          v39 += 4;
          v37 += 4;
          --v38;
        }
        while ( v38 );
      }
      result = encryption((unsigned long*)v69, (unsigned long*)v73, a4);
      v42 = 0;
      if ( v35 > 0 )
      {
        v43 = (int)a3 + 16 * v76;
        do
        {
          v44 = v73[v42];
          v45 = v44 ^ v68[v42];
          *(&v69 + v42) = v44;
          v74[v42] = v45;
          result = 0;
          do
          {
            v46 = 24 - result;
            result += 8;
            ++v43;
            *(_BYTE *)(v43 - 1) = (unsigned int)v45 >> v46;
          }
          while ( (signed int)result < 32 );
          ++v42;
        }
        while ( v42 < v35 );
      }
    }
  }
  return result;
}

unsigned __int32 Uniper::BufDecryptionCFB(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4)
{
  char v4; // zf@1
  unsigned __int32 result; // eax@1
  int v6; // ecx@1
  int v7; // esi@1
  char v8; // sf@1
  int v9; // edi@5
  int v10; // esi@5
  int *v11; // ecx@7
  signed int v12; // ebp@7
  int v13; // edi@7
  signed int v14; // eax@8
  int v15; // edx@9
  signed int v16; // edi@11
  signed int v17; // eax@12
  unsigned __int32 v18; // eax@12
  unsigned __int32 v19; // ebp@12
  int v20; // ecx@13
  char v21; // zf@15
  int v22; // edi@18
  int v23; // esi@18
  int *v24; // ecx@20
  signed int v25; // ebp@20
  int v26; // edi@20
  signed int v27; // eax@21
  int v28; // edx@22
  signed int v29; // edi@24
  signed int v30; // eax@25
  unsigned __int32 v31; // eax@25
  unsigned __int32 v32; // ebp@25
  int v33; // ecx@26
  char v34; // zf@28
  int v35; // ebx@30
  int v36; // esi@30
  int v37; // ecx@32
  int v38; // edi@32
  int *v39; // esi@32
  signed int v40; // eax@33
  int v41; // edx@34
  int v42; // ebp@36
  int v43; // edi@37
  unsigned __int32 v44; // esi@38
  int v45; // ecx@39
  int v46; // ecx@43
  int v47; // edi@43
  int *v48; // esi@43
  signed int v49; // eax@44
  int v50; // edx@45
  int v51; // eax@48
  int v52; // edi@49
  int v53; // ecx@50
  int v54; // ebp@51
  int v55; // edi@52
  signed int v56; // eax@53
  unsigned __int32 v57; // esi@53
  int v58; // ecx@54
  unsigned __int32 v59; // edi@56
  int v60; // esi@57
  int v61; // ecx@58
  int v62; // [sp+10h] [bp-4Ch]@5
  int v63; // [sp+14h] [bp-48h]@18
  signed int v64; // [sp+14h] [bp-48h]@30
  int v65; // [sp+18h] [bp-44h]@3
  int v66; // [sp+1Ch] [bp-40h]@1
  int v67; // [sp+20h] [bp-3Ch]@1
  int v68; // [sp+24h] [bp-38h]@1
  int v69; // [sp+28h] [bp-34h]@1
  unsigned __int32 v70; // [sp+2Ch] [bp-30h]@1
  int v71; // [sp+30h] [bp-2Ch]@1
  int v72; // [sp+34h] [bp-28h]@1
  int v73; // [sp+38h] [bp-24h]@1
  unsigned __int32 v74; // [sp+3Ch] [bp-20h]@1
  int v75; // [sp+40h] [bp-1Ch]@1
  int v76; // [sp+44h] [bp-18h]@1
  int v77; // [sp+48h] [bp-14h]@1
  int v78[4]; // [sp+4Ch] [bp-10h]@12
  int v79; // [sp+60h] [bp+4h]@5
  int v80; // [sp+64h] [bp+8h]@1

  result = (((unsigned __int64)a2 >> 32) & 0xF) + a2;
  v74 = 305419896;
  v75 = 1450727032;
  v6 = a2 / 16;
  v7 = a2 & 0x8000000F;
  v4 = (a2 & 0x8000000F) == 0;
  v8 = (a2 & 0x8000000F) < 0;
  v76 = -1698933128;
  v77 = -553691528;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v80 = a2 / 16;
  if ( v8 )
  {
    v7 = ((v7 - 1) | 0xFFFFFFF0) + 1;
    v4 = v7 == 0;
  }
  v65 = v7;
  if ( v4 )
  {
    if ( v6 > 0 )
    {
      v9 = a1 - a3;
      v10 = (int)a3;
      v62 = a1 - a3;
      v79 = v6;
      while ( 1 )
      {
        v11 = &v66;
        v13 = v10 + v9;
        v12 = 4;
        do
        {
          v14 = 0;
          do
          {
            v15 = (*v11 << 8) ^ *(_BYTE *)(v13 + v14++);
            *v11 = v15;
          }
          while ( v14 < 4 );
          ++v11;
          v13 += 4;
          --v12;
        }
        while ( v12 );
        encryption((unsigned long*)v74, (unsigned long*)v70, a4);
        v16 = 0;
        do
        {
          v18 = *(int *)((char *)&v66 + v16);
          v19 = v18 ^ *(unsigned __int32 *)((char *)&v70 + v16);
          *(unsigned __int32 *)((char *)&v74 + v16) = v18;
          *(int *)((char *)v78 + v16) = v19;
          v17 = 0;
          do
          {
            v20 = 24 - v17;
            v17 += 8;
            ++v10;
            *(_BYTE *)(v10 - 1) = v19 >> v20;
          }
          while ( v17 < 32 );
          v16 += 4;
        }
        while ( v16 < 16 );
        result = v79 - 1;
        v21 = v79-- == 1;
        if ( v21 )
          break;
        v9 = v62;
      }
    }
  }
  else
  {
    if ( v6 > 0 )
    {
      v22 = a1 - a3;
      v23 = (int)a3;
      v63 = v6;
      while ( 1 )
      {
        v24 = &v66;
        v26 = v23 + v22;
        v25 = 4;
        do
        {
          v27 = 0;
          do
          {
            v28 = (*v24 << 8) ^ *(_BYTE *)(v26 + v27++);
            *v24 = v28;
          }
          while ( v27 < 4 );
          ++v24;
          v26 += 4;
          --v25;
        }
        while ( v25 );
        encryption((unsigned long*)v74, (unsigned long*)v70, a4);
        v29 = 0;
        do
        {
          v31 = *(int *)((char *)&v66 + v29);
          v32 = v31 ^ *(unsigned __int32 *)((char *)&v70 + v29);
          *(unsigned __int32 *)((char *)&v74 + v29) = v31;
          *(int *)((char *)v78 + v29) = v32;
          v30 = 0;
          do
          {
            v33 = 24 - v30;
            v30 += 8;
            ++v23;
            *(_BYTE *)(v23 - 1) = v32 >> v33;
          }
          while ( v30 < 32 );
          v29 += 4;
        }
        while ( v29 < 16 );
        v34 = v63-- == 1;
        if ( v34 )
          break;
        v22 = a1 - a3;
      }
      v6 = v80;
      v7 = v65;
    }
    v35 = v7 / 4;
    v36 = v7 % 4;
    v64 = v36;
    if ( v36 )
    {
      if ( v35 > 0 )
      {
        v48 = &v66;
        v46 = (int)a1 + 16 * v6;
        v47 = v35;
        do
        {
          v49 = 0;
          do
          {
            v50 = (*v48 << 8) ^ *(_BYTE *)(v46 + v49++);
            *v48 = v50;
          }
          while ( v49 < 4 );
          ++v48;
          v46 += 4;
          --v47;
        }
        while ( v47 );
        v6 = v80;
        v36 = v64;
      }
      v51 = 0;
      if ( v36 > 0 )
      {
        v52 = (int)a1 + 4 * (v35 + 4 * v6);
        do
        {
          v53 = (*(&v66 + v35) << 8) ^ *(_BYTE *)(v52 + v51++);
          *(&v66 + v35) = v53;
        }
        while ( v51 < v36 );
      }
      *(&v66 + v35) <<= 32 - 8 * v36;
      encryption((unsigned long*)v74, (unsigned long*)v70, a4);
      v54 = 0;
      if ( v35 > 0 )
      {
        v55 = (int)a3 + 16 * v80;
        do
        {
          v57 = *(&v66 + v54) ^ *(&v70 + v54);
          v56 = 0;
          v78[v54] = v57;
          do
          {
            v58 = 24 - v56;
            v56 += 8;
            ++v55;
            *(_BYTE *)(v55 - 1) = v57 >> v58;
          }
          while ( v56 < 32 );
          ++v54;
        }
        while ( v54 < v35 );
      }
      v59 = *(&v66 + v35) ^ *(&v70 + v35);
      result = 0;
      v78[v35] = v59;
      if ( v64 > 0 )
      {
        v60 = 0;
        do
        {
          v61 = 24 - v60;
          v60 += 8;
          ++result;
          *(_BYTE *)(a3 + 4 * (v35 + 4 * v80) - 1 + result) = v59 >> v61;
        }
        while ( (signed int)result < v64 );
      }
    }
    else
    {
      if ( v35 > 0 )
      {
        v39 = &v66;
        v37 = (int)a1 + 16 * v6;
        v38 = v35;
        do
        {
          v40 = 0;
          do
          {
            v41 = (*v39 << 8) ^ *(_BYTE *)(v37 + v40++);
            *v39 = v41;
          }
          while ( v40 < 4 );
          ++v39;
          v37 += 4;
          --v38;
        }
        while ( v38 );
      }
      result = encryption((unsigned long*)v74, (unsigned long*)v70, a4);
      v42 = 0;
      if ( v35 > 0 )
      {
        v43 = (int)a3 + 16 * v80;
        do
        {
          v44 = *(&v66 + v42) ^ *(&v70 + v42);
          result = 0;
          v78[v42] = v44;
          do
          {
            v45 = 24 - result;
            result += 8;
            ++v43;
            *(_BYTE *)(v43 - 1) = v44 >> v45;
          }
          while ( (signed int)result < 32 );
          ++v42;
        }
        while ( v42 < v35 );
      }
    }
  }
  return result;
}

int Uniper::BufDecryptionCBC(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4)
{
  int result; // eax@1
  int v5; // edi@2
  int v6; // esi@2
  unsigned __int32 *v7; // ecx@4
  signed int v8; // ebp@4
  int v9; // esi@4
  signed int v10; // eax@5
  int v11; // edx@6
  signed int v12; // esi@8
  signed int v13; // eax@9
  unsigned int v14; // ebp@9
  unsigned __int32 v15; // eax@9
  int v16; // ecx@9
  int v17; // ecx@10
  char v18; // zf@12
  int v19; // [sp+0h] [bp-40h]@1
  int v20; // [sp+4h] [bp-3Ch]@1
  int v21; // [sp+8h] [bp-38h]@1
  int v22; // [sp+Ch] [bp-34h]@1
  unsigned __int32 v23; // [sp+10h] [bp-30h]@4
  unsigned __int32 v24; // [sp+20h] [bp-20h]@8
  int v25; // [sp+30h] [bp-10h]@9
  int v26; // [sp+48h] [bp+8h]@2
  int v27; // [sp+4Ch] [bp+Ch]@2

  v19 = 305419896;
  v20 = 1450727032;
  v21 = -1698933128;
  result = a2 / 16;
  v22 = -553691528;
  if ( a2 / 16 > 0 )
  {
    v6 = a1 - a3;
    v5 = (int)a3;
    v27 = a1 - a3;
    v26 = a2 / 16;
    while ( 1 )
    {
      v7 = &v23;
      v9 = v5 + v6;
      v8 = 4;
      do
      {
        v10 = 0;
        do
        {
          v11 = (*v7 << 8) ^ *(_BYTE *)(v9 + v10++);
          *v7 = v11;
        }
        while ( v10 < 4 );
        ++v7;
        v9 += 4;
        --v8;
      }
      while ( v8 );
      decryption((unsigned long*)v23, (unsigned long*)v24, a4);
      v12 = 0;
      do
      {
        v15 = *(int *)((char *)&v19 + v12) ^ *(unsigned __int32 *)((char *)&v24 + v12);
        v16 = *(unsigned __int32 *)((char *)&v23 + v12);
        *(int *)((char *)&v25 + v12) = v15;
        v14 = v15;
        *(int *)((char *)&v19 + v12) = v16;
        v13 = 0;
        do
        {
          v17 = 24 - v13;
          v13 += 8;
          ++v5;
          *(_BYTE *)(v5 - 1) = v14 >> v17;
        }
        while ( v13 < 32 );
        v12 += 4;
      }
      while ( v12 < 16 );
      result = v26 - 1;
      v18 = v26-- == 1;
      if ( v18 )
        break;
      v6 = v27;
    }
  }
  return result;
}

int Uniper::BufDecryptionECB(unsigned char *a1, signed int a2, unsigned char *a3, unsigned long *a4)
{
	int result; // eax@1
  int v5; // edi@2
  int v6; // esi@2
  unsigned __int32 *v7; // ecx@4
  signed int v8; // ebp@4
  int v9; // edi@4
  signed int v10; // eax@5
  int v11; // edx@6
  signed int v12; // edx@8
  unsigned __int32 *v13; // ebp@8
  signed int v14; // eax@9
  unsigned int v15; // edi@9
  int v16; // ecx@10
  char v17; // zf@12
  unsigned __int32 v18; // [sp+0h] [bp-20h]@4
  unsigned __int32 v19; // [sp+10h] [bp-10h]@8
  int v20; // [sp+28h] [bp+8h]@2
  int v21; // [sp+2Ch] [bp+Ch]@2

  result = a2 / 16;
  if ( a2 / 16 > 0 )
  {
    v5 = a1 - a3;
    v6 = (int)a3;
    v21 = a1 - a3;
    v20 = a2 / 16;
    while ( 1 )
    {
      v7 = &v18;
      v9 = v6 + v5;
      v8 = 4;
      do
      {
        v10 = 0;
        do
        {
          v11 = (*v7 << 8) ^ *(_BYTE *)(v9 + v10++);
          *v7 = v11;
        }
        while ( v10 < 4 );
        ++v7;
        v9 += 4;
        --v8;
      }
      while ( v8 );
      decryption((unsigned long*)v18, (unsigned long*)v19, a4);
      v13 = &v19;
      v12 = 4;
      do
      {
        v15 = *v13;
        v14 = 0;
        do
        {
          v16 = 24 - v14;
          v14 += 8;
          ++v6;
          *(_BYTE *)(v6 - 1) = v15 >> v16;
        }
        while ( v14 < 32 );
        ++v13;
        --v12;
      }
      while ( v12 );
      result = v20 - 1;
      v17 = v20-- == 1;
      if ( v17 )
        break;
      v5 = v21;
    }
  }
  return result;
}

signed int Uniper::UniperDecFunc(unsigned char *OutBuffer, int Size, unsigned char *Key, unsigned int KeySize, int Mode)
{
  void *v5; // ebx@1
  signed int result; // eax@2
  unsigned int i; // ecx@3
  unsigned int v8; // edi@3
  unsigned __int32 v9; // [sp+8h] [bp-130h]@6
  int v10; // [sp+Ch] [bp-12Ch]@6
  int v11; // [sp+10h] [bp-128h]@6
  int v12; // [sp+14h] [bp-124h]@6
  unsigned __int32 v13; // [sp+18h] [bp-120h]@6
  int v14; // [sp+1Ch] [bp-11Ch]@6
  char v15; // [sp+20h] [bp-118h]@6

  v5 = malloc(Size);
  if ( v5 )
  {
    memset(v5, 0, 4 * (Size >> 2));
    v8 = (unsigned int)((char *)v5 + 4 * (Size >> 2));
    for ( i = Size & 3; i; --i )
      *(_BYTE *)v8++ = 0;
    v13 = 0;
    v14 = 0;
    v9 = 0;
    memset(&v15, 0, 0x118u);
    v10 = 0;
    v11 = 0;
    v12 = 0;
    memcpy(&v9, Key, KeySize);
    SetSubKey(v9, v13);
    switch ( Mode )
    {
      case UNIPER_MODE_ECB:
        BufDecryptionECB(OutBuffer, Size, (unsigned char*)v5, (unsigned long*)v13);
        break;
      case UNIPER_MODE_CBC:
        BufDecryptionCBC(OutBuffer, Size, (unsigned char*)v5, (unsigned long*)v13);
        break;
      case UNIPER_MODE_CFB:
        BufDecryptionCFB(OutBuffer, Size, (unsigned char*)v5, (unsigned long*)v13);
        break;
      case UNIPER_MODE_OFB:
        BufDecryptionOFB(OutBuffer, Size, (unsigned char*)v5, (unsigned long*)v13);
        break;
      default:
        break;
    }
    memcpy((void *)OutBuffer, v5, Size);
    free(v5);
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}