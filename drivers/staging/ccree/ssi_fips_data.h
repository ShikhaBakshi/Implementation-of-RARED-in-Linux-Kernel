/*
 * Copyright (C) 2012-2017 ARM Limited or its affiliates.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

/*
 * The test vectors were taken from:
 *
 * * AES
 * NIST Special Publication 800-38A 2001 Edition
 * Recommendation for Block Cipher Modes of Operation
 * http://csrc.nist.gov/publications/nistpubs/800-38a/sp800-38a.pdf
 * Appendix F: Example Vectors for Modes of Operation of the AES
 *
 * * AES CTS
 * Advanced Encryption Standard (AES) Encryption for Kerberos 5
 * February 2005
 * https://tools.ietf.org/html/rfc3962#appendix-B
 * B.  Sample Test Vectors
 *
 * * AES XTS
 * http://csrc.nist.gov/groups/STM/cavp/#08
 * http://csrc.nist.gov/groups/STM/cavp/documents/aes/XTSTestVectors.zip
 *
 * * AES CMAC
 * http://csrc.nist.gov/groups/STM/cavp/index.html#07
 * http://csrc.nist.gov/groups/STM/cavp/documents/mac/cmactestvectors.zip
 *
 * * AES-CCM
 * http://csrc.nist.gov/groups/STM/cavp/#07
 * http://csrc.nist.gov/groups/STM/cavp/documents/mac/ccmtestvectors.zip
 *
 * * AES-GCM
 * http://csrc.nist.gov/groups/STM/cavp/documents/mac/gcmtestvectors.zip
 *
 * * Triple-DES
 * NIST Special Publication 800-67 January 2012
 * Recommendation for the Triple Data Encryption Algorithm (TDEA) Block Cipher
 * http://csrc.nist.gov/publications/nistpubs/800-67-Rev1/SP-800-67-Rev1.pdf
 * APPENDIX B: EXAMPLE OF TDEA FORWARD AND INVERSE CIPHER OPERATIONS
 * and
 * http://csrc.nist.gov/groups/STM/cavp/#01
 * http://csrc.nist.gov/groups/STM/cavp/documents/des/tdesmct_intermediate.zip
 *
 * * HASH
 * http://csrc.nist.gov/groups/STM/cavp/#03
 * http://csrc.nist.gov/groups/STM/cavp/documents/shs/shabytetestvectors.zip
 *
 * * HMAC
 * http://csrc.nist.gov/groups/STM/cavp/#07
 * http://csrc.nist.gov/groups/STM/cavp/documents/mac/hmactestvectors.zip
 */

/* NIST AES */
#define AES_128_BIT_KEY_SIZE    16
#define AES_192_BIT_KEY_SIZE    24
#define AES_256_BIT_KEY_SIZE    32
#define AES_512_BIT_KEY_SIZE    64

#define NIST_AES_IV_SIZE        16

#define NIST_AES_128_KEY        { 0x2b, 0x7e, 0x15, 0x16, 0x28, 0xae, 0xd2, 0xa6, 0xab, 0xf7, 0x15, 0x88, 0x09, 0xcf, 0x4f, 0x3c }
#define NIST_AES_192_KEY        { 0x8e, 0x73, 0xb0, 0xf7, 0xda, 0x0e, 0x64, 0x52, 0xc8, 0x10, 0xf3, 0x2b, 0x80, 0x90, 0x79, 0xe5, \
				  0x62, 0xf8, 0xea, 0xd2, 0x52, 0x2c, 0x6b, 0x7b }
#define NIST_AES_256_KEY        { 0x60, 0x3d, 0xeb, 0x10, 0x15, 0xca, 0x71, 0xbe, 0x2b, 0x73, 0xae, 0xf0, 0x85, 0x7d, 0x77, 0x81, \
				  0x1f, 0x35, 0x2c, 0x07, 0x3b, 0x61, 0x08, 0xd7, 0x2d, 0x98, 0x10, 0xa3, 0x09, 0x14, 0xdf, 0xf4 }
#define NIST_AES_VECTOR_SIZE    16
#define NIST_AES_PLAIN_DATA     { 0x6b, 0xc1, 0xbe, 0xe2, 0x2e, 0x40, 0x9f, 0x96, 0xe9, 0x3d, 0x7e, 0x11, 0x73, 0x93, 0x17, 0x2a }

#define NIST_AES_ECB_IV         { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define NIST_AES_128_ECB_CIPHER { 0x3a, 0xd7, 0x7b, 0xb4, 0x0d, 0x7a, 0x36, 0x60, 0xa8, 0x9e, 0xca, 0xf3, 0x24, 0x66, 0xef, 0x97 }
#define NIST_AES_192_ECB_CIPHER { 0xbd, 0x33, 0x4f, 0x1d, 0x6e, 0x45, 0xf2, 0x5f, 0xf7, 0x12, 0xa2, 0x14, 0x57, 0x1f, 0xa5, 0xcc }
#define NIST_AES_256_ECB_CIPHER { 0xf3, 0xee, 0xd1, 0xbd, 0xb5, 0xd2, 0xa0, 0x3c, 0x06, 0x4b, 0x5a, 0x7e, 0x3d, 0xb1, 0x81, 0xf8 }

