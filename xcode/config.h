//
// Xcode configuration header file for LPrint, a Label Printer Utility
//
// Copyright © 2019-2020 by Michael R Sweet.
//
// Licensed under Apache License v2.0.  See the file "LICENSE" for more
// information.
//

// Version number
#define LPRINT_VERSION "1.0b1"


// DNS-SD (mDNSResponder or Avahi)
#define HAVE_DNSSD 1
/* #undef HAVE_AVAHI */


// libpng
#define HAVE_LIBPNG 1


// libusb
#define HAVE_LIBUSB 1


// PAM
#define HAVE_LIBPAM 1
#define HAVE_SECURITY_PAM_APPL_H 1
/* #undef HAVE_PAM_PAM_APPL_H */
