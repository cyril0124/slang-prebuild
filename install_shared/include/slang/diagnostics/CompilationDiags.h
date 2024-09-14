//------------------------------------------------------------------------------
//! @file CompilationDiags.h
//! @brief Generated diagnostic enums for the Compilation subsystem
//
// SPDX-FileCopyrightText: Michael Popoloski
// SPDX-License-Identifier: MIT
//------------------------------------------------------------------------------
#pragma once

#include "slang/diagnostics/Diagnostics.h"

namespace slang::diag {

inline constexpr DiagCode BindTypeParamMismatch(DiagSubsystem::Compilation, 0);
inline constexpr DiagCode BindTypeParamNotFound(DiagSubsystem::Compilation, 1);
inline constexpr DiagCode ConfigParamsIgnored(DiagSubsystem::Compilation, 2);
inline constexpr DiagCode DPIExportDifferentScope(DiagSubsystem::Compilation, 3);
inline constexpr DiagCode DPIExportDuplicate(DiagSubsystem::Compilation, 4);
inline constexpr DiagCode DPIExportDuplicateCId(DiagSubsystem::Compilation, 5);
inline constexpr DiagCode DPIExportImportedFunc(DiagSubsystem::Compilation, 6);
inline constexpr DiagCode DPIExportKindMismatch(DiagSubsystem::Compilation, 7);
inline constexpr DiagCode DPISignatureMismatch(DiagSubsystem::Compilation, 8);
inline constexpr DiagCode DefParamCycle(DiagSubsystem::Compilation, 9);
inline constexpr DiagCode DefParamTargetChange(DiagSubsystem::Compilation, 10);
inline constexpr DiagCode ExternDeclMismatchImpl(DiagSubsystem::Compilation, 11);
inline constexpr DiagCode ExternDeclMismatchPrev(DiagSubsystem::Compilation, 12);
inline constexpr DiagCode InfinitelyRecursiveHierarchy(DiagSubsystem::Compilation, 13);
inline constexpr DiagCode InvalidBindTarget(DiagSubsystem::Compilation, 14);
inline constexpr DiagCode InvalidDPICIdentifier(DiagSubsystem::Compilation, 15);
inline constexpr DiagCode InvalidParamOverrideOpt(DiagSubsystem::Compilation, 16);
inline constexpr DiagCode InvalidTopModule(DiagSubsystem::Compilation, 17);
inline constexpr DiagCode MaxInstanceDepthExceeded(DiagSubsystem::Compilation, 18);
inline constexpr DiagCode MissingExportImpl(DiagSubsystem::Compilation, 19);
inline constexpr DiagCode MissingExternImpl(DiagSubsystem::Compilation, 20);
inline constexpr DiagCode MissingExternModuleImpl(DiagSubsystem::Compilation, 21);
inline constexpr DiagCode MissingTimeScale(DiagSubsystem::Compilation, 22);
inline constexpr DiagCode MultipleDefaultClocking(DiagSubsystem::Compilation, 23);
inline constexpr DiagCode MultipleDefaultDisable(DiagSubsystem::Compilation, 24);
inline constexpr DiagCode MultipleGlobalClocking(DiagSubsystem::Compilation, 25);
inline constexpr DiagCode MultipleTopDupName(DiagSubsystem::Compilation, 26);
inline constexpr DiagCode NestedConfigMultipleTops(DiagSubsystem::Compilation, 27);
inline constexpr DiagCode NoDeclInClass(DiagSubsystem::Compilation, 28);
inline constexpr DiagCode TopModuleIfacePort(DiagSubsystem::Compilation, 29);
inline constexpr DiagCode TopModuleRefPort(DiagSubsystem::Compilation, 30);
inline constexpr DiagCode TopModuleUnnamedRefPort(DiagSubsystem::Compilation, 31);
inline constexpr DiagCode UnknownLibrary(DiagSubsystem::Compilation, 32);
inline constexpr DiagCode WrongBindTargetDef(DiagSubsystem::Compilation, 33);
inline constexpr DiagCode DuplicateDefparam(DiagSubsystem::Compilation, 34);
inline constexpr DiagCode NoTopModules(DiagSubsystem::Compilation, 35);
inline constexpr DiagCode UnassignedVariable(DiagSubsystem::Compilation, 36);
inline constexpr DiagCode UndrivenNet(DiagSubsystem::Compilation, 37);
inline constexpr DiagCode UndrivenPort(DiagSubsystem::Compilation, 38);
inline constexpr DiagCode UnusedArgument(DiagSubsystem::Compilation, 39);
inline constexpr DiagCode UnusedAssertionDecl(DiagSubsystem::Compilation, 40);
inline constexpr DiagCode UnusedButSetNet(DiagSubsystem::Compilation, 41);
inline constexpr DiagCode UnusedButSetPort(DiagSubsystem::Compilation, 42);
inline constexpr DiagCode UnusedButSetVariable(DiagSubsystem::Compilation, 43);
inline constexpr DiagCode UnusedDefinition(DiagSubsystem::Compilation, 44);
inline constexpr DiagCode UnusedGenvar(DiagSubsystem::Compilation, 45);
inline constexpr DiagCode UnusedImplicitNet(DiagSubsystem::Compilation, 46);
inline constexpr DiagCode UnusedImport(DiagSubsystem::Compilation, 47);
inline constexpr DiagCode UnusedNet(DiagSubsystem::Compilation, 48);
inline constexpr DiagCode UnusedParameter(DiagSubsystem::Compilation, 49);
inline constexpr DiagCode UnusedPort(DiagSubsystem::Compilation, 50);
inline constexpr DiagCode UnusedTypeParameter(DiagSubsystem::Compilation, 51);
inline constexpr DiagCode UnusedTypedef(DiagSubsystem::Compilation, 52);
inline constexpr DiagCode UnusedVariable(DiagSubsystem::Compilation, 53);
inline constexpr DiagCode UnusedWildcardImport(DiagSubsystem::Compilation, 54);

}
