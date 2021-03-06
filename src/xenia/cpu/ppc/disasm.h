/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2013 Ben Vanik. All rights reserved.                             *
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 */

#ifndef XENIA_CPU_PPC_DISASM_H_
#define XENIA_CPU_PPC_DISASM_H_

#include <xenia/cpu/ppc/instr.h>


namespace xe {
namespace cpu {
namespace ppc {


void RegisterDisasmCategoryALU();
void RegisterDisasmCategoryControl();
void RegisterDisasmCategoryFPU();
void RegisterDisasmCategoryMemory();


#define XEDISASMR(name, opcode, format) int InstrDisasm_##name

#define XEREGISTERINSTR(name, opcode) \
    RegisterInstrDisassemble(opcode, (InstrDisassembleFn)InstrDisasm_##name);

#define XEINSTRNOTIMPLEMENTED()
//#define XEINSTRNOTIMPLEMENTED XEASSERTALWAYS


}  // namespace ppc
}  // namespace cpu
}  // namespace xe


#endif  // XENIA_CPU_PPC_DISASM_H_
