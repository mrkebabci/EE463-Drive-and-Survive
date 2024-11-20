#ifndef final_sim_with_control_acc_h_
#define final_sim_with_control_acc_h_
#ifndef final_sim_with_control_acc_COMMON_INCLUDES_
#define final_sim_with_control_acc_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME simulink_only_sfcn
#define S_FUNCTION_LEVEL 2
#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif
#include "final_sim_with_control_acc_types.h"
#include "rt_defines.h"
#include <stddef.h>
typedef struct { real_T B_0_0_0 ; real_T B_0_1_8 ; real_T B_0_2_16 ; real_T
B_0_3_24 [ 5 ] ; real_T B_0_8_64 [ 6 ] ; real_T B_0_14_112 ; real_T
B_0_15_120 ; real_T B_0_16_128 ; real_T B_0_17_136 ; real_T B_0_18_144 ;
real_T B_0_19_152 ; real_T B_0_20_160 ; real_T B_0_21_168 ; real_T B_0_22_176
; real_T B_0_23_184 ; real_T B_0_24_192 ; real_T B_0_25_200 ; real_T
B_0_26_208 ; real_T B_0_27_216 ; real_T B_0_28_224 ; real_T B_0_29_232 ;
real_T B_0_30_240 ; real_T B_0_31_248 ; real_T B_0_32_256 ; real_T B_0_33_264
; real_T B_0_34_272 [ 8 ] ; real_T B_0_42_336 [ 8 ] ; real_T B_0_50_400 ;
real_T B_0_51_408 ; real_T B_0_52_416 [ 4 ] ; real_T B_0_56_448 [ 8 ] ;
real_T B_0_64_512 [ 8 ] ; real_T B_0_72_576 ; real_T B_0_73_584 ; real_T
B_0_74_592 ; real_T B_0_75_600 ; real_T B_0_76_608 [ 4 ] ; real_T B_0_80_640
; real_T B_0_81_648 ; real_T B_0_82_656 ; real_T B_0_83_664 ; real_T
B_0_84_672 [ 4 ] ; real_T B_0_88_704 [ 4 ] ; boolean_T B_0_92_736 ; char_T
pad_B_0_92_736 [ 7 ] ; } B_final_sim_with_control_T ; typedef struct { real_T
UnitDelay_DSTATE ; real_T StateSpace_RWORK [ 2 ] ; struct { real_T
modelTStart ; } TransportDelay_RWORK ; struct { real_T modelTStart ; }
TransportDelay1_RWORK ; void * StateSpace_PWORK [ 22 ] ; void * Scope_PWORK ;
void * Scope2_PWORK [ 4 ] ; void * Scope5_PWORK ; void * Scope6_PWORK ;
struct { void * TUbufferPtrs [ 16 ] ; } TransportDelay_PWORK ; struct { void
* TUbufferPtrs [ 16 ] ; } TransportDelay1_PWORK ; void * Scope10_PWORK ; void
* Scope7_PWORK ; void * Scope8_PWORK ; void * Scope9_PWORK ; void *
Scope3_PWORK ; uint32_T m_bpIndex ; int_T StateSpace_IWORK [ 23 ] ; struct {
int_T Tail [ 8 ] ; int_T Head [ 8 ] ; int_T Last [ 8 ] ; int_T
CircularBufSize [ 8 ] ; int_T MaxNewBufSize ; } TransportDelay_IWORK ; struct
{ int_T Tail [ 8 ] ; int_T Head [ 8 ] ; int_T Last [ 8 ] ; int_T
CircularBufSize [ 8 ] ; int_T MaxNewBufSize ; } TransportDelay1_IWORK ; char
StateSpace_MODE [ 16 ] ; int_T Referance_MODE ; int_T Sign_MODE ; boolean_T
RelationalOperator_Mode ; char_T pad_RelationalOperator_Mode [ 7 ] ; }
DW_final_sim_with_control_T ; typedef struct { real_T Integrator_CSTATE ;
real_T KEfilter_CSTATE ; real_T StateSpace_CSTATE [ 5 ] ; real_T
Integrator_CSTATE_i [ 8 ] ; real_T Integrator1_CSTATE [ 8 ] ; real_T
Integrator_CSTATE_p [ 4 ] ; } X_final_sim_with_control_T ; typedef int_T
PeriodicIndX_final_sim_with_control_T [ 4 ] ; typedef real_T
PeriodicRngX_final_sim_with_control_T [ 8 ] ; typedef struct { real_T
Integrator_CSTATE ; real_T KEfilter_CSTATE ; real_T StateSpace_CSTATE [ 5 ] ;
real_T Integrator_CSTATE_i [ 8 ] ; real_T Integrator1_CSTATE [ 8 ] ; real_T
Integrator_CSTATE_p [ 4 ] ; } XDot_final_sim_with_control_T ; typedef struct
{ boolean_T Integrator_CSTATE ; boolean_T KEfilter_CSTATE ; boolean_T
StateSpace_CSTATE [ 5 ] ; boolean_T Integrator_CSTATE_i [ 8 ] ; boolean_T
Integrator1_CSTATE [ 8 ] ; boolean_T Integrator_CSTATE_p [ 4 ] ; }
XDis_final_sim_with_control_T ; typedef struct { real_T Integrator_CSTATE ;
real_T KEfilter_CSTATE ; real_T StateSpace_CSTATE [ 5 ] ; real_T
Integrator_CSTATE_i [ 8 ] ; real_T Integrator1_CSTATE [ 8 ] ; real_T
Integrator_CSTATE_p [ 4 ] ; } CStateAbsTol_final_sim_with_control_T ; typedef
struct { real_T Integrator_CSTATE ; real_T KEfilter_CSTATE ; real_T
StateSpace_CSTATE [ 5 ] ; real_T Integrator_CSTATE_i [ 8 ] ; real_T
Integrator1_CSTATE [ 8 ] ; real_T Integrator_CSTATE_p [ 4 ] ; }
CXPtMin_final_sim_with_control_T ; typedef struct { real_T Integrator_CSTATE
; real_T KEfilter_CSTATE ; real_T StateSpace_CSTATE [ 5 ] ; real_T
Integrator_CSTATE_i [ 8 ] ; real_T Integrator1_CSTATE [ 8 ] ; real_T
Integrator_CSTATE_p [ 4 ] ; } CXPtMax_final_sim_with_control_T ; typedef
struct { real_T StateSpace_Sf0_ZC [ 4 ] ; real_T Referance_StepTime_ZC ;
real_T RelationalOperator_RelopInput_ZC ; real_T Sign_Input_ZC ; }
ZCV_final_sim_with_control_T ; typedef struct { ZCSigState StateSpace_Sf0_ZCE
[ 4 ] ; ZCSigState Referance_StepTime_ZCE ; ZCSigState
RelationalOperator_RelopInput_ZCE ; ZCSigState Sign_Input_ZCE ; }
PrevZCX_final_sim_with_control_T ; struct P_final_sim_with_control_T_ {
real_T P_0 ; real_T P_1 ; real_T P_2 [ 2 ] ; real_T P_3 [ 390 ] ; real_T P_4
[ 2 ] ; real_T P_5 [ 4 ] ; real_T P_6 [ 2 ] ; real_T P_7 [ 5 ] ; real_T P_8 [
2 ] ; real_T P_9 [ 840 ] ; real_T P_10 [ 2 ] ; real_T P_11 [ 6 ] ; real_T
P_12 [ 2 ] ; real_T P_13 [ 3 ] ; real_T P_14 [ 2 ] ; real_T P_15 [ 3 ] ;
real_T P_16 [ 2 ] ; real_T P_17 [ 3 ] ; real_T P_18 [ 2 ] ; real_T P_19 ;
real_T P_20 [ 2 ] ; real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T P_24 ;
real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T
P_30 ; real_T P_31 ; real_T P_32 [ 3 ] ; real_T P_33 [ 3 ] ; real_T P_34 ;
real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T
P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ;
real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ; real_T P_50 [ 4 ] ;
real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T P_55 ; real_T
P_56 ; real_T P_57 ; real_T P_58 [ 4 ] ; real_T P_59 ; real_T P_60 ; real_T
P_61 ; real_T P_62 ; } ; extern P_final_sim_with_control_T
final_sim_with_control_rtDefaultP ;
#endif