#define NIST_AES_CBC_IV         { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f }
#define NIST_AES_128_CBC_CIPHER { 0x76, 0x49, 0xab, 0xac, 0x81, 0x19, 0xb2, 0x46, 0xce, 0xe9, 0x8e, 0x9b, 0x12, 0xe9, 0x19, 0x7d }
#define NIST_AES_192_CBC_CIPHER { 0x4f, 0x02, 0x1d, 0xb2, 0x43, 0xbc, 0x63, 0x3d, 0x71, 0x78, 0x18, 0x3a, 0x9f, 0xa0, 0x71, 0xe8 }
#define NIST_AES_256_CBC_CIPHER { 0xf5, 0x8c, 0x4c, 0x04, 0xd6, 0xe5, 0xf1, 0xba, 0x77, 0x9e, 0xab, 0xfb, 0x5f, 0x7b, 0xfb, 0xd6 }

#define NIST_AES_OFB_IV         { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f }
#define NIST_AES_128_OFB_CIPHER { 0x3b, 0x3f, 0xd9, 0x2e, 0xb7, 0x2d, 0xad, 0x20, 0x33, 0x34, 0x49, 0xf8, 0xe8, 0x3c, 0xfb, 0x4a }
#define NIST_AES_192_OFB_CIPHER { 0xcd, 0xc8, 0x0d, 0x6f, 0xdd, 0xf1, 0x8c, 0xab, 0x34, 0xc2, 0x59, 0x09, 0xc9, 0x9a, 0x41, 0x74 }
#define NIST_AES_256_OFB_CIPHER { 0xdc, 0x7e, 0x84, 0xbf, 0xda, 0x79, 0x16, 0x4b, 0x7e, 0xcd, 0x84, 0x86, 0x98, 0x5d, 0x38, 0x60 }

#define NIST_AES_CTR_IV         { 0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff }
#define NIST_AES_128_CTR_CIPHER { 0x87, 0x4d, 0x61, 0x91, 0xb6, 0x20, 0xe3, 0x26, 0x1b, 0xef, 0x68, 0x64, 0x99, 0x0d, 0xb6, 0xce }
#define NIST_AES_192_CTR_CIPHER { 0x1a, 0xbc, 0x93, 0x24, 0x17, 0x52, 0x1c, 0xa2, 0x4f, 0x2b, 0x04, 0x59, 0xfe, 0x7e, 0x6e, 0x0b }
#define NIST_AES_256_CTR_CIPHER { 0x60, 0x1e, 0xc3, 0x13, 0x77, 0x57, 0x89, 0xa5, 0xb7, 0xa7, 0xf5, 0x04, 0xbb, 0xf3, 0xd2, 0x28 }

#define RFC3962_AES_128_KEY            { 0x63, 0x68, 0x69, 0x63, 0x6b, 0x65, 0x6e, 0x20, 0x74, 0x65, 0x72, 0x69, 0x79, 0x61, 0x6b, 0x69 }
#define RFC3962_AES_VECTOR_SIZE        17
#define RFC3962_AES_PLAIN_DATA         { 0x49, 0x20, 0x77, 0x6f, 0x75, 0x6c, 0x64, 0x20, 0x6c, 0x69, 0x6b, 0x65, 0x20, 0x74, 0x68, 0x65, 0x20 }
#define RFC3962_AES_CBC_CTS_IV         { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define RFC3962_AES_128_CBC_CTS_CIPHER { 0xc6, 0x35, 0x35, 0x68, 0xf2, 0xbf, 0x8c, 0xb4, 0xd8, 0xa5, 0x80, 0x36, 0x2d, 0xa7, 0xff, 0x7f, 0x97 }

#define NIST_AES_256_XTS_KEY            { 0xa1, 0xb9, 0x0c, 0xba, 0x3f, 0x06, 0xac, 0x35, 0x3b, 0x2c, 0x34, 0x38, 0x76, 0x08, 0x17, 0x62, \
					  0x09, 0x09, 0x23, 0x02, 0x6e, 0x91, 0x77, 0x18, 0x15, 0xf2, 0x9d, 0xab, 0x01, 0x93, 0x2f, 0x2f }
#define NIST_AES_256_XTS_IV             { 0x4f, 0xae, 0xf7, 0x11, 0x7c, 0xda, 0x59, 0xc6, 0x6e, 0x4b, 0x92, 0x01, 0x3e, 0x76, 0x8a, 0xd5 }
#define NIST_AES_256_XTS_VECTOR_SIZE    16
#define NIST_AES_256_XTS_PLAIN          { 0xeb, 0xab, 0xce, 0x95, 0xb1, 0x4d, 0x3c, 0x8d, 0x6f, 0xb3, 0x50, 0x39, 0x07, 0x90, 0x31, 0x1c }
#define NIST_AES_256_XTS_CIPHER         { 0x77, 0x8a, 0xe8, 0xb4, 0x3c, 0xb9, 0x8d, 0x5a, 0x82, 0x50, 0x81, 0xd5, 0xbe, 0x47, 0x1c, 0x63 }

