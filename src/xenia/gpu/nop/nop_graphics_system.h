/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2013 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#ifndef XENIA_GPU_NOP_NOP_GRAPHICS_SYSTEM_H_
#define XENIA_GPU_NOP_NOP_GRAPHICS_SYSTEM_H_

#include <xenia/core.h>

#include <xenia/gpu/graphics_system.h>
#include <xenia/gpu/nop/nop-private.h>


namespace xe {
namespace gpu {
namespace nop {


class NopGraphicsSystem : public GraphicsSystem {
public:
  NopGraphicsSystem(const CreationParams* params);
  virtual ~NopGraphicsSystem();

  virtual void Initialize();
};


}  // namespace nop
}  // namespace gpu
}  // namespace xe


#endif  // XENIA_GPU_NOP_NOP_GRAPHICS_SYSTEM_H_
