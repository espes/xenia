/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2013 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#ifndef XENIA_CPU_X64_X64_EMIT_H_
#define XENIA_CPU_X64_X64_EMIT_H_

#include <xenia/cpu/ppc/instr.h>
#include <xenia/cpu/ppc/state.h>
#include <xenia/cpu/x64/x64_emitter.h>


namespace xe {
namespace cpu {
namespace x64 {


void X64RegisterEmitCategoryALU();
void X64RegisterEmitCategoryControl();
void X64RegisterEmitCategoryFPU();
void X64RegisterEmitCategoryMemory();


#define XEEMITTER(name, opcode, format) int InstrEmit_##name

#define XEREGISTERINSTR(name, opcode) \
    RegisterInstrEmit(opcode, (InstrEmitFn)InstrEmit_##name);

#define XEINSTRNOTIMPLEMENTED()
//#define XEINSTRNOTIMPLEMENTED XEASSERTALWAYS


}  // namespace x64
}  // namespace cpu
}  // namespace xe


#endif  // XENIA_CPU_X64_X64_EMIT_H_