#define NIST_AES_512_XTS_KEY            { 0x1e, 0xa6, 0x61, 0xc5, 0x8d, 0x94, 0x3a, 0x0e, 0x48, 0x01, 0xe4, 0x2f, 0x4b, 0x09, 0x47, 0x14, \
					  0x9e, 0x7f, 0x9f, 0x8e, 0x3e, 0x68, 0xd0, 0xc7, 0x50, 0x52, 0x10, 0xbd, 0x31, 0x1a, 0x0e, 0x7c, \
					  0xd6, 0xe1, 0x3f, 0xfd, 0xf2, 0x41, 0x8d, 0x8d, 0x19, 0x11, 0xc0, 0x04, 0xcd, 0xa5, 0x8d, 0xa3, \
					  0xd6, 0x19, 0xb7, 0xe2, 0xb9, 0x14, 0x1e, 0x58, 0x31, 0x8e, 0xea, 0x39, 0x2c, 0xf4, 0x1b, 0x08 }
#define NIST_AES_512_XTS_IV             { 0xad, 0xf8, 0xd9, 0x26, 0x27, 0x46, 0x4a, 0xd2, 0xf0, 0x42, 0x8e, 0x84, 0xa9, 0xf8, 0x75, 0x64,  }
#define NIST_AES_512_XTS_VECTOR_SIZE    32
#define NIST_AES_512_XTS_PLAIN          { 0x2e, 0xed, 0xea, 0x52, 0xcd, 0x82, 0x15, 0xe1, 0xac, 0xc6, 0x47, 0xe8, 0x10, 0xbb, 0xc3, 0x64, \
					  0x2e, 0x87, 0x28, 0x7f, 0x8d, 0x2e, 0x57, 0xe3, 0x6c, 0x0a, 0x24, 0xfb, 0xc1, 0x2a, 0x20, 0x2e }
#define NIST_AES_512_XTS_CIPHER         { 0xcb, 0xaa, 0xd0, 0xe2, 0xf6, 0xce, 0xa3, 0xf5, 0x0b, 0x37, 0xf9, 0x34, 0xd4, 0x6a, 0x9b, 0x13, \
					  0x0b, 0x9d, 0x54, 0xf0, 0x7e, 0x34, 0xf3, 0x6a, 0xf7, 0x93, 0xe8, 0x6f, 0x73, 0xc6, 0xd7, 0xdb }

/* NIST AES-CMAC */
#define NIST_AES_128_CMAC_KEY           { 0x67, 0x08, 0xc9, 0x88, 0x7b, 0x84, 0x70, 0x84, 0xf1, 0x23, 0xd3, 0xdd, 0x9c, 0x3a, 0x81, 0x36 }
#define NIST_AES_128_CMAC_PLAIN_DATA    { 0xa8, 0xde, 0x55, 0x17, 0x0c, 0x6d, 0xc0, 0xd8, 0x0d, 0xe3, 0x2f, 0x50, 0x8b, 0xf4, 0x9b, 0x70 }
#define NIST_AES_128_CMAC_MAC           { 0xcf, 0xef, 0x9b, 0x78, 0x39, 0x84, 0x1f, 0xdb, 0xcc, 0xbb, 0x6c, 0x2c, 0xf2, 0x38, 0xf7 }
#define NIST_AES_128_CMAC_VECTOR_SIZE   16
#define NIST_AES_128_CMAC_OUTPUT_SIZE   15

#define NIST_AES_192_CMAC_KEY           { 0x20, 0x51, 0xaf, 0x34, 0x76, 0x2e, 0xbe, 0x55, 0x6f, 0x72, 0xa5, 0xc6, 0xed, 0xc7, 0x77, 0x1e, \
					  0xb9, 0x24, 0x5f, 0xad, 0x76, 0xf0, 0x34, 0xbe }
#define NIST_AES_192_CMAC_PLAIN_DATA    { 0xae, 0x8e, 0x93, 0xc9, 0xc9, 0x91, 0xcf, 0x89, 0x6a, 0x49, 0x1a, 0x89, 0x07, 0xdf, 0x4e, 0x4b, \
					  0xe5, 0x18, 0x6a, 0xe4, 0x96, 0xcd, 0x34, 0x0d, 0xc1, 0x9b, 0x23, 0x78, 0x21, 0xdb, 0x7b, 0x60 }
#define NIST_AES_192_CMAC_MAC           { 0x74, 0xf7, 0x46, 0x08, 0xc0, 0x4f, 0x0f, 0x4e, 0x47, 0xfa, 0x64, 0x04, 0x33, 0xb6, 0xe6, 0xfb }
#define NIST_AES_192_CMAC_VECTOR_SIZE   32
#define NIST_AES_192_CMAC_OUTPUT_SIZE   16

#define NIST_AES_256_CMAC_KEY           { 0x3a, 0x75, 0xa9, 0xd2, 0xbd, 0xb8, 0xc8, 0x04, 0xba, 0x4a, 0xb4, 0x98, 0x35, 0x73, 0xa6, 0xb2, \
					  0x53, 0x16, 0x0d, 0xd9, 0x0f, 0x8e, 0xdd, 0xfb, 0x2f, 0xdc, 0x2a, 0xb1, 0x76, 0x04, 0xf5, 0xc5 }
#define NIST_AES_256_CMAC_PLAIN_DATA    { 0x42, 0xf3, 0x5d, 0x5a, 0xa5, 0x33, 0xa7, 0xa0, 0xa5, 0xf7, 0x4e, 0x14, 0x4f, 0x2a, 0x5f, 0x20 }
#define NIST_AES_256_CMAC_MAC           { 0xf1, 0x53, 0x2f, 0x87, 0x32, 0xd9, 0xf5, 0x90, 0x30, 0x07 }
#define NIST_AES_256_CMAC_VECTOR_SIZE   16
#define NIST_AES_256_CMAC_OUTPUT_SIZE   10

