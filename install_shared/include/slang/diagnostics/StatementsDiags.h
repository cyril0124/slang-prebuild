//------------------------------------------------------------------------------
//! @file StatementsDiags.h
//! @brief Generated diagnostic enums for the Statements subsystem
//
// SPDX-FileCopyrightText: Michael Popoloski
// SPDX-License-Identifier: MIT
//------------------------------------------------------------------------------
#pragma once

#include "slang/diagnostics/Diagnostics.h"

namespace slang::diag {

inline constexpr DiagCode AlwaysFFEventControl(DiagSubsystem::Statements, 0);
inline constexpr DiagCode AssertionExprType(DiagSubsystem::Statements, 1);
inline constexpr DiagCode BadDisableSoft(DiagSubsystem::Statements, 2);
inline constexpr DiagCode BadForceNetType(DiagSubsystem::Statements, 3);
inline constexpr DiagCode BadProceduralAssign(DiagSubsystem::Statements, 4);
inline constexpr DiagCode BadSolveBefore(DiagSubsystem::Statements, 5);
inline constexpr DiagCode BlockingInAlwaysFF(DiagSubsystem::Statements, 6);
inline constexpr DiagCode CaseInsideKeyword(DiagSubsystem::Statements, 7);
inline constexpr DiagCode ClockVarSyncDrive(DiagSubsystem::Statements, 8);
inline constexpr DiagCode ClockingBlockEventEdge(DiagSubsystem::Statements, 9);
inline constexpr DiagCode ConcurrentAssertActionBlock(DiagSubsystem::Statements, 10);
inline constexpr DiagCode CoverStmtNoFail(DiagSubsystem::Statements, 11);
inline constexpr DiagCode DeferredAssertAutoRefArg(DiagSubsystem::Statements, 12);
inline constexpr DiagCode DeferredAssertNonVoid(DiagSubsystem::Statements, 13);
inline constexpr DiagCode DeferredAssertOutArg(DiagSubsystem::Statements, 14);
inline constexpr DiagCode DelayNotNumeric(DiagSubsystem::Statements, 15);
inline constexpr DiagCode DisableIffLocalVar(DiagSubsystem::Statements, 16);
inline constexpr DiagCode DisableIffMatched(DiagSubsystem::Statements, 17);
inline constexpr DiagCode ExprNotConstraint(DiagSubsystem::Statements, 18);
inline constexpr DiagCode ExprNotStatement(DiagSubsystem::Statements, 19);
inline constexpr DiagCode ForeachDynamicDimAfterSkipped(DiagSubsystem::Statements, 20);
inline constexpr DiagCode ForeachWildcardIndex(DiagSubsystem::Statements, 21);
inline constexpr DiagCode ForkJoinAlwaysComb(DiagSubsystem::Statements, 22);
inline constexpr DiagCode GlobalSampledValueNested(DiagSubsystem::Statements, 23);
inline constexpr DiagCode InequivalentUniquenessTypes(DiagSubsystem::Statements, 24);
inline constexpr DiagCode InvalidBlockEventTarget(DiagSubsystem::Statements, 25);
inline constexpr DiagCode InvalidCommaInPropExpr(DiagSubsystem::Statements, 26);
inline constexpr DiagCode InvalidDeferredAssertAction(DiagSubsystem::Statements, 27);
inline constexpr DiagCode InvalidDisableTarget(DiagSubsystem::Statements, 28);
inline constexpr DiagCode InvalidEventExpression(DiagSubsystem::Statements, 29);
inline constexpr DiagCode InvalidForStepExpression(DiagSubsystem::Statements, 30);
inline constexpr DiagCode InvalidMatchItem(DiagSubsystem::Statements, 31);
inline constexpr DiagCode InvalidSignalEventInSeq(DiagSubsystem::Statements, 32);
inline constexpr DiagCode InvalidSyntaxInEventExpr(DiagSubsystem::Statements, 33);
inline constexpr DiagCode InvalidUniquenessExpr(DiagSubsystem::Statements, 34);
inline constexpr DiagCode LocalVarMatchItem(DiagSubsystem::Statements, 35);
inline constexpr DiagCode LoopVarShadowsArray(DiagSubsystem::Statements, 36);
inline constexpr DiagCode MatchItemsAdmitEmpty(DiagSubsystem::Statements, 37);
inline constexpr DiagCode NestedDisableIff(DiagSubsystem::Statements, 38);
inline constexpr DiagCode NoDefaultClocking(DiagSubsystem::Statements, 39);
inline constexpr DiagCode NonIntegralConstraintExpr(DiagSubsystem::Statements, 40);
inline constexpr DiagCode NonIntegralConstraintLiteral(DiagSubsystem::Statements, 41);
inline constexpr DiagCode NotAnArray(DiagSubsystem::Statements, 42);
inline constexpr DiagCode NotAnEvent(DiagSubsystem::Statements, 43);
inline constexpr DiagCode OutRefFuncConstraint(DiagSubsystem::Statements, 44);
inline constexpr DiagCode PropAbortLocalVar(DiagSubsystem::Statements, 45);
inline constexpr DiagCode PropAbortMatched(DiagSubsystem::Statements, 46);
inline constexpr DiagCode PropExprInSequence(DiagSubsystem::Statements, 47);
inline constexpr DiagCode PropInstanceRepetition(DiagSubsystem::Statements, 48);
inline constexpr DiagCode PropertyLhsInvalid(DiagSubsystem::Statements, 49);
inline constexpr DiagCode RandCInDist(DiagSubsystem::Statements, 50);
inline constexpr DiagCode RandCInSoft(DiagSubsystem::Statements, 51);
inline constexpr DiagCode RandCInSolveBefore(DiagSubsystem::Statements, 52);
inline constexpr DiagCode RandCInUnique(DiagSubsystem::Statements, 53);
inline constexpr DiagCode RandNeededInDist(DiagSubsystem::Statements, 54);
inline constexpr DiagCode RecursivePropDisableIff(DiagSubsystem::Statements, 55);
inline constexpr DiagCode RepeatControlNotEvent(DiagSubsystem::Statements, 56);
inline constexpr DiagCode RepeatNotNumeric(DiagSubsystem::Statements, 57);
inline constexpr DiagCode RestrictStmtNoFail(DiagSubsystem::Statements, 58);
inline constexpr DiagCode ReturnInParallel(DiagSubsystem::Statements, 59);
inline constexpr DiagCode ReturnNotInSubroutine(DiagSubsystem::Statements, 60);
inline constexpr DiagCode SeqInstanceRepetition(DiagSubsystem::Statements, 61);
inline constexpr DiagCode SeqPropAdmitEmpty(DiagSubsystem::Statements, 62);
inline constexpr DiagCode SeqRangeMinMax(DiagSubsystem::Statements, 63);
inline constexpr DiagCode StatementNotInLoop(DiagSubsystem::Statements, 64);
inline constexpr DiagCode SubroutineMatchAutoRefArg(DiagSubsystem::Statements, 65);
inline constexpr DiagCode SubroutineMatchNonVoid(DiagSubsystem::Statements, 66);
inline constexpr DiagCode SubroutineMatchOutArg(DiagSubsystem::Statements, 67);
inline constexpr DiagCode TaskInConstraint(DiagSubsystem::Statements, 68);
inline constexpr DiagCode ThroughoutLhsInvalid(DiagSubsystem::Statements, 69);
inline constexpr DiagCode TimingInFuncNotAllowed(DiagSubsystem::Statements, 70);
inline constexpr DiagCode TooManyForeachVars(DiagSubsystem::Statements, 71);
inline constexpr DiagCode UnexpectedPortDecl(DiagSubsystem::Statements, 72);
inline constexpr DiagCode UnknownConstraintLiteral(DiagSubsystem::Statements, 73);
inline constexpr DiagCode VoidCastFuncCall(DiagSubsystem::Statements, 74);
inline constexpr DiagCode WriteToInputClockVar(DiagSubsystem::Statements, 75);
inline constexpr DiagCode NoteExpandedHere(DiagSubsystem::Statements, 76);
inline constexpr DiagCode NoteWhileExpanding(DiagSubsystem::Statements, 77);
inline constexpr DiagCode BadProceduralForce(DiagSubsystem::Statements, 78);
inline constexpr DiagCode EmptyStatement(DiagSubsystem::Statements, 79);
inline constexpr DiagCode EventExpressionConstant(DiagSubsystem::Statements, 80);
inline constexpr DiagCode MultiBitEdge(DiagSubsystem::Statements, 81);
inline constexpr DiagCode PointlessVoidCast(DiagSubsystem::Statements, 82);
inline constexpr DiagCode UnusedResult(DiagSubsystem::Statements, 83);

}
