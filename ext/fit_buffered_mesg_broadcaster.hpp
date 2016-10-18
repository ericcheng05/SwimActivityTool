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



#if !defined(FIT_BUFFERED_MESG_BROADCASTER_HPP)
#define FIT_BUFFERED_MESG_BROADCASTER_HPP

#include "fit_mesg_broadcaster.hpp"
#include "fit_mesg_broadcast_plugin.hpp"
#include <vector>


namespace fit
{

class BufferedMesgBroadcaster : public MesgBroadcaster
{
   public:
     void RegisterMesgBroadcastPlugin(MesgBroadcastPlugin* plugin);
     void OnMesg(Mesg& mesg);
     void Broadcast(void);

   private:
     std::vector<Mesg> mesgs;
     std::vector<MesgBroadcastPlugin*> plugins;
};

} // namespace fit

#endif // !defined(FIT_BUFFERED_MESG_BROADCASTER_HPP)