/* NIST TDES */
#define TDES_NUM_OF_KEYS                3
#define NIST_TDES_VECTOR_SIZE           8
#define NIST_TDES_IV_SIZE               8

#define NIST_TDES_ECB_IV		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }

#define NIST_TDES_ECB3_KEY		{ 0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef, \
					  0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef, 0x01, \
					  0x45, 0x67, 0x89, 0xab, 0xcd, 0xef, 0x01, 0x23 }
#define NIST_TDES_ECB3_PLAIN_DATA	{ 0x54, 0x68, 0x65, 0x20, 0x71, 0x75, 0x66, 0x63 }
#define NIST_TDES_ECB3_CIPHER		{ 0xa8, 0x26, 0xfd, 0x8c, 0xe5, 0x3b, 0x85, 0x5f }

#define NIST_TDES_CBC3_IV		{ 0xf8, 0xee, 0xe1, 0x35, 0x9c, 0x6e, 0x54, 0x40 }
#define NIST_TDES_CBC3_KEY		{ 0xe9, 0xda, 0x37, 0xf8, 0xdc, 0x97, 0x6d, 0x5b, \
					  0xb6, 0x8c, 0x04, 0xe3, 0xec, 0x98, 0x20, 0x15, \
					  0xf4, 0x0e, 0x08, 0xb5, 0x97, 0x29, 0xf2, 0x8f }
#define NIST_TDES_CBC3_PLAIN_DATA	{ 0x3b, 0xb7, 0xa7, 0xdb, 0xa3, 0xd5, 0x92, 0x91 }
#define NIST_TDES_CBC3_CIPHER		{ 0x5b, 0x84, 0x24, 0xd2, 0x39, 0x3e, 0x55, 0xa2 }

/* NIST AES-CCM */
#define NIST_AESCCM_128_BIT_KEY_SIZE    16
#define NIST_AESCCM_192_BIT_KEY_SIZE    24
#define NIST_AESCCM_256_BIT_KEY_SIZE    32

#define NIST_AESCCM_B0_VAL              0x79  /* L'[0:2]=1 , M'[3-5]=7 , Adata[6]=1, reserved[7]=0 */
#define NIST_AESCCM_NONCE_SIZE          13
#define NIST_AESCCM_IV_SIZE             16
#define NIST_AESCCM_ADATA_SIZE          32
#define NIST_AESCCM_TEXT_SIZE           16
#define NIST_AESCCM_TAG_SIZE            16

#define NIST_AESCCM_128_KEY             { 0x70, 0x01, 0x0e, 0xd9, 0x0e, 0x61, 0x86, 0xec, 0xad, 0x41, 0xf0, 0xd3, 0xc7, 0xc4, 0x2f, 0xf8 }
#define NIST_AESCCM_128_NONCE           { 0xa5, 0xf4, 0xf4, 0x98, 0x6e, 0x98, 0x47, 0x29, 0x65, 0xf5, 0xab, 0xcc, 0x4b }
#define NIST_AESCCM_128_ADATA           { 0x3f, 0xec, 0x0e, 0x5c, 0xc2, 0x4d, 0x67, 0x13, 0x94, 0x37, 0xcb, 0xc8, 0x11, 0x24, 0x14, 0xfc, \
					  0x8d, 0xac, 0xcd, 0x1a, 0x94, 0xb4, 0x9a, 0x4c, 0x76, 0xe2, 0xd3, 0x93, 0x03, 0x54, 0x73, 0x17 }
#define NIST_AESCCM_128_PLAIN_TEXT      { 0xbe, 0x32, 0x2f, 0x58, 0xef, 0xa7, 0xf8, 0xc6, 0x8a, 0x63, 0x5e, 0x0b, 0x9c, 0xce, 0x77, 0xf2 }
#define NIST_AESCCM_128_CIPHER          { 0x8e, 0x44, 0x25, 0xae, 0x57, 0x39, 0x74, 0xf0, 0xf0, 0x69, 0x3a, 0x18, 0x8b, 0x52, 0x58, 0x12 }
#define NIST_AESCCM_128_MAC             { 0xee, 0xf0, 0x8e, 0x3f, 0xb1, 0x5f, 0x42, 0x27, 0xe0, 0xd9, 0x89, 0xa4, 0xd5, 0x87, 0xa8, 0xcf }

#define NIST_AESCCM_192_KEY             { 0x68, 0x73, 0xf1, 0xc6, 0xc3, 0x09, 0x75, 0xaf, 0xf6, 0xf0, 0x84, 0x70, 0x26, 0x43, 0x21, 0x13, \
					  0x0a, 0x6e, 0x59, 0x84, 0xad, 0xe3, 0x24, 0xe9 }
#define NIST_AESCCM_192_NONCE           { 0x7c, 0x4d, 0x2f, 0x7c, 0xec, 0x04, 0x36, 0x1f, 0x18, 0x7f, 0x07, 0x26, 0xd5 }
#define NIST_AESCCM_192_ADATA           { 0x77, 0x74, 0x3b, 0x5d, 0x83, 0xa0, 0x0d, 0x2c, 0x8d, 0x5f, 0x7e, 0x10, 0x78, 0x15, 0x31, 0xb4, \
					  0x96, 0xe0, 0x9f, 0x3b, 0xc9, 0x29, 0x5d, 0x7a, 0xe9, 0x79, 0x9e, 0x64, 0x66, 0x8e, 0xf8, 0xc5 }
