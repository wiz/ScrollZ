#ifndef _blowfish_h_
#define _blowfish_h_

/*
 * Routines for Blowfish encryption
 *
 * $Id: blowfish.h,v 1.6 2000-10-24 18:53:20 f Exp $
 */

static unsigned int F _((unsigned int));
static void BlowfishEncipher _((unsigned int *, unsigned int *));
static void BlowfishDecipher _((unsigned int *, unsigned int *));
static void BlowfishInit _((char *, int, int));
int EncryptString _((char *, char *, char *, int, int));
int  Base64Decode _((char));
int DecryptString _((char *, char *, char *, int, int));

#endif /* _blowfish_h_ */
