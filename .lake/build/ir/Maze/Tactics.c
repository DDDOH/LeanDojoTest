// Lean compiler output
// Module: Maze.Tactics
// Imports: Init Lean Maze.Basic Maze.Solver
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l_tacticMy__auto___closed__5;
static lean_object* l_action___closed__8;
static lean_object* l_action___closed__4;
static lean_object* l_action___closed__14;
static lean_object* l_List_forIn_loop___at_myAuto___spec__5___closed__2;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_myAuto___closed__10;
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticMy__auto___closed__4;
lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_flush(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___at_Solver_callSolver___spec__2(lean_object*, lean_object*);
static lean_object* l_myAuto___closed__4;
lean_object* lean_io_process_child_take_stdin(lean_object*, lean_object*, lean_object*);
lean_object* l_extractGameState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_trim(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_myAuto___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_action(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Solver_callSolver___at_myAuto___spec__4___closed__2;
static lean_object* l_action___closed__10;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_action___closed__7;
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_action___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_loop___at_myAuto___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticMy__auto___closed__2;
lean_object* lean_sorry(uint8_t);
static lean_object* l_myAuto___closed__6;
lean_object* lean_io_process_child_wait(lean_object*, lean_object*, lean_object*);
static lean_object* l_myAuto___closed__5;
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getGoals___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_tacticMy__auto;
static lean_object* l_action___closed__2;
LEAN_EXPORT lean_object* l_gameStateToList(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_List_map___at_myAuto___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_myAuto(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
LEAN_EXPORT lean_object* l_List_map___at_myAuto___spec__6(lean_object*, lean_object*);
static lean_object* l_tacticMy__auto___closed__3;
static lean_object* l_Solver_callSolver___at_myAuto___spec__4___closed__8;
lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_action___closed__12;
lean_object* l_IO_FS_Handle_readToEnd_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_map___at_myAuto___spec__1___at_myAuto___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Solver_callSolver___at_myAuto___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
static lean_object* l_myAuto___closed__3;
static lean_object* l_Solver_callSolver___at_myAuto___spec__4___closed__4;
lean_object* lean_io_process_spawn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at_myAuto___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_action___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Solver_callSolver___at_myAuto___spec__4___closed__3;
static lean_object* l_action___closed__5;
static lean_object* l_List_forIn_loop___at_myAuto___spec__5___closed__1;
static lean_object* l_myAuto___closed__1;
static lean_object* l_Solver_callSolver___at_myAuto___spec__4___closed__1;
LEAN_EXPORT lean_object* l_search__proof(lean_object*);
LEAN_EXPORT lean_object* l_List_bindTR_go___at_gameStateToList___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_Rfl_evalApplyRfl___spec__1___rarg(lean_object*);
static lean_object* l_tacticMy__auto___closed__1;
static lean_object* l_action___closed__9;
static lean_object* l_Solver_callSolver___at_myAuto___spec__4___closed__7;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Maze__Tactics______elabRules__tacticMy__auto__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_myAuto___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_search__proof___boxed(lean_object*);
static lean_object* l_myAuto___closed__9;
static lean_object* l_action___closed__3;
static lean_object* l_action___closed__6;
lean_object* l_List_foldl___at_Array_appendList___spec__1___rarg(lean_object*, lean_object*);
static lean_object* l_Solver_callSolver___at_myAuto___spec__4___closed__5;
LEAN_EXPORT lean_object* l_List_map___at_myAuto___spec__1___at_myAuto___spec__2___at_myAuto___spec__3(lean_object*);
static lean_object* l_action___closed__11;
lean_object* l_List_reverse___rarg(lean_object*);
static lean_object* l_action___closed__15;
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_action___closed__13;
LEAN_EXPORT lean_object* l_Solver_callSolver___at_myAuto___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
static lean_object* l_myAuto___closed__7;
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
static lean_object* l_myAuto___closed__2;
static lean_object* l_gameStateToList___closed__1;
static lean_object* l_myAuto___closed__8;
static lean_object* l___aux__Maze__Tactics______elabRules__tacticMy__auto__1___closed__1;
LEAN_EXPORT lean_object* l_coordsToList(lean_object*);
lean_object* l___private_Init_Data_Repr_0__Nat_reprFast(lean_object*);
lean_object* l_String_splitOn(lean_object*, lean_object*);
static lean_object* l_Solver_callSolver___at_myAuto___spec__4___closed__6;
LEAN_EXPORT lean_object* l_search__proof(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = 0;
x_3 = lean_sorry(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_search__proof___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_search__proof(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_action___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticOut", 9, 9);
return x_1;
}
}
static lean_object* _init_l_action___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_action___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_action___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("out", 3, 3);
return x_1;
}
}
static lean_object* _init_l_action___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticWest", 10, 10);
return x_1;
}
}
static lean_object* _init_l_action___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_action___closed__4;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_action___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("west", 4, 4);
return x_1;
}
}
static lean_object* _init_l_action___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticSouth", 11, 11);
return x_1;
}
}
static lean_object* _init_l_action___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_action___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_action___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("south", 5, 5);
return x_1;
}
}
static lean_object* _init_l_action___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticEast", 10, 10);
return x_1;
}
}
static lean_object* _init_l_action___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_action___closed__10;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_action___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("east", 4, 4);
return x_1;
}
}
static lean_object* _init_l_action___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticNorth", 11, 11);
return x_1;
}
}
static lean_object* _init_l_action___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_action___closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_action___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("north", 5, 5);
return x_1;
}
}
LEAN_EXPORT lean_object* l_action(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_dec_eq(x_1, x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_unsigned_to_nat(2u);
x_16 = lean_nat_dec_eq(x_1, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_unsigned_to_nat(3u);
x_18 = lean_nat_dec_eq(x_1, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_unsigned_to_nat(4u);
x_20 = lean_nat_dec_eq(x_1, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_10);
return x_22;
}
else
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = lean_ctor_get(x_8, 5);
lean_inc(x_23);
x_24 = 0;
x_25 = l_Lean_SourceInfo_fromRef(x_23, x_24);
lean_dec(x_23);
x_26 = lean_st_ref_get(x_9, x_10);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_26, 1);
x_29 = lean_ctor_get(x_26, 0);
lean_dec(x_29);
x_30 = l_action___closed__3;
lean_inc(x_25);
lean_ctor_set_tag(x_26, 2);
lean_ctor_set(x_26, 1, x_30);
lean_ctor_set(x_26, 0, x_25);
x_31 = l_action___closed__2;
x_32 = l_Lean_Syntax_node1(x_25, x_31, x_26);
x_33 = l_Lean_Elab_Tactic_evalTactic(x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_28);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_dec(x_26);
x_35 = l_action___closed__3;
lean_inc(x_25);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_25);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_action___closed__2;
x_38 = l_Lean_Syntax_node1(x_25, x_37, x_36);
x_39 = l_Lean_Elab_Tactic_evalTactic(x_38, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_34);
return x_39;
}
}
}
else
{
lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_40 = lean_ctor_get(x_8, 5);
lean_inc(x_40);
x_41 = 0;
x_42 = l_Lean_SourceInfo_fromRef(x_40, x_41);
lean_dec(x_40);
x_43 = lean_st_ref_get(x_9, x_10);
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_ctor_get(x_43, 1);
x_46 = lean_ctor_get(x_43, 0);
lean_dec(x_46);
x_47 = l_action___closed__6;
lean_inc(x_42);
lean_ctor_set_tag(x_43, 2);
lean_ctor_set(x_43, 1, x_47);
lean_ctor_set(x_43, 0, x_42);
x_48 = l_action___closed__5;
x_49 = l_Lean_Syntax_node1(x_42, x_48, x_43);
x_50 = l_Lean_Elab_Tactic_evalTactic(x_49, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_45);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_51 = lean_ctor_get(x_43, 1);
lean_inc(x_51);
lean_dec(x_43);
x_52 = l_action___closed__6;
lean_inc(x_42);
x_53 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_53, 0, x_42);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_action___closed__5;
x_55 = l_Lean_Syntax_node1(x_42, x_54, x_53);
x_56 = l_Lean_Elab_Tactic_evalTactic(x_55, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_51);
return x_56;
}
}
}
else
{
lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_57 = lean_ctor_get(x_8, 5);
lean_inc(x_57);
x_58 = 0;
x_59 = l_Lean_SourceInfo_fromRef(x_57, x_58);
lean_dec(x_57);
x_60 = lean_st_ref_get(x_9, x_10);
x_61 = !lean_is_exclusive(x_60);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_62 = lean_ctor_get(x_60, 1);
x_63 = lean_ctor_get(x_60, 0);
lean_dec(x_63);
x_64 = l_action___closed__9;
lean_inc(x_59);
lean_ctor_set_tag(x_60, 2);
lean_ctor_set(x_60, 1, x_64);
lean_ctor_set(x_60, 0, x_59);
x_65 = l_action___closed__8;
x_66 = l_Lean_Syntax_node1(x_59, x_65, x_60);
x_67 = l_Lean_Elab_Tactic_evalTactic(x_66, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_62);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_68 = lean_ctor_get(x_60, 1);
lean_inc(x_68);
lean_dec(x_60);
x_69 = l_action___closed__9;
lean_inc(x_59);
x_70 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_70, 0, x_59);
lean_ctor_set(x_70, 1, x_69);
x_71 = l_action___closed__8;
x_72 = l_Lean_Syntax_node1(x_59, x_71, x_70);
x_73 = l_Lean_Elab_Tactic_evalTactic(x_72, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_68);
return x_73;
}
}
}
else
{
lean_object* x_74; uint8_t x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_74 = lean_ctor_get(x_8, 5);
lean_inc(x_74);
x_75 = 0;
x_76 = l_Lean_SourceInfo_fromRef(x_74, x_75);
lean_dec(x_74);
x_77 = lean_st_ref_get(x_9, x_10);
x_78 = !lean_is_exclusive(x_77);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_79 = lean_ctor_get(x_77, 1);
x_80 = lean_ctor_get(x_77, 0);
lean_dec(x_80);
x_81 = l_action___closed__12;
lean_inc(x_76);
lean_ctor_set_tag(x_77, 2);
lean_ctor_set(x_77, 1, x_81);
lean_ctor_set(x_77, 0, x_76);
x_82 = l_action___closed__11;
x_83 = l_Lean_Syntax_node1(x_76, x_82, x_77);
x_84 = l_Lean_Elab_Tactic_evalTactic(x_83, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_79);
return x_84;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_85 = lean_ctor_get(x_77, 1);
lean_inc(x_85);
lean_dec(x_77);
x_86 = l_action___closed__12;
lean_inc(x_76);
x_87 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_87, 0, x_76);
lean_ctor_set(x_87, 1, x_86);
x_88 = l_action___closed__11;
x_89 = l_Lean_Syntax_node1(x_76, x_88, x_87);
x_90 = l_Lean_Elab_Tactic_evalTactic(x_89, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_85);
return x_90;
}
}
}
else
{
lean_object* x_91; uint8_t x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_91 = lean_ctor_get(x_8, 5);
lean_inc(x_91);
x_92 = 0;
x_93 = l_Lean_SourceInfo_fromRef(x_91, x_92);
lean_dec(x_91);
x_94 = lean_st_ref_get(x_9, x_10);
x_95 = !lean_is_exclusive(x_94);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_96 = lean_ctor_get(x_94, 1);
x_97 = lean_ctor_get(x_94, 0);
lean_dec(x_97);
x_98 = l_action___closed__15;
lean_inc(x_93);
lean_ctor_set_tag(x_94, 2);
lean_ctor_set(x_94, 1, x_98);
lean_ctor_set(x_94, 0, x_93);
x_99 = l_action___closed__14;
x_100 = l_Lean_Syntax_node1(x_93, x_99, x_94);
x_101 = l_Lean_Elab_Tactic_evalTactic(x_100, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_96);
return x_101;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_102 = lean_ctor_get(x_94, 1);
lean_inc(x_102);
lean_dec(x_94);
x_103 = l_action___closed__15;
lean_inc(x_93);
x_104 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_104, 0, x_93);
lean_ctor_set(x_104, 1, x_103);
x_105 = l_action___closed__14;
x_106 = l_Lean_Syntax_node1(x_93, x_105, x_104);
x_107 = l_Lean_Elab_Tactic_evalTactic(x_106, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_102);
return x_107;
}
}
}
}
LEAN_EXPORT lean_object* l_action___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_action(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* l_coordsToList(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_box(0);
lean_ctor_set_tag(x_1, 1);
lean_ctor_set(x_1, 1, x_5);
lean_ctor_set(x_1, 0, x_4);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_1);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_List_bindTR_go___at_gameStateToList___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_array_to_list(lean_box(0), x_2);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_coordsToList(x_4);
x_7 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_2, x_6);
x_1 = x_5;
x_2 = x_7;
goto _start;
}
}
}
static lean_object* _init_l_gameStateToList___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_gameStateToList(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_coordsToList(x_2);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = l_coordsToList(x_4);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_lengthTRAux___rarg(x_6, x_7);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_gameStateToList___closed__1;
x_12 = l_List_bindTR_go___at_gameStateToList___spec__1(x_6, x_11);
x_13 = l_List_appendTR___rarg(x_3, x_5);
x_14 = l_List_appendTR___rarg(x_13, x_10);
x_15 = l_List_appendTR___rarg(x_14, x_12);
return x_15;
}
}
LEAN_EXPORT lean_object* l_List_map___at_myAuto___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = lean_apply_1(x_1, x_5);
x_8 = l_Lean_MessageData_ofFormat(x_7);
x_9 = l_List_map___at_myAuto___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_8);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
lean_inc(x_1);
x_12 = lean_apply_1(x_1, x_10);
x_13 = l_Lean_MessageData_ofFormat(x_12);
x_14 = l_List_map___at_myAuto___spec__1(x_1, x_11);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_List_map___at_myAuto___spec__1___at_myAuto___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_2);
x_8 = lean_apply_1(x_2, x_6);
lean_inc(x_1);
x_9 = lean_apply_1(x_1, x_8);
x_10 = l_Lean_MessageData_ofFormat(x_9);
x_11 = l_List_map___at_myAuto___spec__1___at_myAuto___spec__2(x_1, x_2, x_7);
lean_ctor_set(x_3, 1, x_11);
lean_ctor_set(x_3, 0, x_10);
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc(x_2);
x_14 = lean_apply_1(x_2, x_12);
lean_inc(x_1);
x_15 = lean_apply_1(x_1, x_14);
x_16 = l_Lean_MessageData_ofFormat(x_15);
x_17 = l_List_map___at_myAuto___spec__1___at_myAuto___spec__2(x_1, x_2, x_13);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
LEAN_EXPORT lean_object* l_List_map___at_myAuto___spec__1___at_myAuto___spec__2___at_myAuto___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l___private_Init_Data_Repr_0__Nat_reprFast(x_4);
x_7 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_Lean_MessageData_ofFormat(x_7);
x_9 = l_List_map___at_myAuto___spec__1___at_myAuto___spec__2___at_myAuto___spec__3(x_5);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = l___private_Init_Data_Repr_0__Nat_reprFast(x_10);
x_13 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = l_Lean_MessageData_ofFormat(x_13);
x_15 = l_List_map___at_myAuto___spec__1___at_myAuto___spec__2___at_myAuto___spec__3(x_11);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
static lean_object* _init_l_List_forIn_loop___at_myAuto___spec__5___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at_myAuto___spec__5___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_myAuto___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_3);
x_14 = !lean_is_exclusive(x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_2, 0);
x_16 = lean_ctor_get(x_2, 1);
x_17 = lean_ctor_get(x_1, 0);
x_18 = l___private_Init_Data_Repr_0__Nat_reprFast(x_15);
x_19 = l_List_forIn_loop___at_myAuto___spec__5___closed__1;
x_20 = lean_string_append(x_19, x_18);
lean_dec(x_18);
x_21 = l_List_forIn_loop___at_myAuto___spec__5___closed__2;
x_22 = lean_string_append(x_20, x_21);
x_23 = lean_ctor_get(x_10, 5);
x_24 = lean_io_prim_handle_put_str(x_17, x_22, x_12);
lean_dec(x_22);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_free_object(x_2);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_box(0);
x_2 = x_16;
x_3 = x_26;
x_12 = x_25;
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_16);
x_28 = !lean_is_exclusive(x_24);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_24, 0);
x_30 = lean_io_error_to_string(x_29);
x_31 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = l_Lean_MessageData_ofFormat(x_31);
lean_inc(x_23);
lean_ctor_set_tag(x_2, 0);
lean_ctor_set(x_2, 1, x_32);
lean_ctor_set(x_2, 0, x_23);
lean_ctor_set(x_24, 0, x_2);
return x_24;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_24, 0);
x_34 = lean_ctor_get(x_24, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_24);
x_35 = lean_io_error_to_string(x_33);
x_36 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = l_Lean_MessageData_ofFormat(x_36);
lean_inc(x_23);
lean_ctor_set_tag(x_2, 0);
lean_ctor_set(x_2, 1, x_37);
lean_ctor_set(x_2, 0, x_23);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_2);
lean_ctor_set(x_38, 1, x_34);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_39 = lean_ctor_get(x_2, 0);
x_40 = lean_ctor_get(x_2, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_2);
x_41 = lean_ctor_get(x_1, 0);
x_42 = l___private_Init_Data_Repr_0__Nat_reprFast(x_39);
x_43 = l_List_forIn_loop___at_myAuto___spec__5___closed__1;
x_44 = lean_string_append(x_43, x_42);
lean_dec(x_42);
x_45 = l_List_forIn_loop___at_myAuto___spec__5___closed__2;
x_46 = lean_string_append(x_44, x_45);
x_47 = lean_ctor_get(x_10, 5);
x_48 = lean_io_prim_handle_put_str(x_41, x_46, x_12);
lean_dec(x_46);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
x_50 = lean_box(0);
x_2 = x_40;
x_3 = x_50;
x_12 = x_49;
goto _start;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_40);
x_52 = lean_ctor_get(x_48, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_48, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_54 = x_48;
} else {
 lean_dec_ref(x_48);
 x_54 = lean_box(0);
}
x_55 = lean_io_error_to_string(x_52);
x_56 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_56, 0, x_55);
x_57 = l_Lean_MessageData_ofFormat(x_56);
lean_inc(x_47);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_47);
lean_ctor_set(x_58, 1, x_57);
if (lean_is_scalar(x_54)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_54;
}
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_53);
return x_59;
}
}
}
}
}
static lean_object* _init_l_Solver_callSolver___at_myAuto___spec__4___closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_2, 0, x_1);
lean_ctor_set_uint8(x_2, 1, x_1);
lean_ctor_set_uint8(x_2, 2, x_1);
return x_2;
}
}
static lean_object* _init_l_Solver_callSolver___at_myAuto___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Solver_callSolver___at_myAuto___spec__4___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("./external_solver/solver.py", 27, 27);
return x_1;
}
}
static lean_object* _init_l_Solver_callSolver___at_myAuto___spec__4___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Solver_callSolver___at_myAuto___spec__4___closed__2;
x_2 = l_Solver_callSolver___at_myAuto___spec__4___closed__3;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Solver_callSolver___at_myAuto___spec__4___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("python", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Solver_callSolver___at_myAuto___spec__4___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = l_Solver_callSolver___at_myAuto___spec__4___closed__1;
x_3 = l_Solver_callSolver___at_myAuto___spec__4___closed__5;
x_4 = l_Solver_callSolver___at_myAuto___spec__4___closed__4;
x_5 = l_gameStateToList___closed__1;
x_6 = 0;
x_7 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_3);
lean_ctor_set(x_7, 2, x_4);
lean_ctor_set(x_7, 3, x_1);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*5, x_6);
return x_7;
}
}
static lean_object* _init_l_Solver_callSolver___at_myAuto___spec__4___closed__7() {
_start:
{
uint8_t x_1; uint8_t x_2; lean_object* x_3; 
x_1 = 2;
x_2 = 0;
x_3 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, 1, x_2);
lean_ctor_set_uint8(x_3, 2, x_2);
return x_3;
}
}
static lean_object* _init_l_Solver_callSolver___at_myAuto___spec__4___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ", 1, 1);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Solver_callSolver___at_myAuto___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_8, 5);
x_12 = l_Solver_callSolver___at_myAuto___spec__4___closed__6;
x_13 = lean_io_process_spawn(x_12, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_box(0);
x_17 = l_List_forIn_loop___at_myAuto___spec__5(x_14, x_1, x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_ctor_get(x_14, 0);
lean_inc(x_19);
x_20 = lean_io_prim_handle_flush(x_19, x_18);
lean_dec(x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Solver_callSolver___at_myAuto___spec__4___closed__1;
x_23 = lean_io_process_child_take_stdin(x_22, x_14, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_24, 1);
x_28 = lean_ctor_get(x_24, 0);
lean_dec(x_28);
x_29 = l_Solver_callSolver___at_myAuto___spec__4___closed__7;
x_30 = lean_io_process_child_wait(x_29, x_27, x_25);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_dec(x_27);
x_33 = l_List_forIn_loop___at_myAuto___spec__5___closed__1;
x_34 = l_IO_FS_Handle_readToEnd_loop(x_32, x_33, x_31);
lean_dec(x_32);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
lean_free_object(x_24);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = l_String_trim(x_36);
lean_dec(x_36);
x_38 = l_Solver_callSolver___at_myAuto___spec__4___closed__8;
x_39 = l_String_splitOn(x_37, x_38);
x_40 = lean_box(0);
x_41 = l_List_mapTR_loop___at_Solver_callSolver___spec__2(x_39, x_40);
lean_ctor_set(x_34, 0, x_41);
return x_34;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_42 = lean_ctor_get(x_34, 0);
x_43 = lean_ctor_get(x_34, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_34);
x_44 = l_String_trim(x_42);
lean_dec(x_42);
x_45 = l_Solver_callSolver___at_myAuto___spec__4___closed__8;
x_46 = l_String_splitOn(x_44, x_45);
x_47 = lean_box(0);
x_48 = l_List_mapTR_loop___at_Solver_callSolver___spec__2(x_46, x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_43);
return x_49;
}
}
else
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_34);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_34, 0);
x_52 = lean_io_error_to_string(x_51);
x_53 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_53, 0, x_52);
x_54 = l_Lean_MessageData_ofFormat(x_53);
lean_inc(x_11);
lean_ctor_set(x_24, 1, x_54);
lean_ctor_set(x_24, 0, x_11);
lean_ctor_set(x_34, 0, x_24);
return x_34;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_55 = lean_ctor_get(x_34, 0);
x_56 = lean_ctor_get(x_34, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_34);
x_57 = lean_io_error_to_string(x_55);
x_58 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = l_Lean_MessageData_ofFormat(x_58);
lean_inc(x_11);
lean_ctor_set(x_24, 1, x_59);
lean_ctor_set(x_24, 0, x_11);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_24);
lean_ctor_set(x_60, 1, x_56);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_27);
x_61 = !lean_is_exclusive(x_30);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_30, 0);
x_63 = lean_io_error_to_string(x_62);
x_64 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_64, 0, x_63);
x_65 = l_Lean_MessageData_ofFormat(x_64);
lean_inc(x_11);
lean_ctor_set(x_24, 1, x_65);
lean_ctor_set(x_24, 0, x_11);
lean_ctor_set(x_30, 0, x_24);
return x_30;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_66 = lean_ctor_get(x_30, 0);
x_67 = lean_ctor_get(x_30, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_30);
x_68 = lean_io_error_to_string(x_66);
x_69 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_69, 0, x_68);
x_70 = l_Lean_MessageData_ofFormat(x_69);
lean_inc(x_11);
lean_ctor_set(x_24, 1, x_70);
lean_ctor_set(x_24, 0, x_11);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_24);
lean_ctor_set(x_71, 1, x_67);
return x_71;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_24, 1);
lean_inc(x_72);
lean_dec(x_24);
x_73 = l_Solver_callSolver___at_myAuto___spec__4___closed__7;
x_74 = lean_io_process_child_wait(x_73, x_72, x_25);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_76 = lean_ctor_get(x_72, 1);
lean_inc(x_76);
lean_dec(x_72);
x_77 = l_List_forIn_loop___at_myAuto___spec__5___closed__1;
x_78 = l_IO_FS_Handle_readToEnd_loop(x_76, x_77, x_75);
lean_dec(x_76);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_81 = x_78;
} else {
 lean_dec_ref(x_78);
 x_81 = lean_box(0);
}
x_82 = l_String_trim(x_79);
lean_dec(x_79);
x_83 = l_Solver_callSolver___at_myAuto___spec__4___closed__8;
x_84 = l_String_splitOn(x_82, x_83);
x_85 = lean_box(0);
x_86 = l_List_mapTR_loop___at_Solver_callSolver___spec__2(x_84, x_85);
if (lean_is_scalar(x_81)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_81;
}
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_80);
return x_87;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_88 = lean_ctor_get(x_78, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_78, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_90 = x_78;
} else {
 lean_dec_ref(x_78);
 x_90 = lean_box(0);
}
x_91 = lean_io_error_to_string(x_88);
x_92 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_92, 0, x_91);
x_93 = l_Lean_MessageData_ofFormat(x_92);
lean_inc(x_11);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_11);
lean_ctor_set(x_94, 1, x_93);
if (lean_is_scalar(x_90)) {
 x_95 = lean_alloc_ctor(1, 2, 0);
} else {
 x_95 = x_90;
}
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_89);
return x_95;
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_72);
x_96 = lean_ctor_get(x_74, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_74, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_98 = x_74;
} else {
 lean_dec_ref(x_74);
 x_98 = lean_box(0);
}
x_99 = lean_io_error_to_string(x_96);
x_100 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_100, 0, x_99);
x_101 = l_Lean_MessageData_ofFormat(x_100);
lean_inc(x_11);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_11);
lean_ctor_set(x_102, 1, x_101);
if (lean_is_scalar(x_98)) {
 x_103 = lean_alloc_ctor(1, 2, 0);
} else {
 x_103 = x_98;
}
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_97);
return x_103;
}
}
}
else
{
uint8_t x_104; 
x_104 = !lean_is_exclusive(x_23);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_105 = lean_ctor_get(x_23, 0);
x_106 = lean_io_error_to_string(x_105);
x_107 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_107, 0, x_106);
x_108 = l_Lean_MessageData_ofFormat(x_107);
lean_inc(x_11);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_11);
lean_ctor_set(x_109, 1, x_108);
lean_ctor_set(x_23, 0, x_109);
return x_23;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_110 = lean_ctor_get(x_23, 0);
x_111 = lean_ctor_get(x_23, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_23);
x_112 = lean_io_error_to_string(x_110);
x_113 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_113, 0, x_112);
x_114 = l_Lean_MessageData_ofFormat(x_113);
lean_inc(x_11);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_11);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_111);
return x_116;
}
}
}
else
{
uint8_t x_117; 
lean_dec(x_14);
x_117 = !lean_is_exclusive(x_20);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_118 = lean_ctor_get(x_20, 0);
x_119 = lean_io_error_to_string(x_118);
x_120 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_120, 0, x_119);
x_121 = l_Lean_MessageData_ofFormat(x_120);
lean_inc(x_11);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_11);
lean_ctor_set(x_122, 1, x_121);
lean_ctor_set(x_20, 0, x_122);
return x_20;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_123 = lean_ctor_get(x_20, 0);
x_124 = lean_ctor_get(x_20, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_20);
x_125 = lean_io_error_to_string(x_123);
x_126 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_126, 0, x_125);
x_127 = l_Lean_MessageData_ofFormat(x_126);
lean_inc(x_11);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_11);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_124);
return x_129;
}
}
}
else
{
uint8_t x_130; 
lean_dec(x_14);
x_130 = !lean_is_exclusive(x_17);
if (x_130 == 0)
{
return x_17;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_17, 0);
x_132 = lean_ctor_get(x_17, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_17);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
return x_133;
}
}
}
else
{
uint8_t x_134; 
lean_dec(x_1);
x_134 = !lean_is_exclusive(x_13);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_135 = lean_ctor_get(x_13, 0);
x_136 = lean_io_error_to_string(x_135);
x_137 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_137, 0, x_136);
x_138 = l_Lean_MessageData_ofFormat(x_137);
lean_inc(x_11);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_11);
lean_ctor_set(x_139, 1, x_138);
lean_ctor_set(x_13, 0, x_139);
return x_13;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_140 = lean_ctor_get(x_13, 0);
x_141 = lean_ctor_get(x_13, 1);
lean_inc(x_141);
lean_inc(x_140);
lean_dec(x_13);
x_142 = lean_io_error_to_string(x_140);
x_143 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_143, 0, x_142);
x_144 = l_Lean_MessageData_ofFormat(x_143);
lean_inc(x_11);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_11);
lean_ctor_set(x_145, 1, x_144);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_141);
return x_146;
}
}
}
}
LEAN_EXPORT lean_object* l_List_map___at_myAuto___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = lean_apply_1(x_1, x_5);
x_8 = l_Lean_MessageData_ofFormat(x_7);
x_9 = l_List_map___at_myAuto___spec__6(x_1, x_6);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_8);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
lean_inc(x_1);
x_12 = lean_apply_1(x_1, x_10);
x_13 = l_Lean_MessageData_ofFormat(x_12);
x_14 = l_List_map___at_myAuto___spec__6(x_1, x_11);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at_myAuto___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_12 = l_List_reverse___rarg(x_2);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_17 = l_action(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_18);
{
lean_object* _tmp_0 = x_16;
lean_object* _tmp_1 = x_1;
lean_object* _tmp_10 = x_19;
x_1 = _tmp_0;
x_2 = _tmp_1;
x_11 = _tmp_10;
}
goto _start;
}
else
{
uint8_t x_21; 
lean_free_object(x_1);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
return x_17;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_17, 0);
x_23 = lean_ctor_get(x_17, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_17);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_1, 0);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_27 = l_action(x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_25);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_2);
x_1 = x_26;
x_2 = x_30;
x_11 = x_29;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_26);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = lean_ctor_get(x_27, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_34 = x_27;
} else {
 lean_dec_ref(x_27);
 x_34 = lean_box(0);
}
if (lean_is_scalar(x_34)) {
 x_35 = lean_alloc_ctor(1, 2, 0);
} else {
 x_35 = x_34;
}
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
}
}
}
LEAN_EXPORT lean_object* l_myAuto___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_myAuto___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("myAuto only works when there is a single goal", 45, 45);
return x_1;
}
}
static lean_object* _init_l_myAuto___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myAuto___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_myAuto___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("gameList is ", 12, 12);
return x_1;
}
}
static lean_object* _init_l_myAuto___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myAuto___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_myAuto___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_myAuto___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_myAuto___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_Data_Repr_0__Nat_reprFast), 1, 0);
return x_1;
}
}
static lean_object* _init_l_myAuto___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myAuto___closed__5;
x_2 = l_myAuto___closed__6;
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_myAuto___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_forIn_loop___at_myAuto___spec__5___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_myAuto___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("proof is ", 9, 9);
return x_1;
}
}
static lean_object* _init_l_myAuto___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myAuto___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_myAuto(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Elab_Tactic_getGoals___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_myAuto___closed__2;
x_14 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(x_13, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_10);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_10, 1);
x_18 = lean_ctor_get(x_10, 0);
lean_dec(x_18);
x_19 = !lean_is_exclusive(x_11);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_11, 0);
x_21 = lean_ctor_get(x_11, 1);
lean_dec(x_21);
x_22 = l_Lean_MVarId_getType(x_20, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1(x_23, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
if (lean_obj_tag(x_26) == 5)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_29 = l_extractGameState(x_28, x_5, x_6, x_7, x_8, x_27);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; uint8_t x_39; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_gameStateToList(x_30);
lean_inc(x_32);
x_33 = l_List_map___at_myAuto___spec__1___at_myAuto___spec__2___at_myAuto___spec__3(x_32);
x_34 = l_Lean_MessageData_ofList(x_33);
x_35 = l_myAuto___closed__4;
lean_ctor_set_tag(x_11, 7);
lean_ctor_set(x_11, 1, x_34);
lean_ctor_set(x_11, 0, x_35);
x_36 = l_myAuto___closed__8;
lean_ctor_set_tag(x_10, 7);
lean_ctor_set(x_10, 1, x_36);
x_37 = 0;
lean_inc(x_7);
x_38 = l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3(x_10, x_37, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_31);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_38, 1);
x_41 = lean_ctor_get(x_38, 0);
lean_dec(x_41);
x_42 = l_Solver_callSolver___at_myAuto___spec__4(x_32, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_40);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_myAuto___closed__7;
lean_inc(x_43);
x_46 = l_List_map___at_myAuto___spec__6(x_45, x_43);
x_47 = l_Lean_MessageData_ofList(x_46);
x_48 = l_myAuto___closed__10;
lean_ctor_set_tag(x_38, 7);
lean_ctor_set(x_38, 1, x_47);
lean_ctor_set(x_38, 0, x_48);
x_49 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_49, 0, x_38);
lean_ctor_set(x_49, 1, x_36);
lean_inc(x_7);
x_50 = l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3(x_49, x_37, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_44);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_box(0);
x_53 = l_List_mapM_loop___at_myAuto___spec__7(x_43, x_52, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_51);
if (lean_obj_tag(x_53) == 0)
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_53, 0);
lean_dec(x_55);
x_56 = lean_box(0);
lean_ctor_set(x_53, 0, x_56);
return x_53;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_53, 1);
lean_inc(x_57);
lean_dec(x_53);
x_58 = lean_box(0);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_53);
if (x_60 == 0)
{
return x_53;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_53, 0);
x_62 = lean_ctor_get(x_53, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_53);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
uint8_t x_64; 
lean_free_object(x_38);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_64 = !lean_is_exclusive(x_42);
if (x_64 == 0)
{
return x_42;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_42, 0);
x_66 = lean_ctor_get(x_42, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_42);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_38, 1);
lean_inc(x_68);
lean_dec(x_38);
x_69 = l_Solver_callSolver___at_myAuto___spec__4(x_32, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = l_myAuto___closed__7;
lean_inc(x_70);
x_73 = l_List_map___at_myAuto___spec__6(x_72, x_70);
x_74 = l_Lean_MessageData_ofList(x_73);
x_75 = l_myAuto___closed__10;
x_76 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
x_77 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_36);
lean_inc(x_7);
x_78 = l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3(x_77, x_37, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_71);
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_80 = lean_box(0);
x_81 = l_List_mapM_loop___at_myAuto___spec__7(x_70, x_80, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_79);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_83 = x_81;
} else {
 lean_dec_ref(x_81);
 x_83 = lean_box(0);
}
x_84 = lean_box(0);
if (lean_is_scalar(x_83)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_83;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_82);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_81, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_81, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_88 = x_81;
} else {
 lean_dec_ref(x_81);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_90 = lean_ctor_get(x_69, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_69, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_92 = x_69;
} else {
 lean_dec_ref(x_69);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
}
else
{
uint8_t x_94; 
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_94 = !lean_is_exclusive(x_29);
if (x_94 == 0)
{
return x_29;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_29, 0);
x_96 = lean_ctor_get(x_29, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_29);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
else
{
uint8_t x_98; 
lean_dec(x_26);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_98 = !lean_is_exclusive(x_25);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_25, 0);
lean_dec(x_99);
x_100 = lean_box(0);
lean_ctor_set(x_25, 0, x_100);
return x_25;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_25, 1);
lean_inc(x_101);
lean_dec(x_25);
x_102 = lean_box(0);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_101);
return x_103;
}
}
}
else
{
uint8_t x_104; 
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_104 = !lean_is_exclusive(x_22);
if (x_104 == 0)
{
return x_22;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_22, 0);
x_106 = lean_ctor_get(x_22, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_22);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
else
{
lean_object* x_108; lean_object* x_109; 
x_108 = lean_ctor_get(x_11, 0);
lean_inc(x_108);
lean_dec(x_11);
x_109 = l_Lean_MVarId_getType(x_108, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_109, 1);
lean_inc(x_111);
lean_dec(x_109);
x_112 = l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1(x_110, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_111);
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
if (lean_obj_tag(x_113) == 5)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
lean_dec(x_113);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_116 = l_extractGameState(x_115, x_5, x_6, x_7, x_8, x_114);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
x_119 = l_gameStateToList(x_117);
lean_inc(x_119);
x_120 = l_List_map___at_myAuto___spec__1___at_myAuto___spec__2___at_myAuto___spec__3(x_119);
x_121 = l_Lean_MessageData_ofList(x_120);
x_122 = l_myAuto___closed__4;
x_123 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_121);
x_124 = l_myAuto___closed__8;
lean_ctor_set_tag(x_10, 7);
lean_ctor_set(x_10, 1, x_124);
lean_ctor_set(x_10, 0, x_123);
x_125 = 0;
lean_inc(x_7);
x_126 = l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3(x_10, x_125, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_118);
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
if (lean_is_exclusive(x_126)) {
 lean_ctor_release(x_126, 0);
 lean_ctor_release(x_126, 1);
 x_128 = x_126;
} else {
 lean_dec_ref(x_126);
 x_128 = lean_box(0);
}
x_129 = l_Solver_callSolver___at_myAuto___spec__4(x_119, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_127);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
x_132 = l_myAuto___closed__7;
lean_inc(x_130);
x_133 = l_List_map___at_myAuto___spec__6(x_132, x_130);
x_134 = l_Lean_MessageData_ofList(x_133);
x_135 = l_myAuto___closed__10;
if (lean_is_scalar(x_128)) {
 x_136 = lean_alloc_ctor(7, 2, 0);
} else {
 x_136 = x_128;
 lean_ctor_set_tag(x_136, 7);
}
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_134);
x_137 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_124);
lean_inc(x_7);
x_138 = l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3(x_137, x_125, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_131);
x_139 = lean_ctor_get(x_138, 1);
lean_inc(x_139);
lean_dec(x_138);
x_140 = lean_box(0);
x_141 = l_List_mapM_loop___at_myAuto___spec__7(x_130, x_140, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_139);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_142 = lean_ctor_get(x_141, 1);
lean_inc(x_142);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_143 = x_141;
} else {
 lean_dec_ref(x_141);
 x_143 = lean_box(0);
}
x_144 = lean_box(0);
if (lean_is_scalar(x_143)) {
 x_145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_145 = x_143;
}
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_142);
return x_145;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_146 = lean_ctor_get(x_141, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_141, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_148 = x_141;
} else {
 lean_dec_ref(x_141);
 x_148 = lean_box(0);
}
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(1, 2, 0);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_146);
lean_ctor_set(x_149, 1, x_147);
return x_149;
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_dec(x_128);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_150 = lean_ctor_get(x_129, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_129, 1);
lean_inc(x_151);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 x_152 = x_129;
} else {
 lean_dec_ref(x_129);
 x_152 = lean_box(0);
}
if (lean_is_scalar(x_152)) {
 x_153 = lean_alloc_ctor(1, 2, 0);
} else {
 x_153 = x_152;
}
lean_ctor_set(x_153, 0, x_150);
lean_ctor_set(x_153, 1, x_151);
return x_153;
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_154 = lean_ctor_get(x_116, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_116, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_156 = x_116;
} else {
 lean_dec_ref(x_116);
 x_156 = lean_box(0);
}
if (lean_is_scalar(x_156)) {
 x_157 = lean_alloc_ctor(1, 2, 0);
} else {
 x_157 = x_156;
}
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_155);
return x_157;
}
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
lean_dec(x_113);
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_158 = lean_ctor_get(x_112, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_159 = x_112;
} else {
 lean_dec_ref(x_112);
 x_159 = lean_box(0);
}
x_160 = lean_box(0);
if (lean_is_scalar(x_159)) {
 x_161 = lean_alloc_ctor(0, 2, 0);
} else {
 x_161 = x_159;
}
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_158);
return x_161;
}
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
lean_free_object(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_162 = lean_ctor_get(x_109, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_109, 1);
lean_inc(x_163);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_164 = x_109;
} else {
 lean_dec_ref(x_109);
 x_164 = lean_box(0);
}
if (lean_is_scalar(x_164)) {
 x_165 = lean_alloc_ctor(1, 2, 0);
} else {
 x_165 = x_164;
}
lean_ctor_set(x_165, 0, x_162);
lean_ctor_set(x_165, 1, x_163);
return x_165;
}
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_166 = lean_ctor_get(x_10, 1);
lean_inc(x_166);
lean_dec(x_10);
x_167 = lean_ctor_get(x_11, 0);
lean_inc(x_167);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 lean_ctor_release(x_11, 1);
 x_168 = x_11;
} else {
 lean_dec_ref(x_11);
 x_168 = lean_box(0);
}
x_169 = l_Lean_MVarId_getType(x_167, x_5, x_6, x_7, x_8, x_166);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_169, 1);
lean_inc(x_171);
lean_dec(x_169);
x_172 = l_Lean_instantiateMVars___at_Lean_Elab_Tactic_getMainTarget___spec__1(x_170, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_171);
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
if (lean_obj_tag(x_173) == 5)
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
x_175 = lean_ctor_get(x_173, 1);
lean_inc(x_175);
lean_dec(x_173);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_176 = l_extractGameState(x_175, x_5, x_6, x_7, x_8, x_174);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; uint8_t x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
lean_dec(x_176);
x_179 = l_gameStateToList(x_177);
lean_inc(x_179);
x_180 = l_List_map___at_myAuto___spec__1___at_myAuto___spec__2___at_myAuto___spec__3(x_179);
x_181 = l_Lean_MessageData_ofList(x_180);
x_182 = l_myAuto___closed__4;
if (lean_is_scalar(x_168)) {
 x_183 = lean_alloc_ctor(7, 2, 0);
} else {
 x_183 = x_168;
 lean_ctor_set_tag(x_183, 7);
}
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_181);
x_184 = l_myAuto___closed__8;
x_185 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set(x_185, 1, x_184);
x_186 = 0;
lean_inc(x_7);
x_187 = l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3(x_185, x_186, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_178);
x_188 = lean_ctor_get(x_187, 1);
lean_inc(x_188);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_189 = x_187;
} else {
 lean_dec_ref(x_187);
 x_189 = lean_box(0);
}
x_190 = l_Solver_callSolver___at_myAuto___spec__4(x_179, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_188);
if (lean_obj_tag(x_190) == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_190, 1);
lean_inc(x_192);
lean_dec(x_190);
x_193 = l_myAuto___closed__7;
lean_inc(x_191);
x_194 = l_List_map___at_myAuto___spec__6(x_193, x_191);
x_195 = l_Lean_MessageData_ofList(x_194);
x_196 = l_myAuto___closed__10;
if (lean_is_scalar(x_189)) {
 x_197 = lean_alloc_ctor(7, 2, 0);
} else {
 x_197 = x_189;
 lean_ctor_set_tag(x_197, 7);
}
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_195);
x_198 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_198, 1, x_184);
lean_inc(x_7);
x_199 = l_Lean_log___at_Lean_Elab_Tactic_closeUsingOrAdmit___spec__3(x_198, x_186, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_192);
x_200 = lean_ctor_get(x_199, 1);
lean_inc(x_200);
lean_dec(x_199);
x_201 = lean_box(0);
x_202 = l_List_mapM_loop___at_myAuto___spec__7(x_191, x_201, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_200);
if (lean_obj_tag(x_202) == 0)
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_203 = lean_ctor_get(x_202, 1);
lean_inc(x_203);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 lean_ctor_release(x_202, 1);
 x_204 = x_202;
} else {
 lean_dec_ref(x_202);
 x_204 = lean_box(0);
}
x_205 = lean_box(0);
if (lean_is_scalar(x_204)) {
 x_206 = lean_alloc_ctor(0, 2, 0);
} else {
 x_206 = x_204;
}
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_203);
return x_206;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_207 = lean_ctor_get(x_202, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_202, 1);
lean_inc(x_208);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 lean_ctor_release(x_202, 1);
 x_209 = x_202;
} else {
 lean_dec_ref(x_202);
 x_209 = lean_box(0);
}
if (lean_is_scalar(x_209)) {
 x_210 = lean_alloc_ctor(1, 2, 0);
} else {
 x_210 = x_209;
}
lean_ctor_set(x_210, 0, x_207);
lean_ctor_set(x_210, 1, x_208);
return x_210;
}
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_189);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_211 = lean_ctor_get(x_190, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_190, 1);
lean_inc(x_212);
if (lean_is_exclusive(x_190)) {
 lean_ctor_release(x_190, 0);
 lean_ctor_release(x_190, 1);
 x_213 = x_190;
} else {
 lean_dec_ref(x_190);
 x_213 = lean_box(0);
}
if (lean_is_scalar(x_213)) {
 x_214 = lean_alloc_ctor(1, 2, 0);
} else {
 x_214 = x_213;
}
lean_ctor_set(x_214, 0, x_211);
lean_ctor_set(x_214, 1, x_212);
return x_214;
}
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
lean_dec(x_168);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_215 = lean_ctor_get(x_176, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_176, 1);
lean_inc(x_216);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_217 = x_176;
} else {
 lean_dec_ref(x_176);
 x_217 = lean_box(0);
}
if (lean_is_scalar(x_217)) {
 x_218 = lean_alloc_ctor(1, 2, 0);
} else {
 x_218 = x_217;
}
lean_ctor_set(x_218, 0, x_215);
lean_ctor_set(x_218, 1, x_216);
return x_218;
}
}
else
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
lean_dec(x_173);
lean_dec(x_168);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_219 = lean_ctor_get(x_172, 1);
lean_inc(x_219);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_220 = x_172;
} else {
 lean_dec_ref(x_172);
 x_220 = lean_box(0);
}
x_221 = lean_box(0);
if (lean_is_scalar(x_220)) {
 x_222 = lean_alloc_ctor(0, 2, 0);
} else {
 x_222 = x_220;
}
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_219);
return x_222;
}
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
lean_dec(x_168);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_223 = lean_ctor_get(x_169, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_169, 1);
lean_inc(x_224);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 x_225 = x_169;
} else {
 lean_dec_ref(x_169);
 x_225 = lean_box(0);
}
if (lean_is_scalar(x_225)) {
 x_226 = lean_alloc_ctor(1, 2, 0);
} else {
 x_226 = x_225;
}
lean_ctor_set(x_226, 0, x_223);
lean_ctor_set(x_226, 1, x_224);
return x_226;
}
}
}
else
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; 
lean_dec(x_15);
lean_dec(x_11);
x_227 = lean_ctor_get(x_10, 1);
lean_inc(x_227);
lean_dec(x_10);
x_228 = l_myAuto___closed__2;
x_229 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTactic_throwExs___spec__2(x_228, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_227);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_229;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_myAuto___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_List_forIn_loop___at_myAuto___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Solver_callSolver___at_myAuto___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Solver_callSolver___at_myAuto___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l_tacticMy__auto___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("tacticMy_auto", 13, 13);
return x_1;
}
}
static lean_object* _init_l_tacticMy__auto___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticMy__auto___closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticMy__auto___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("my_auto", 7, 7);
return x_1;
}
}
static lean_object* _init_l_tacticMy__auto___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticMy__auto___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticMy__auto___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticMy__auto___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_tacticMy__auto___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticMy__auto() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticMy__auto___closed__5;
return x_1;
}
}
static lean_object* _init_l___aux__Maze__Tactics______elabRules__tacticMy__auto__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_myAuto), 9, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___aux__Maze__Tactics______elabRules__tacticMy__auto__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_tacticMy__auto___closed__2;
x_12 = l_Lean_Syntax_isOfKind(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_Rfl_evalApplyRfl___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = l___aux__Maze__Tactics______elabRules__tacticMy__auto__1___closed__1;
x_15 = l_Lean_Elab_Tactic_withMainContext___rarg(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean(uint8_t builtin, lean_object*);
lean_object* initialize_Maze_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Maze_Solver(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Maze_Tactics(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Maze_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Maze_Solver(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_action___closed__1 = _init_l_action___closed__1();
lean_mark_persistent(l_action___closed__1);
l_action___closed__2 = _init_l_action___closed__2();
lean_mark_persistent(l_action___closed__2);
l_action___closed__3 = _init_l_action___closed__3();
lean_mark_persistent(l_action___closed__3);
l_action___closed__4 = _init_l_action___closed__4();
lean_mark_persistent(l_action___closed__4);
l_action___closed__5 = _init_l_action___closed__5();
lean_mark_persistent(l_action___closed__5);
l_action___closed__6 = _init_l_action___closed__6();
lean_mark_persistent(l_action___closed__6);
l_action___closed__7 = _init_l_action___closed__7();
lean_mark_persistent(l_action___closed__7);
l_action___closed__8 = _init_l_action___closed__8();
lean_mark_persistent(l_action___closed__8);
l_action___closed__9 = _init_l_action___closed__9();
lean_mark_persistent(l_action___closed__9);
l_action___closed__10 = _init_l_action___closed__10();
lean_mark_persistent(l_action___closed__10);
l_action___closed__11 = _init_l_action___closed__11();
lean_mark_persistent(l_action___closed__11);
l_action___closed__12 = _init_l_action___closed__12();
lean_mark_persistent(l_action___closed__12);
l_action___closed__13 = _init_l_action___closed__13();
lean_mark_persistent(l_action___closed__13);
l_action___closed__14 = _init_l_action___closed__14();
lean_mark_persistent(l_action___closed__14);
l_action___closed__15 = _init_l_action___closed__15();
lean_mark_persistent(l_action___closed__15);
l_gameStateToList___closed__1 = _init_l_gameStateToList___closed__1();
lean_mark_persistent(l_gameStateToList___closed__1);
l_List_forIn_loop___at_myAuto___spec__5___closed__1 = _init_l_List_forIn_loop___at_myAuto___spec__5___closed__1();
lean_mark_persistent(l_List_forIn_loop___at_myAuto___spec__5___closed__1);
l_List_forIn_loop___at_myAuto___spec__5___closed__2 = _init_l_List_forIn_loop___at_myAuto___spec__5___closed__2();
lean_mark_persistent(l_List_forIn_loop___at_myAuto___spec__5___closed__2);
l_Solver_callSolver___at_myAuto___spec__4___closed__1 = _init_l_Solver_callSolver___at_myAuto___spec__4___closed__1();
lean_mark_persistent(l_Solver_callSolver___at_myAuto___spec__4___closed__1);
l_Solver_callSolver___at_myAuto___spec__4___closed__2 = _init_l_Solver_callSolver___at_myAuto___spec__4___closed__2();
lean_mark_persistent(l_Solver_callSolver___at_myAuto___spec__4___closed__2);
l_Solver_callSolver___at_myAuto___spec__4___closed__3 = _init_l_Solver_callSolver___at_myAuto___spec__4___closed__3();
lean_mark_persistent(l_Solver_callSolver___at_myAuto___spec__4___closed__3);
l_Solver_callSolver___at_myAuto___spec__4___closed__4 = _init_l_Solver_callSolver___at_myAuto___spec__4___closed__4();
lean_mark_persistent(l_Solver_callSolver___at_myAuto___spec__4___closed__4);
l_Solver_callSolver___at_myAuto___spec__4___closed__5 = _init_l_Solver_callSolver___at_myAuto___spec__4___closed__5();
lean_mark_persistent(l_Solver_callSolver___at_myAuto___spec__4___closed__5);
l_Solver_callSolver___at_myAuto___spec__4___closed__6 = _init_l_Solver_callSolver___at_myAuto___spec__4___closed__6();
lean_mark_persistent(l_Solver_callSolver___at_myAuto___spec__4___closed__6);
l_Solver_callSolver___at_myAuto___spec__4___closed__7 = _init_l_Solver_callSolver___at_myAuto___spec__4___closed__7();
lean_mark_persistent(l_Solver_callSolver___at_myAuto___spec__4___closed__7);
l_Solver_callSolver___at_myAuto___spec__4___closed__8 = _init_l_Solver_callSolver___at_myAuto___spec__4___closed__8();
lean_mark_persistent(l_Solver_callSolver___at_myAuto___spec__4___closed__8);
l_myAuto___closed__1 = _init_l_myAuto___closed__1();
lean_mark_persistent(l_myAuto___closed__1);
l_myAuto___closed__2 = _init_l_myAuto___closed__2();
lean_mark_persistent(l_myAuto___closed__2);
l_myAuto___closed__3 = _init_l_myAuto___closed__3();
lean_mark_persistent(l_myAuto___closed__3);
l_myAuto___closed__4 = _init_l_myAuto___closed__4();
lean_mark_persistent(l_myAuto___closed__4);
l_myAuto___closed__5 = _init_l_myAuto___closed__5();
lean_mark_persistent(l_myAuto___closed__5);
l_myAuto___closed__6 = _init_l_myAuto___closed__6();
lean_mark_persistent(l_myAuto___closed__6);
l_myAuto___closed__7 = _init_l_myAuto___closed__7();
lean_mark_persistent(l_myAuto___closed__7);
l_myAuto___closed__8 = _init_l_myAuto___closed__8();
lean_mark_persistent(l_myAuto___closed__8);
l_myAuto___closed__9 = _init_l_myAuto___closed__9();
lean_mark_persistent(l_myAuto___closed__9);
l_myAuto___closed__10 = _init_l_myAuto___closed__10();
lean_mark_persistent(l_myAuto___closed__10);
l_tacticMy__auto___closed__1 = _init_l_tacticMy__auto___closed__1();
lean_mark_persistent(l_tacticMy__auto___closed__1);
l_tacticMy__auto___closed__2 = _init_l_tacticMy__auto___closed__2();
lean_mark_persistent(l_tacticMy__auto___closed__2);
l_tacticMy__auto___closed__3 = _init_l_tacticMy__auto___closed__3();
lean_mark_persistent(l_tacticMy__auto___closed__3);
l_tacticMy__auto___closed__4 = _init_l_tacticMy__auto___closed__4();
lean_mark_persistent(l_tacticMy__auto___closed__4);
l_tacticMy__auto___closed__5 = _init_l_tacticMy__auto___closed__5();
lean_mark_persistent(l_tacticMy__auto___closed__5);
l_tacticMy__auto = _init_l_tacticMy__auto();
lean_mark_persistent(l_tacticMy__auto);
l___aux__Maze__Tactics______elabRules__tacticMy__auto__1___closed__1 = _init_l___aux__Maze__Tactics______elabRules__tacticMy__auto__1___closed__1();
lean_mark_persistent(l___aux__Maze__Tactics______elabRules__tacticMy__auto__1___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