#define NIST_AESCCM_192_PLAIN_TEXT      { 0x50, 0x51, 0xa0, 0xb0, 0xb6, 0x76, 0x6c, 0xd6, 0xea, 0x29, 0xa6, 0x72, 0x76, 0x9d, 0x40, 0xfe }
#define NIST_AESCCM_192_CIPHER          { 0x0c, 0xe5, 0xac, 0x8d, 0x6b, 0x25, 0x6f, 0xb7, 0x58, 0x0b, 0xf6, 0xac, 0xc7, 0x64, 0x26, 0xaf }
#define NIST_AESCCM_192_MAC             { 0x40, 0xbc, 0xe5, 0x8f, 0xd4, 0xcd, 0x65, 0x48, 0xdf, 0x90, 0xa0, 0x33, 0x7c, 0x84, 0x20, 0x04 }

#define NIST_AESCCM_256_KEY             { 0xee, 0x8c, 0xe1, 0x87, 0x16, 0x97, 0x79, 0xd1, 0x3e, 0x44, 0x3d, 0x64, 0x28, 0xe3, 0x8b, 0x38, \
					  0xb5, 0x5d, 0xfb, 0x90, 0xf0, 0x22, 0x8a, 0x8a, 0x4e, 0x62, 0xf8, 0xf5, 0x35, 0x80, 0x6e, 0x62 }
#define NIST_AESCCM_256_NONCE           { 0x12, 0x16, 0x42, 0xc4, 0x21, 0x8b, 0x39, 0x1c, 0x98, 0xe6, 0x26, 0x9c, 0x8a }
#define NIST_AESCCM_256_ADATA           { 0x71, 0x8d, 0x13, 0xe4, 0x75, 0x22, 0xac, 0x4c, 0xdf, 0x3f, 0x82, 0x80, 0x63, 0x98, 0x0b, 0x6d, \
					  0x45, 0x2f, 0xcd, 0xcd, 0x6e, 0x1a, 0x19, 0x04, 0xbf, 0x87, 0xf5, 0x48, 0xa5, 0xfd, 0x5a, 0x05 }
#define NIST_AESCCM_256_PLAIN_TEXT      { 0xd1, 0x5f, 0x98, 0xf2, 0xc6, 0xd6, 0x70, 0xf5, 0x5c, 0x78, 0xa0, 0x66, 0x48, 0x33, 0x2b, 0xc9 }
#define NIST_AESCCM_256_CIPHER          { 0xcc, 0x17, 0xbf, 0x87, 0x94, 0xc8, 0x43, 0x45, 0x7d, 0x89, 0x93, 0x91, 0x89, 0x8e, 0xd2, 0x2a }
#define NIST_AESCCM_256_MAC             { 0x6f, 0x9d, 0x28, 0xfc, 0xb6, 0x42, 0x34, 0xe1, 0xcd, 0x79, 0x3c, 0x41, 0x44, 0xf1, 0xda, 0x50 }

/* NIST AES-GCM */
#define NIST_AESGCM_128_BIT_KEY_SIZE    16
#define NIST_AESGCM_192_BIT_KEY_SIZE    24
#define NIST_AESGCM_256_BIT_KEY_SIZE    32

#define NIST_AESGCM_IV_SIZE             12
#define NIST_AESGCM_ADATA_SIZE          16
#define NIST_AESGCM_TEXT_SIZE           16
#define NIST_AESGCM_TAG_SIZE            16

#define NIST_AESGCM_128_KEY             { 0x81, 0x6e, 0x39, 0x07, 0x04, 0x10, 0xcf, 0x21, 0x84, 0x90, 0x4d, 0xa0, 0x3e, 0xa5, 0x07, 0x5a }
#define NIST_AESGCM_128_IV              { 0x32, 0xc3, 0x67, 0xa3, 0x36, 0x26, 0x13, 0xb2, 0x7f, 0xc3, 0xe6, 0x7e }
#define NIST_AESGCM_128_ADATA           { 0xf2, 0xa3, 0x07, 0x28, 0xed, 0x87, 0x4e, 0xe0, 0x29, 0x83, 0xc2, 0x94, 0x43, 0x5d, 0x3c, 0x16 }
#define NIST_AESGCM_128_PLAIN_TEXT      { 0xec, 0xaf, 0xe9, 0x6c, 0x67, 0xa1, 0x64, 0x67, 0x44, 0xf1, 0xc8, 0x91, 0xf5, 0xe6, 0x94, 0x27 }
#define NIST_AESGCM_128_CIPHER          { 0x55, 0x2e, 0xbe, 0x01, 0x2e, 0x7b, 0xcf, 0x90, 0xfc, 0xef, 0x71, 0x2f, 0x83, 0x44, 0xe8, 0xf1 }
#define NIST_AESGCM_128_MAC             { 0xec, 0xaa, 0xe9, 0xfc, 0x68, 0x27, 0x6a, 0x45, 0xab, 0x0c, 0xa3, 0xcb, 0x9d, 0xd9, 0x53, 0x9f }

#define NIST_AESGCM_192_KEY             { 0x0c, 0x44, 0xd6, 0xc9, 0x28, 0xee, 0x11, 0x2c, 0xe6, 0x65, 0xfe, 0x54, 0x7e, 0xbd, 0x38, 0x72, \
					  0x98, 0xa9, 0x54, 0xb4, 0x62, 0xf6, 0x95, 0xd8 }
