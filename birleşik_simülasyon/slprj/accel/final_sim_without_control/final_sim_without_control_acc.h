#ifndef final_sim_without_control_acc_h_
#define final_sim_without_control_acc_h_
#ifndef final_sim_without_control_acc_COMMON_INCLUDES_
#define final_sim_without_control_acc_COMMON_INCLUDES_
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
#include "final_sim_without_control_acc_types.h"
#include "rt_defines.h"
#include <stddef.h>
typedef struct { real_T B_0_0_0 ; real_T B_0_1_8 ; real_T B_0_2_16 ; real_T
B_0_3_24 ; real_T B_0_4_32 ; real_T B_0_5_40 ; real_T B_0_6_48 [ 12 ] ;
real_T B_0_18_144 [ 18 ] ; real_T B_0_36_288 ; real_T B_0_37_296 ; real_T
B_0_38_304 ; real_T B_0_39_312 ; real_T B_0_40_320 ; real_T B_0_41_328 ;
real_T B_0_42_336 ; real_T B_0_43_344 ; real_T B_0_44_352 ; real_T B_0_45_360
; real_T B_0_46_368 ; real_T B_0_47_376 ; real_T B_0_48_384 ; real_T
B_0_49_392 ; real_T B_0_50_400 ; real_T B_0_51_408 ; real_T B_0_52_416 ;
real_T B_0_53_424 ; real_T B_0_54_432 ; real_T B_0_55_440 ; real_T B_0_56_448
; real_T B_0_57_456 [ 8 ] ; real_T B_0_65_520 [ 8 ] ; real_T B_0_73_584 ;
real_T B_0_74_592 ; real_T B_0_75_600 [ 4 ] ; real_T B_0_79_632 [ 8 ] ;
real_T B_0_87_696 [ 8 ] ; real_T B_0_95_760 ; real_T B_0_96_768 ; real_T
B_0_97_776 ; real_T B_0_98_784 ; real_T B_0_99_792 ; real_T B_0_100_800 [ 4 ]
; real_T B_0_104_832 ; real_T B_0_105_840 ; real_T B_0_106_848 ; real_T
B_0_107_856 ; real_T B_0_108_864 ; real_T B_0_109_872 ; real_T B_0_110_880 ;
real_T B_0_111_888 ; real_T B_0_112_896 ; real_T B_0_113_904 [ 4 ] ; real_T
B_0_117_936 [ 4 ] ; real_T B_0_121_968 [ 3 ] ; boolean_T B_0_124_992 ; char_T
pad_B_0_124_992 [ 7 ] ; } B_final_sim_without_control_T ; typedef struct {
real_T UnitDelay_DSTATE ; real_T StateSpace_RWORK [ 2 ] ; struct { real_T
modelTStart ; } TransportDelay_RWORK ; struct { real_T modelTStart ; }
TransportDelay1_RWORK ; void * StateSpace_PWORK [ 22 ] ; void * Scope2_PWORK
[ 4 ] ; void * Scope5_PWORK ; void * Scope6_PWORK ; void * Scope4_PWORK ;
struct { void * TUbufferPtrs [ 16 ] ; } TransportDelay_PWORK ; struct { void
* TUbufferPtrs [ 16 ] ; } TransportDelay1_PWORK ; void * Scope10_PWORK ; void
* Scope7_PWORK ; void * Scope8_PWORK ; void * Scope9_PWORK ; void *
Scope_PWORK ; void * Scope1_PWORK ; void * Scope3_PWORK ; uint32_T m_bpIndex
; int_T StateSpace_IWORK [ 23 ] ; struct { int_T Tail [ 8 ] ; int_T Head [ 8
] ; int_T Last [ 8 ] ; int_T CircularBufSize [ 8 ] ; int_T MaxNewBufSize ; }
TransportDelay_IWORK ; struct { int_T Tail [ 8 ] ; int_T Head [ 8 ] ; int_T
Last [ 8 ] ; int_T CircularBufSize [ 8 ] ; int_T MaxNewBufSize ; }
TransportDelay1_IWORK ; char StateSpace_MODE [ 40 ] ; int_T Step_MODE ; int_T
Sign_MODE ; boolean_T RelationalOperator_Mode ; char_T
pad_RelationalOperator_Mode [ 7 ] ; } DW_final_sim_without_control_T ;
typedef struct { real_T Integrator_CSTATE ; real_T KEfilter_CSTATE ; real_T
StateSpace_CSTATE [ 9 ] ; real_T Integrator_CSTATE_i [ 8 ] ; real_T
Integrator1_CSTATE [ 8 ] ; real_T Integrator_CSTATE_p [ 4 ] ; }
X_final_sim_without_control_T ; typedef int_T
PeriodicIndX_final_sim_without_control_T [ 4 ] ; typedef real_T
PeriodicRngX_final_sim_without_control_T [ 8 ] ; typedef struct { real_T
Integrator_CSTATE ; real_T KEfilter_CSTATE ; real_T StateSpace_CSTATE [ 9 ] ;
real_T Integrator_CSTATE_i [ 8 ] ; real_T Integrator1_CSTATE [ 8 ] ; real_T
Integrator_CSTATE_p [ 4 ] ; } XDot_final_sim_without_control_T ; typedef
struct { boolean_T Integrator_CSTATE ; boolean_T KEfilter_CSTATE ; boolean_T
StateSpace_CSTATE [ 9 ] ; boolean_T Integrator_CSTATE_i [ 8 ] ; boolean_T
Integrator1_CSTATE [ 8 ] ; boolean_T Integrator_CSTATE_p [ 4 ] ; }
XDis_final_sim_without_control_T ; typedef struct { real_T Integrator_CSTATE
; real_T KEfilter_CSTATE ; real_T StateSpace_CSTATE [ 9 ] ; real_T
Integrator_CSTATE_i [ 8 ] ; real_T Integrator1_CSTATE [ 8 ] ; real_T
Integrator_CSTATE_p [ 4 ] ; } CStateAbsTol_final_sim_without_control_T ;
typedef struct { real_T Integrator_CSTATE ; real_T KEfilter_CSTATE ; real_T
StateSpace_CSTATE [ 9 ] ; real_T Integrator_CSTATE_i [ 8 ] ; real_T
Integrator1_CSTATE [ 8 ] ; real_T Integrator_CSTATE_p [ 4 ] ; }
CXPtMin_final_sim_without_control_T ; typedef struct { real_T
Integrator_CSTATE ; real_T KEfilter_CSTATE ; real_T StateSpace_CSTATE [ 9 ] ;
real_T Integrator_CSTATE_i [ 8 ] ; real_T Integrator1_CSTATE [ 8 ] ; real_T
Integrator_CSTATE_p [ 4 ] ; } CXPtMax_final_sim_without_control_T ; typedef
struct { real_T StateSpace_Sf0_ZC [ 10 ] ; real_T Step_StepTime_ZC ; real_T
RelationalOperator_RelopInput_ZC ; real_T Sign_Input_ZC ; }
ZCV_final_sim_without_control_T ; typedef struct { ZCSigState
StateSpace_Sf0_ZCE [ 10 ] ; ZCSigState Step_StepTime_ZCE ; ZCSigState
RelationalOperator_RelopInput_ZCE ; ZCSigState Sign_Input_ZCE ; }
PrevZCX_final_sim_without_control_T ; struct P_final_sim_without_control_T_ {
real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ;
real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11
; real_T P_12 ; real_T P_13 ; real_T P_14 [ 2 ] ; real_T P_15 [ 1890 ] ;
real_T P_16 [ 2 ] ; real_T P_17 [ 4 ] ; real_T P_18 [ 2 ] ; real_T P_19 [ 9 ]
; real_T P_20 [ 2 ] ; real_T P_21 [ 2079 ] ; real_T P_22 [ 2 ] ; real_T P_23
[ 18 ] ; real_T P_24 [ 2 ] ; real_T P_25 [ 9 ] ; real_T P_26 [ 2 ] ; real_T
P_27 [ 9 ] ; real_T P_28 [ 2 ] ; real_T P_29 [ 9 ] ; real_T P_30 [ 2 ] ;
real_T P_31 ; real_T P_32 [ 2 ] ; real_T P_33 ; real_T P_34 ; real_T P_35 ;
real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 [ 3 ] ;
real_T P_41 [ 3 ] ; real_T P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ;
real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ; real_T P_50 ; real_T
P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T P_55 ; real_T P_56 ;
real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T P_60 ; real_T P_61 ; real_T
P_62 ; real_T P_63 [ 4 ] ; real_T P_64 ; real_T P_65 ; real_T P_66 ; real_T
P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ; real_T P_71 ; real_T P_72 ;
real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ; real_T
P_78 ; real_T P_79 ; real_T P_80 [ 4 ] ; real_T P_81 ; real_T P_82 ; real_T
P_83 ; real_T P_84 ; real_T P_85 ; real_T P_86 ; real_T P_87 ; real_T P_88 ;
real_T P_89 ; } ; extern P_final_sim_without_control_T
final_sim_without_control_rtDefaultP ;
#endif
