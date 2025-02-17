/** @file
  Copyright (C) 2019, vit9696. All rights reserved.

  All rights reserved.

  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
**/

#ifndef OC_APPLE_KEYS_LIB_H
#define OC_APPLE_KEYS_LIB_H

#include <Library/BaseCryptLib.h>

#define NUM_OF_PK 2

//OC_STATIC_ASSERT (
//  sizeof (RSA_PUBLIC_KEY) == 520,
//  "Incompatible configured RSA key size"
//  );

typedef struct APPLE_PK_ENTRY_ {
  UINT8 Hash[SHA256_DIGEST_SIZE];
//  UINT8 PublicKey[sizeof (RSA_PUBLIC_KEY)];
  UINT8 PublicKey[520];
} APPLE_PK_ENTRY;

extern CONST APPLE_PK_ENTRY PkDataBase[NUM_OF_PK];

extern CONST UINT8 gAppleX86SecureBootRootCaCert[];
extern CONST UINTN gAppleX86SecureBootRootCaCertSize;

#endif // OC_APPLE_KEYS_LIB_H