#define NIST_AESGCM_192_IV              { 0x18, 0xb8, 0xf3, 0x20, 0xfe, 0xf4, 0xae, 0x8c, 0xcb, 0xe8, 0xf9, 0x52 }
#define NIST_AESGCM_192_ADATA           { 0x73, 0x41, 0xd4, 0x3f, 0x98, 0xcf, 0x38, 0x82, 0x21, 0x18, 0x09, 0x41, 0x97, 0x03, 0x76, 0xe8 }
#define NIST_AESGCM_192_PLAIN_TEXT      { 0x96, 0xad, 0x07, 0xf9, 0xb6, 0x28, 0xb6, 0x52, 0xcf, 0x86, 0xcb, 0x73, 0x17, 0x88, 0x6f, 0x51 }
#define NIST_AESGCM_192_CIPHER          { 0xa6, 0x64, 0x07, 0x81, 0x33, 0x40, 0x5e, 0xb9, 0x09, 0x4d, 0x36, 0xf7, 0xe0, 0x70, 0x19, 0x1f }
#define NIST_AESGCM_192_MAC             { 0xe8, 0xf9, 0xc3, 0x17, 0x84, 0x7c, 0xe3, 0xf3, 0xc2, 0x39, 0x94, 0xa4, 0x02, 0xf0, 0x65, 0x81 }

#define NIST_AESGCM_256_KEY             { 0x54, 0xe3, 0x52, 0xea, 0x1d, 0x84, 0xbf, 0xe6, 0x4a, 0x10, 0x11, 0x09, 0x61, 0x11, 0xfb, 0xe7, \
					  0x66, 0x8a, 0xd2, 0x20, 0x3d, 0x90, 0x2a, 0x01, 0x45, 0x8c, 0x3b, 0xbd, 0x85, 0xbf, 0xce, 0x14 }
#define NIST_AESGCM_256_IV              { 0xdf, 0x7c, 0x3b, 0xca, 0x00, 0x39, 0x6d, 0x0c, 0x01, 0x84, 0x95, 0xd9 }
#define NIST_AESGCM_256_ADATA           { 0x7e, 0x96, 0x8d, 0x71, 0xb5, 0x0c, 0x1f, 0x11, 0xfd, 0x00, 0x1f, 0x3f, 0xef, 0x49, 0xd0, 0x45 }
#define NIST_AESGCM_256_PLAIN_TEXT      { 0x85, 0xfc, 0x3d, 0xfa, 0xd9, 0xb5, 0xa8, 0xd3, 0x25, 0x8e, 0x4f, 0xc4, 0x45, 0x71, 0xbd, 0x3b }
#define NIST_AESGCM_256_CIPHER          { 0x42, 0x6e, 0x0e, 0xfc, 0x69, 0x3b, 0x7b, 0xe1, 0xf3, 0x01, 0x8d, 0xb7, 0xdd, 0xbb, 0x7e, 0x4d }
#define NIST_AESGCM_256_MAC             { 0xee, 0x82, 0x57, 0x79, 0x5b, 0xe6, 0xa1, 0x16, 0x4d, 0x7e, 0x1d, 0x2d, 0x6c, 0xac, 0x77, 0xa7 }

/* NIST HASH */
#define NIST_SHA_MSG_SIZE               16

#define NIST_SHA_1_MSG                  { 0x35, 0x52, 0x69, 0x4c, 0xdf, 0x66, 0x3f, 0xd9, 0x4b, 0x22, 0x47, 0x47, 0xac, 0x40, 0x6a, 0xaf }
#define NIST_SHA_1_MD                   { 0xa1, 0x50, 0xde, 0x92, 0x74, 0x54, 0x20, 0x2d, 0x94, 0xe6, 0x56, 0xde, 0x4c, 0x7c, 0x0c, 0xa6, \
					  0x91, 0xde, 0x95, 0x5d }

#define NIST_SHA_256_MSG                { 0x0a, 0x27, 0x84, 0x7c, 0xdc, 0x98, 0xbd, 0x6f, 0x62, 0x22, 0x0b, 0x04, 0x6e, 0xdd, 0x76, 0x2b }
#define NIST_SHA_256_MD                 { 0x80, 0xc2, 0x5e, 0xc1, 0x60, 0x05, 0x87, 0xe7, 0xf2, 0x8b, 0x18, 0xb1, 0xb1, 0x8e, 0x3c, 0xdc, \
					  0x89, 0x92, 0x8e, 0x39, 0xca, 0xb3, 0xbc, 0x25, 0xe4, 0xd4, 0xa4, 0xc1, 0x39, 0xbc, 0xed, 0xc4 }

