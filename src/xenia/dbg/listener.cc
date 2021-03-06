/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2013 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#include <xenia/dbg/listener.h>


using namespace xe;
using namespace xe::dbg;


Listener::Listener(Debugger* debugger) :
    debugger_(debugger) {
}

Listener::~Listener() {
}
