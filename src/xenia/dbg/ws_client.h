/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2013 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#ifndef XENIA_DBG_WS_CLIENT_H_
#define XENIA_DBG_WS_CLIENT_H_

#include <xenia/common.h>
#include <xenia/core.h>

#include <vector>

#include <xenia/dbg/client.h>


struct wslay_event_msg;


namespace xe {
namespace dbg {


class WsClient : public Client {
public:
  WsClient(Debugger* debugger, int socket_id);
  virtual ~WsClient();

  socket_t socket_id();

  virtual int Setup();

  virtual void Write(uint8_t** buffers, size_t* lengths, size_t count);

private:
  static void StartCallback(void* param);

  int PerformHandshake();
  void EventThread();

  xe_thread_ref thread_;

  socket_t          socket_id_;
  xe_socket_loop_t* loop_;
  xe_mutex_t*       mutex_;
  std::vector<struct wslay_event_msg> pending_messages_;
};


}  // namespace dbg
}  // namespace xe


#endif  // XENIA_DBG_WS_CLIENT_H_