#define NIST_SHA_512_MSG                { 0xcd, 0x67, 0xbd, 0x40, 0x54, 0xaa, 0xa3, 0xba, 0xa0, 0xdb, 0x17, 0x8c, 0xe2, 0x32, 0xfd, 0x5a }
#define NIST_SHA_512_MD                 { 0x0d, 0x85, 0x21, 0xf8, 0xf2, 0xf3, 0x90, 0x03, 0x32, 0xd1, 0xa1, 0xa5, 0x5c, 0x60, 0xba, 0x81, \
					  0xd0, 0x4d, 0x28, 0xdf, 0xe8, 0xc5, 0x04, 0xb6, 0x32, 0x8a, 0xe7, 0x87, 0x92, 0x5f, 0xe0, 0x18, \
					  0x8f, 0x2b, 0xa9, 0x1c, 0x3a, 0x9f, 0x0c, 0x16, 0x53, 0xc4, 0xbf, 0x0a, 0xda, 0x35, 0x64, 0x55, \
					  0xea, 0x36, 0xfd, 0x31, 0xf8, 0xe7, 0x3e, 0x39, 0x51, 0xca, 0xd4, 0xeb, 0xba, 0x8c, 0x6e, 0x04 }

/* NIST HMAC */
#define NIST_HMAC_MSG_SIZE              128

#define NIST_HMAC_SHA1_KEY_SIZE         10
#define NIST_HMAC_SHA1_KEY		{ 0x59, 0x78, 0x59, 0x28, 0xd7, 0x25, 0x16, 0xe3, 0x12, 0x72 }
#define NIST_HMAC_SHA1_MSG		{ 0xa3, 0xce, 0x88, 0x99, 0xdf, 0x10, 0x22, 0xe8, 0xd2, 0xd5, 0x39, 0xb4, 0x7b, 0xf0, 0xe3, 0x09, \
					  0xc6, 0x6f, 0x84, 0x09, 0x5e, 0x21, 0x43, 0x8e, 0xc3, 0x55, 0xbf, 0x11, 0x9c, 0xe5, 0xfd, 0xcb, \
					  0x4e, 0x73, 0xa6, 0x19, 0xcd, 0xf3, 0x6f, 0x25, 0xb3, 0x69, 0xd8, 0xc3, 0x8f, 0xf4, 0x19, 0x99, \
					  0x7f, 0x0c, 0x59, 0x83, 0x01, 0x08, 0x22, 0x36, 0x06, 0xe3, 0x12, 0x23, 0x48, 0x3f, 0xd3, 0x9e, \
					  0xde, 0xaa, 0x4d, 0x3f, 0x0d, 0x21, 0x19, 0x88, 0x62, 0xd2, 0x39, 0xc9, 0xfd, 0x26, 0x07, 0x41, \
					  0x30, 0xff, 0x6c, 0x86, 0x49, 0x3f, 0x52, 0x27, 0xab, 0x89, 0x5c, 0x8f, 0x24, 0x4b, 0xd4, 0x2c, \
					  0x7a, 0xfc, 0xe5, 0xd1, 0x47, 0xa2, 0x0a, 0x59, 0x07, 0x98, 0xc6, 0x8e, 0x70, 0x8e, 0x96, 0x49, \
					  0x02, 0xd1, 0x24, 0xda, 0xde, 0xcd, 0xbd, 0xa9, 0xdb, 0xd0, 0x05, 0x1e, 0xd7, 0x10, 0xe9, 0xbf }
#define NIST_HMAC_SHA1_MD               { 0x3c, 0x81, 0x62, 0x58, 0x9a, 0xaf, 0xae, 0xe0, 0x24, 0xfc, 0x9a, 0x5c, 0xa5, 0x0d, 0xd2, 0x33, \
					  0x6f, 0xe3, 0xeb, 0x28 }

#define NIST_HMAC_SHA256_KEY_SIZE       40
#define NIST_HMAC_SHA256_KEY		{ 0x97, 0x79, 0xd9, 0x12, 0x06, 0x42, 0x79, 0x7f, 0x17, 0x47, 0x02, 0x5d, 0x5b, 0x22, 0xb7, 0xac, \
					  0x60, 0x7c, 0xab, 0x08, 0xe1, 0x75, 0x8f, 0x2f, 0x3a, 0x46, 0xc8, 0xbe, 0x1e, 0x25, 0xc5, 0x3b, \
					  0x8c, 0x6a, 0x8f, 0x58, 0xff, 0xef, 0xa1, 0x76 }
#define NIST_HMAC_SHA256_MSG		{ 0xb1, 0x68, 0x9c, 0x25, 0x91, 0xea, 0xf3, 0xc9, 0xe6, 0x60, 0x70, 0xf8, 0xa7, 0x79, 0x54, 0xff, \
					  0xb8, 0x17, 0x49, 0xf1, 0xb0, 0x03, 0x46, 0xf9, 0xdf, 0xe0, 0xb2, 0xee, 0x90, 0x5d, 0xcc, 0x28, \
					  0x8b, 0xaf, 0x4a, 0x92, 0xde, 0x3f, 0x40, 0x01, 0xdd, 0x9f, 0x44, 0xc4, 0x68, 0xc3, 0xd0, 0x7d, \
					  0x6c, 0x6e, 0xe8, 0x2f, 0xac, 0xea, 0xfc, 0x97, 0xc2, 0xfc, 0x0f, 0xc0, 0x60, 0x17, 0x19, 0xd2, \
					  0xdc, 0xd0, 0xaa, 0x2a, 0xec, 0x92, 0xd1, 0xb0, 0xae, 0x93, 0x3c, 0x65, 0xeb, 0x06, 0xa0, 0x3c, \
					  0x9c, 0x93, 0x5c, 0x2b, 0xad, 0x04, 0x59, 0x81, 0x02, 0x41, 0x34, 0x7a, 0xb8, 0x7e, 0x9f, 0x11, \
					  0xad, 0xb3, 0x04, 0x15, 0x42, 0x4c, 0x6c, 0x7f, 0x5f, 0x22, 0xa0, 0x03, 0xb8, 0xab, 0x8d, 0xe5, \
					  0x4f, 0x6d, 0xed, 0x0e, 0x3a, 0xb9, 0x24, 0x5f, 0xa7, 0x95, 0x68, 0x45, 0x1d, 0xfa, 0x25, 0x8e }
