/**************************************************************************************************

  Verteron Disassembler Engine
  Version 1.0

  Remarks         : Freeware, Copyright must be included

  Original Author : athre0z
  Modifications   :

  Last change     : 04. February 2015

 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.

**************************************************************************************************/

#include "VXDisassemblerUtilsC.h"
#include "VXDisassemblerUtils.h"

static_assert(sizeof(VXInstructionInfo) == sizeof(Verteron::VXInstructionInfo), "struct rekt");
static_assert(sizeof(VXOperandInfo) == sizeof(Verteron::VXOperandInfo), "struct rekt");

uint64_t VDECalcAbsoluteTarget(const VXInstructionInfo *info, const VXOperandInfo *operand)
{
    return Verteron::VDECalcAbsoluteTarget(
        *reinterpret_cast<const Verteron::VXInstructionInfo*>(info),
        *reinterpret_cast<const Verteron::VXOperandInfo*>(operand));
}