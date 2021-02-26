//
// Selftestfunclist.cpp
// Copyright (c) Microsoft Corporation. Licensed under the MIT license. 
//

// 
// Array of self test functions.
// This is in a separate file so that the Kernel test program can include
// it directly, and we only have to keep a single list. 
//
// The Kernel mode code cannot link to the primary lib or compile the precomp.h
// header file because the /kernel flag is required for kernel-mode code, and 
// it is not compatible with C++ exceptions used in the STL.
//

VOID
SYMCRYPT_CALL
SymCryptAesSelftestVoid()
{
    SymCryptAesSelftest( SYMCRYPT_AES_SELFTEST_ALL );
}

const SELFTEST_INFO g_selfTests[] = 
{
    {&SymCryptMd2Selftest, "Md2"},
    {&SymCryptMd4Selftest, "Md4"},
    {&SymCryptMd5Selftest, "Md5"},
    {&SymCryptSha1Selftest, "Sha1"},
    {&SymCryptSha256Selftest, "Sha256"},
    {&SymCryptSha384Selftest, "Sha384"},
    {&SymCryptSha512Selftest, "Sha512"},
    {&SymCryptHmacMd5Selftest, "HmacMd5" },
    {&SymCryptHmacSha1Selftest, "HmacSha1" },
    {&SymCryptHmacSha256Selftest, "HmacSha256" },
    {&SymCryptHmacSha384Selftest, "HmacSha384" },
    {&SymCryptHmacSha512Selftest, "HmacSha512" },
    {&SymCryptAesCmacSelftest, "AesCmac" },
    {&SymCryptMarvin32Selftest, "Marvin32" },
    {&SymCryptAesSelftestVoid, "Aes" },
    {&SymCryptDesSelftest, "Des" },
    {&SymCrypt3DesSelftest, "3Des" },
    {&SymCryptDesxSelftest, "Desx" },
    {&SymCryptRc2Selftest, "Rc2" },
    {&SymCryptCcmSelftest, "Ccm" },
    {&SymCryptGcmSelftest, "Gcm" },
    {&SymCryptRc4Selftest, "Rc4" },
    {&SymCryptChaCha20Selftest, "ChaCha20" },
    {&SymCryptPoly1305Selftest, "Poly1305" },
    {&SymCryptChaCha20Poly1305Selftest, "ChaCha20Poly1305" },
    {&SymCryptRngAesInstantiateSelftest, "AesCtrDrbgInstantiate" },
    {&SymCryptRngAesReseedSelftest, "AesCtrDrbgReseed" },
    {&SymCryptRngAesGenerateSelftest, "AesCtrDrbgGenerate"},
    {&SymCryptPbkdf2_HmacSha1SelfTest, "Pbkdf2_HmacSha1"},
    {&SymCryptPbkdf2_HmacSha256SelfTest, "Pbkdf2_HmacSha256"},
    {&SymCryptSp800_108_HmacSha1SelfTest, "SP800-108_HmacSha1" },
    {&SymCryptSp800_108_HmacSha256SelfTest, "SP800-108_HmacSha256" },
    {&SymCryptTlsPrf1_1SelfTest, "TLS PRF 1.1" },
    {&SymCryptTlsPrf1_2SelfTest, "TLS PRF 1.2" },
    {&SymCryptHkdfSelfTest, "HKDF" },
    {&SymCryptXtsAesSelftest, "Xts-Aes" },
    {&SymCryptParallelSha256Selftest, "ParallelSha256" },
    {&SymCryptParallelSha384Selftest, "ParallelSha384" },
    {&SymCryptParallelSha512Selftest, "ParallelSha512" },
    
    {NULL, NULL},
};