#define NIST_HMAC_SHA256_MD             { 0x76, 0x9f, 0x00, 0xd3, 0xe6, 0xa6, 0xcc, 0x1f, 0xb4, 0x26, 0xa1, 0x4a, 0x4f, 0x76, 0xc6, 0x46, \
					  0x2e, 0x61, 0x49, 0x72, 0x6e, 0x0d, 0xee, 0x0e, 0xc0, 0xcf, 0x97, 0xa1, 0x66, 0x05, 0xac, 0x8b }

#define NIST_HMAC_SHA512_KEY_SIZE       100
#define NIST_HMAC_SHA512_KEY		{ 0x57, 0xc2, 0xeb, 0x67, 0x7b, 0x50, 0x93, 0xb9, 0xe8, 0x29, 0xea, 0x4b, 0xab, 0xb5, 0x0b, 0xde, \
					  0x55, 0xd0, 0xad, 0x59, 0xfe, 0xc3, 0x4a, 0x61, 0x89, 0x73, 0x80, 0x2b, 0x2a, 0xd9, 0xb7, 0x8e, \
					  0x26, 0xb2, 0x04, 0x5d, 0xda, 0x78, 0x4d, 0xf3, 0xff, 0x90, 0xae, 0x0f, 0x2c, 0xc5, 0x1c, 0xe3, \
					  0x9c, 0xf5, 0x48, 0x67, 0x32, 0x0a, 0xc6, 0xf3, 0xba, 0x2c, 0x6f, 0x0d, 0x72, 0x36, 0x04, 0x80, \
					  0xc9, 0x66, 0x14, 0xae, 0x66, 0x58, 0x1f, 0x26, 0x6c, 0x35, 0xfb, 0x79, 0xfd, 0x28, 0x77, 0x4a, \
					  0xfd, 0x11, 0x3f, 0xa5, 0x18, 0x7e, 0xff, 0x92, 0x06, 0xd7, 0xcb, 0xe9, 0x0d, 0xd8, 0xbf, 0x67, \
					  0xc8, 0x44, 0xe2, 0x02 }
#define NIST_HMAC_SHA512_MSG		{ 0x24, 0x23, 0xdf, 0xf4, 0x8b, 0x31, 0x2b, 0xe8, 0x64, 0xcb, 0x34, 0x90, 0x64, 0x1f, 0x79, 0x3d, \
					  0x2b, 0x9f, 0xb6, 0x8a, 0x77, 0x63, 0xb8, 0xe2, 0x98, 0xc8, 0x6f, 0x42, 0x24, 0x5e, 0x45, 0x40, \
					  0xeb, 0x01, 0xae, 0x4d, 0x2d, 0x45, 0x00, 0x37, 0x0b, 0x18, 0x86, 0xf2, 0x3c, 0xa2, 0xcf, 0x97, \
					  0x01, 0x70, 0x4c, 0xad, 0x5b, 0xd2, 0x1b, 0xa8, 0x7b, 0x81, 0x1d, 0xaf, 0x7a, 0x85, 0x4e, 0xa2, \
					  0x4a, 0x56, 0x56, 0x5c, 0xed, 0x42, 0x5b, 0x35, 0xe4, 0x0e, 0x1a, 0xcb, 0xeb, 0xe0, 0x36, 0x03, \
					  0xe3, 0x5d, 0xcf, 0x4a, 0x10, 0x0e, 0x57, 0x21, 0x84, 0x08, 0xa1, 0xd8, 0xdb, 0xcc, 0x3b, 0x99, \
					  0x29, 0x6c, 0xfe, 0xa9, 0x31, 0xef, 0xe3, 0xeb, 0xd8, 0xf7, 0x19, 0xa6, 0xd9, 0xa1, 0x54, 0x87, \
					  0xb9, 0xad, 0x67, 0xea, 0xfe, 0xdf, 0x15, 0x55, 0x9c, 0xa4, 0x24, 0x45, 0xb0, 0xf9, 0xb4, 0x2e }
#define NIST_HMAC_SHA512_MD             { 0x33, 0xc5, 0x11, 0xe9, 0xbc, 0x23, 0x07, 0xc6, 0x27, 0x58, 0xdf, 0x61, 0x12, 0x5a, 0x98, 0x0e, \
					  0xe6, 0x4c, 0xef, 0xeb, 0xd9, 0x09, 0x31, 0xcb, 0x91, 0xc1, 0x37, 0x42, 0xd4, 0x71, 0x4c, 0x06, \
					  0xde, 0x40, 0x03, 0xfa, 0xf3, 0xc4, 0x1c, 0x06, 0xae, 0xfc, 0x63, 0x8a, 0xd4, 0x7b, 0x21, 0x90, \
					  0x6e, 0x6b, 0x10, 0x48, 0x16, 0xb7, 0x2d, 0xe6, 0x26, 0x9e, 0x04, 0x5a, 0x1f, 0x44, 0x29, 0xd4 }

