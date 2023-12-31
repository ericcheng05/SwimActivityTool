////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2016 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 20.14Release
// Tag = production/akw/20.14.00-0-g448ef52
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_CRC_HPP)
#define FIT_CRC_HPP

#include "fit.hpp"

namespace fit
{

class CRC
{
   public:
      static FIT_UINT16 Get16(FIT_UINT16 crc, FIT_UINT8 byte);
      static FIT_UINT16 Calc16(const volatile void *data, FIT_UINT32 size);
};


} // namespace fit

#endif // !defined(FIT_CRC_HPP)
