#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_VertexId              0   x           0   VERTID    uint   x   
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0      POS   float   xyzw
// TEXCOORD                 0   xy          1     NONE   float   xy  
//
vs_5_0
// Opaque Custom Data - XBOX Precompiled Shader Header
// First Precompiled Shader at offset:[81]
// Embedded Data:
//  0x00000051 - Offset To First Precompiled Shader
//  0x00010050 - Original Shader Descriptor
//  0x0000004c - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_input_sgv v0.x, vertex_id
dcl_output_siv o0.xyzw, position
dcl_output o1.xy
dcl_temps 1
bfi r0.x, l(1), l(1), v0.x, l(0)
utof r0.x, r0.x
mad o0.x, r0.x, l(2.000000), l(-1.000000)
and r0.z, v0.x, l(2)
utof r0.y, r0.z
mad o0.y, r0.y, l(-2.000000), l(1.000000)
mov o1.xy, r0.xyxx
mov o0.zw, l(0,0,0,1.000000)
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[81], bundle is:[126] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (VS)
// Shader Hw Stage           : (VS)
// PDB Filename              : D:\ATG\st_dev\Kits\DirectXTK\src\Shaders\Compiled\XboxOneToneMap_VSQuad.pdb
// Shader Semantic Hash      : 0x300aeefbe5b2d20a
//
// Shader Data:
; ----------------- VS Data ------------------------
; Input Semantic Mappings
;    No input mappings
; Output Semantic Mappings
;   [0] generic,  usageIdx 1, paramIdx 0, paramSlot 0

codeLenInByte        = 68 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 0;
extUserElementCount  = 0;
NumVgprs             = 6;
NumSgprs             = 5;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000000
; constBufUsage           = 0x00000000

; SPI_SHADER_PGM_RSRC2_VS = 0x00000008
SSPRV:USER_SGPR             = 4
; PA_CL_VS_OUT_CNTL       = 0x00000000
; SPI_VS_OUT_CONFIG       = 0x00000000
SVOC:VS_EXPORT_COUNT        = 0
SVOC:VS_HALF_PACK           = 0
SVOC:VS_EXPORTS_FOG         = 0
SVOC:VS_OUT_FOG_VEC_ADDR    = 0
; SPI_SHADER_POS_FORMAT     = 0x00000004
SSPF:POS0_EXPORT_FORMAT     = 4
SSPF:POS1_EXPORT_FORMAT     = 0
SSPF:POS2_EXPORT_FORMAT     = 0
SSPF:POS3_EXPORT_FORMAT     = 0
VGT_STRMOUT_CONFIG = 0x0
VGT_STRMOUT_CONFIG:RAST_STREAM = 0
VGT_STRMOUT_CONFIG:STREAMOUT_0_EN = 0
VGT_STRMOUT_CONFIG:STREAMOUT_1_EN = 0
VGT_STRMOUT_CONFIG:STREAMOUT_2_EN = 0
VGT_STRMOUT_CONFIG:STREAMOUT_3_EN = 0
; exportVertexSize          = 4

// Shader Instructions:
shader main
  asic(CI)
  type(VS)
  v_lshlrev_b32  v1, 1, v0                              // 000000000000: 34020081
  v_bfi_b32     v1, 2, v1, 0                            // 000000000004: D2940001 02020282
  v_and_b32     v0, 2, v0                               // 00000000000C: 36000082
  v_cvt_f32_u32  v1, v1                                 // 000000000010: 7E020D01
  v_cvt_f32_u32  v0, v0                                 // 000000000014: 7E000D00
  v_mad_legacy_f32  v2, v1, 2.0, -1.0                   // 000000000018: D2800002 03CDE901
  v_mad_legacy_f32  v3, v0, -2.0, 1.0                   // 000000000020: D2800003 03C9EB00
  v_mov_b32     v4, 0                                   // 000000000028: 7E080280
  v_mov_b32     v5, 1.0                                 // 00000000002C: 7E0A02F2
  exp           pos0, v2, v3, v4, v5 done               // 000000000030: F80008CF 05040302
  exp           param0, v1, v0, v4, v5                  // 000000000038: F800020F 05040001
  s_endpgm                                              // 000000000040: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   6
//  NumSRegs:                   2
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   82
//  CycleSimNWaves:             82
//  Code Size:                  68
//Assembler Counts:
//  num_32bit_ops                     : 7
//  num_64bit_ops                     : 5
//  num_alu                           : 9
//  num_fc                            : 1
//  num_inst_exp                      : 2
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 0
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 1
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 0
//  num_inst_sop2                     : 0
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 4
//  num_inst_vop2                     : 2
//  num_inst_vop3                     : 0
//  num_inst_vopc                     : 0
//  num_inst_vintrp                   : 0
//  constant_literal_operands         : 0
//  num_tex                           : 2
//  num_vmem_group                    : 0
//  vmem_grouping_started             : 0
// Shader Statistics:
// m_uNumActiveWaveFront             : 40
// m_uVRegLimit                      : 256
// m_uSRegLimit                      : 512
// m_uNumVRegs                       : 6
// m_uNumSRegs                       : 2
// m_uSCCodeSize                     : 68
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 82
// m_uCycleSimNWaves                 : 82

// Assembler Counts:
// num_32bit_ops                     : 7
// num_64bit_ops                     : 5
// num_alu                           : 9
// num_fc                            : 1
// num_inst_exp                      : 2
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 0
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 1
// num_inst_sopc                     : 0
// num_inst_sop1                     : 0
// num_inst_sop2                     : 0
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 4
// num_inst_vop2                     : 2
// num_inst_vop3                     : 0
// num_inst_vopc                     : 0
// num_inst_vintrp                   : 0
// num_inst_smem                     : 0
// constant_literal_operands         : 0
// num_tex                           : 2
// num_vmem_group                    : 0
// vmem_grouping_started             : 0
// m_fFullPrecompilePromise          : 0
// m_fIntegerDivideExpansion         : 0
// m_fIntegerModExpansion            : 0
// m_fDoubleDivideExpansion          : 0
// m_fUsesScratch                    : 0
// m_fPerThreadIndirection           : 0
// m_fUsingTableLoads                : 0
// m_fUsingSHmemLoads                : 0
// fSemanticHashFlagOverrideApplied  : 0
// fPSHasNoUAVWrite                  : 0
// m_fRenderTargetsCanBeCompacted    : 0
// version                           : 3
// fCodePatched                      : 0

// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[209], bundle is:[137] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (VS)
// Shader Hw Stage           : (ES)
// PDB Filename              : D:\ATG\st_dev\Kits\DirectXTK\src\Shaders\Compiled\XboxOneToneMap_VSQuad.pdb
// Shader Semantic Hash      : 0x300aeefbe5b2d20a
//
// Shader Data:
; ----------------- VS Data ------------------------
; Input Semantic Mappings
;    No input mappings
; Output Semantic Mappings
;   [0] position,  usageIdx 0, paramIdx 0, paramSlot 0
;   [1] generic,  usageIdx 1, paramIdx 1, paramSlot 0

codeLenInByte        = 108 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 2;
;  userElements[0]      = PTR_INTERNAL_GLOBAL_TABLE, Element=1 dwords, s[0x2:3]
;  userElements[1]      = PTR_EXTENDED_USER_DATA, ReferencedExtUserElements=1, s[0x2:3]
extUserElementCount  = 0;
NumVgprs             = 5;
NumSgprs             = 7;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000000
; constBufUsage           = 0x00000000

; SPI_SHADER_PGM_RSRC2_VS = 0x00000008
SSPRV:USER_SGPR             = 4
; PA_CL_VS_OUT_CNTL       = 0x00000000
; SPI_VS_OUT_CONFIG       = 0x00000000
SVOC:VS_EXPORT_COUNT        = 0
SVOC:VS_HALF_PACK           = 0
SVOC:VS_EXPORTS_FOG         = 0
SVOC:VS_OUT_FOG_VEC_ADDR    = 0
; SPI_SHADER_POS_FORMAT     = 0x00000004
SSPF:POS0_EXPORT_FORMAT     = 4
SSPF:POS1_EXPORT_FORMAT     = 0
SSPF:POS2_EXPORT_FORMAT     = 0
SSPF:POS3_EXPORT_FORMAT     = 0
VGT_STRMOUT_CONFIG = 0x0
VGT_STRMOUT_CONFIG:RAST_STREAM = 0
VGT_STRMOUT_CONFIG:STREAMOUT_0_EN = 0
VGT_STRMOUT_CONFIG:STREAMOUT_1_EN = 0
VGT_STRMOUT_CONFIG:STREAMOUT_2_EN = 0
VGT_STRMOUT_CONFIG:STREAMOUT_3_EN = 0
; exportVertexSize          = 8
; esGsRingItemSize          = 8

// Shader Instructions:
shader main
  asic(CI)
  type(VS)
  v_lshlrev_b32  v1, 1, v0                              // 000000000000: 34020081
  s_load_dwordx4  s[0:3], s[2:3], 0x08                  // 000000000004: C0800308
  v_bfi_b32     v1, 2, v1, 0                            // 000000000008: D2940001 02020282
  v_cvt_f32_u32  v1, v1                                 // 000000000010: 7E020D01
  v_and_b32     v0, 2, v0                               // 000000000014: 36000082
  v_mad_legacy_f32  v2, v1, 2.0, -1.0                   // 000000000018: D2800002 03CDE901
  v_cvt_f32_u32  v0, v0                                 // 000000000020: 7E000D00
  v_mad_legacy_f32  v3, v0, -2.0, 1.0                   // 000000000024: D2800003 03C9EB00
  v_mov_b32     v4, 0                                   // 00000000002C: 7E080280
  s_waitcnt     lgkmcnt(0)                              // 000000000030: BF8C007F
  buffer_store_dword  v2, v0, s[0:3], s4 glc slc        // 000000000034: E0704000 04400200
  v_mov_b32     v2, 1.0                                 // 00000000003C: 7E0402F2
  buffer_store_dword  v3, v0, s[0:3], s4 offset:4 glc slc // 000000000040: E0704004 04400300
  buffer_store_dword  v4, v0, s[0:3], s4 offset:8 glc slc // 000000000048: E0704008 04400400
  buffer_store_dword  v2, v0, s[0:3], s4 offset:12 glc slc // 000000000050: E070400C 04400200
  buffer_store_dword  v1, v0, s[0:3], s4 offset:16 glc slc // 000000000058: E0704010 04400100
  buffer_store_dword  v0, v0, s[0:3], s4 offset:20 glc slc // 000000000060: E0704014 04400000
  s_endpgm                                              // 000000000068: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   5
//  NumSRegs:                   7
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   82
//  CycleSimNWaves:             82
//  Code Size:                  108
//Assembler Counts:
//  num_32bit_ops                     : 9
//  num_64bit_ops                     : 9
//  num_alu                           : 9
//  num_fc                            : 3
//  num_inst_exp                      : 0
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 0
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 6
//  num_inst_sopp                     : 2
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 0
//  num_inst_sop2                     : 0
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 4
//  num_inst_vop2                     : 2
//  num_inst_vop3                     : 0
//  num_inst_vopc                     : 0
//  num_inst_vintrp                   : 0
//  constant_literal_operands         : 0
//  num_tex                           : 6
//  num_vmem_group                    : 2
//  vmem_grouping_started             : 0
// Shader Statistics:
// m_uNumActiveWaveFront             : 40
// m_uVRegLimit                      : 256
// m_uSRegLimit                      : 512
// m_uNumVRegs                       : 5
// m_uNumSRegs                       : 7
// m_uSCCodeSize                     : 108
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 82
// m_uCycleSimNWaves                 : 82

// Assembler Counts:
// num_32bit_ops                     : 9
// num_64bit_ops                     : 9
// num_alu                           : 9
// num_fc                            : 3
// num_inst_exp                      : 0
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 0
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 6
// num_inst_sopp                     : 2
// num_inst_sopc                     : 0
// num_inst_sop1                     : 0
// num_inst_sop2                     : 0
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 4
// num_inst_vop2                     : 2
// num_inst_vop3                     : 0
// num_inst_vopc                     : 0
// num_inst_vintrp                   : 0
// num_inst_smem                     : 1
// constant_literal_operands         : 0
// num_tex                           : 6
// num_vmem_group                    : 2
// vmem_grouping_started             : 0
// m_fFullPrecompilePromise          : 0
// m_fIntegerDivideExpansion         : 0
// m_fIntegerModExpansion            : 0
// m_fDoubleDivideExpansion          : 0
// m_fUsesScratch                    : 0
// m_fPerThreadIndirection           : 0
// m_fUsingTableLoads                : 0
// m_fUsingSHmemLoads                : 0
// fSemanticHashFlagOverrideApplied  : 0
// fPSHasNoUAVWrite                  : 0
// m_fRenderTargetsCanBeCompacted    : 0
// version                           : 3
// fCodePatched                      : 0

// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[348], bundle is:[131] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (VS)
// Shader Hw Stage           : (LS)
// PDB Filename              : D:\ATG\st_dev\Kits\DirectXTK\src\Shaders\Compiled\XboxOneToneMap_VSQuad.pdb
// Shader Semantic Hash      : 0x300aeefbe5b2d20a
//
// Shader Data:
; ----------------- VS Data ------------------------
; Input Semantic Mappings
;    No input mappings
; Output Semantic Mappings
;   [0] position,  usageIdx 0, paramIdx 0, paramSlot 0
;   [1] generic,  usageIdx 1, paramIdx 1, paramSlot 0

codeLenInByte        = 88 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 0;
extUserElementCount  = 0;
NumVgprs             = 5;
NumSgprs             = 5;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000000
; constBufUsage           = 0x00000000

; SPI_SHADER_PGM_RSRC2_VS = 0x00000008
SSPRV:USER_SGPR             = 4
; PA_CL_VS_OUT_CNTL       = 0x00000000
; SPI_VS_OUT_CONFIG       = 0x00000000
SVOC:VS_EXPORT_COUNT        = 0
SVOC:VS_HALF_PACK           = 0
SVOC:VS_EXPORTS_FOG         = 0
SVOC:VS_OUT_FOG_VEC_ADDR    = 0
; SPI_SHADER_POS_FORMAT     = 0x00000004
SSPF:POS0_EXPORT_FORMAT     = 4
SSPF:POS1_EXPORT_FORMAT     = 0
SSPF:POS2_EXPORT_FORMAT     = 0
SSPF:POS3_EXPORT_FORMAT     = 0
VGT_STRMOUT_CONFIG = 0x0
VGT_STRMOUT_CONFIG:RAST_STREAM = 0
VGT_STRMOUT_CONFIG:STREAMOUT_0_EN = 0
VGT_STRMOUT_CONFIG:STREAMOUT_1_EN = 0
VGT_STRMOUT_CONFIG:STREAMOUT_2_EN = 0
VGT_STRMOUT_CONFIG:STREAMOUT_3_EN = 0
; vgprCompCnt               = 1
; exportVertexSize          = 8
; lsStride                  = 32

// Shader Instructions:
shader main
  asic(CI)
  type(VS)
  s_mov_b32     m0, 0x00010000                          // 000000000000: BEFC03FF 00010000
  v_lshlrev_b32  v2, 1, v0                              // 000000000008: 34040081
  v_bfi_b32     v2, 2, v2, 0                            // 00000000000C: D2940002 02020482
  v_cvt_f32_u32  v2, v2                                 // 000000000014: 7E040D02
  v_mad_legacy_f32  v3, v2, 2.0, -1.0                   // 000000000018: D2800003 03CDE902
  v_and_b32     v0, 2, v0                               // 000000000020: 36000082
  v_cvt_f32_u32  v0, v0                                 // 000000000024: 7E000D00
  v_mad_legacy_f32  v4, v0, -2.0, 1.0                   // 000000000028: D2800004 03C9EB00
  v_lshlrev_b32  v1, 5, v1                              // 000000000030: 34020285
  ds_write2_b32  v1, v3, v4 offset1:1                   // 000000000034: D8380100 00040301
  v_mov_b32     v3, 0                                   // 00000000003C: 7E060280
  v_mov_b32     v4, 1.0                                 // 000000000040: 7E0802F2
  ds_write2_b32  v1, v3, v4 offset0:2 offset1:3         // 000000000044: D8380302 00040301
  ds_write2_b32  v1, v2, v0 offset0:4 offset1:5         // 00000000004C: D8380504 00000201
  s_endpgm                                              // 000000000054: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   5
//  NumSRegs:                   2
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   81
//  CycleSimNWaves:             81
//  Code Size:                  88
//Assembler Counts:
//  num_32bit_ops                     : 9
//  num_64bit_ops                     : 6
//  num_alu                           : 10
//  num_fc                            : 2
//  num_inst_exp                      : 0
//  num_inst_ldsgds                   : 3
//  num_inst_mimg                     : 0
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 1
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 1
//  num_inst_sop2                     : 0
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 4
//  num_inst_vop2                     : 3
//  num_inst_vop3                     : 0
//  num_inst_vopc                     : 0
//  num_inst_vintrp                   : 0
//  constant_literal_operands         : 0
//  num_tex                           : 3
//  num_vmem_group                    : 0
//  vmem_grouping_started             : 0
// Shader Statistics:
// m_uNumActiveWaveFront             : 40
// m_uVRegLimit                      : 256
// m_uSRegLimit                      : 512
// m_uNumVRegs                       : 5
// m_uNumSRegs                       : 2
// m_uSCCodeSize                     : 88
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 81
// m_uCycleSimNWaves                 : 81

// Assembler Counts:
// num_32bit_ops                     : 9
// num_64bit_ops                     : 6
// num_alu                           : 10
// num_fc                            : 2
// num_inst_exp                      : 0
// num_inst_ldsgds                   : 3
// num_inst_mimg                     : 0
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 1
// num_inst_sopc                     : 0
// num_inst_sop1                     : 1
// num_inst_sop2                     : 0
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 4
// num_inst_vop2                     : 3
// num_inst_vop3                     : 0
// num_inst_vopc                     : 0
// num_inst_vintrp                   : 0
// num_inst_smem                     : 0
// constant_literal_operands         : 0
// num_tex                           : 3
// num_vmem_group                    : 0
// vmem_grouping_started             : 0
// m_fFullPrecompilePromise          : 0
// m_fIntegerDivideExpansion         : 0
// m_fIntegerModExpansion            : 0
// m_fDoubleDivideExpansion          : 0
// m_fUsesScratch                    : 0
// m_fPerThreadIndirection           : 0
// m_fUsingTableLoads                : 0
// m_fUsingSHmemLoads                : 0
// fSemanticHashFlagOverrideApplied  : 0
// fPSHasNoUAVWrite                  : 0
// m_fRenderTargetsCanBeCompacted    : 0
// version                           : 3
// fCodePatched                      : 0

// Approximately 0 instruction slots used
#endif

const BYTE ToneMap_VSQuad[] =
{
     68,  88,  66,  67, 254,  91, 
    135, 153, 127, 236, 153,  67, 
    218, 233, 233,  31, 207, 103, 
     94,   8,   1,   0,   0,   0, 
    175,   8,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    104,   0,   0,   0, 192,   0, 
      0,   0,  76,   8,   0,   0, 
     92,   8,   0,   0,  73,  83, 
     71,  78,  44,   0,   0,   0, 
      1,   0,   0,   0,   8,   0, 
      0,   0,  32,   0,   0,   0, 
      0,   0,   0,   0,   6,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   1,   1, 
      0,   0,  83,  86,  95,  86, 
    101, 114, 116, 101, 120,  73, 
    100,   0,  79,  83,  71,  78, 
     80,   0,   0,   0,   2,   0, 
      0,   0,   8,   0,   0,   0, 
     56,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     68,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,   3,  12,   0,   0, 
     83,  86,  95,  80, 111, 115, 
    105, 116, 105, 111, 110,   0, 
     84,  69,  88,  67,  79,  79, 
     82,  68,   0, 171, 171, 171, 
     83,  72,  69,  88, 132,   7, 
      0,   0,  80,   0,   1,   0, 
    225,   1,   0,   0,  53,  16, 
      0,   0,   5,   0,   0,   0, 
     81,   0,   0,   0,  80,   0, 
      1,   0,  76,   0,   0,   0, 
    106,   8,   0,   1,  96,   0, 
      0,   4,  18,  16,  16,   0, 
      0,   0,   0,   0,   6,   0, 
      0,   0, 103,   0,   0,   4, 
    242,  32,  16,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
    101,   0,   0,   3,  50,  32, 
     16,   0,   1,   0,   0,   0, 
    104,   0,   0,   2,   1,   0, 
      0,   0, 140,   0,   0,  11, 
     18,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      1,   0,   0,   0,   1,  64, 
      0,   0,   1,   0,   0,   0, 
     10,  16,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  86,   0, 
      0,   5,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,   9,  18,  32, 
     16,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,  64,   1,  64, 
      0,   0,   0,   0, 128, 191, 
      1,   0,   0,   7,  66,   0, 
     16,   0,   0,   0,   0,   0, 
     10,  16,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      2,   0,   0,   0,  86,   0, 
      0,   5,  34,   0,  16,   0, 
      0,   0,   0,   0,  42,   0, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,   9,  34,  32, 
     16,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0, 192,   1,  64, 
      0,   0,   0,   0, 128,  63, 
     54,   0,   0,   5,  50,  32, 
     16,   0,   1,   0,   0,   0, 
     70,   0,  16,   0,   0,   0, 
      0,   0,  54,   0,   0,   8, 
    194,  32,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 128,  63,  62,   0, 
      0,   1,  53,  16,   0,   0, 
    128,   0,   0,   0,  23,   0, 
      1,   0,  32, 240,  21,   0, 
    120,   1, 237, 152,  77,  75, 
     27,  65,  24, 199, 159, 157, 
     77, 198,  52,  54, 190, 180, 
    245, 221,  86, 143, 158, 196, 
    131,   8, 237, 169, 161,   1, 
     15, 182, 168,  53, 136, 135, 
      1,  27, 221,   5,   3, 154, 
    132,  36, 138, 135,  18,  82, 
     63,  67,  47, 250,  49, 196, 
    123, 123,  43,  66,  75,  33, 
    159, 193,  30,  68,  40, 197, 
    147, 208,  66, 253, 255, 117, 
    150, 138,  73, 232, 177,   5, 
    231,   7, 191, 121,  54,  59, 
    147, 217, 103, 103, 102,  47, 
    207, 143,  62, 185,  34,  28, 
     47, 124,  98,  60, 126, 186, 
     56,  54, 229, 137, 196, 249, 
      3, 196, 216, 128, 210,  35, 
    182,  34,  71,  54,  78, 176, 
    193,  56,  81,  34, 250,  58, 
     72,   6,  62, 135, 236, 139, 
     20,  89,  72,  31, 236, 231, 
    210, 221, 184, 226, 152,   4, 
    124, 109, 237, 128, 124, 206, 
     61, 104, 167, 106, 130, 247, 
     91, 193, 188,  90, 141,  39, 
     77, 247, 223, 176, 105, 205, 
    125, 200, 252, 219, 193, 220, 
     34,  56, 111, 148,  79, 180, 
     62, 255,  27, 209,  62,  17, 
    238, 199,  77, 186, 216, 252, 
      5, 174,   5, 223, 237,  35, 
    108, 199, 111, 192, 216,  14, 
    206, 161, 177,  80,  26,  11, 
    166, 125, 136, 205, 210, 152, 
     84, 163,  67,  99, 211,  53, 
     14, 129, 198, 194, 234,  36, 
    236, 132, 216,   4, 157, 130, 
     72,  80, 227, 160, 232,  30, 
    216,  11,  31, 192, 135,  16, 
    239, 164, 113,  78, 117,  63, 
     28, 128, 131, 112,   8,  14, 
    195,  17,  56,  10,  31, 195, 
     39, 112, 236, 122, 143, 248, 
    252, 187,  12,  95, 159, 223, 
     90,   4, 191, 151, 136, 155, 
    215, 119, 124, 153,  28,  14, 
    135, 195, 225, 112,  56,  28, 
     14, 135, 195, 225, 112, 252, 
     67, 222, 137, 154, 246, 228, 
    125,  99,  79,  41, 181,  39, 
     50, 227, 165,  84,  77,  82, 
     82,  83,  82, 111, 120, 167, 
     95, 124,  31,  81, 206, 142, 
    253, 186,  74, 212, 206,  85, 
    178, 246,  53,  33,  23, 202, 
    143, 197, 187, 149,  92, 120, 
     18, 139,  99, 134,  15,  39, 
    182,  22, 246, 217, 198,  65, 
    200, 122,  94, 236, 170,  66, 
     37, 146, 108,  28, 126, 251, 
    249,  61,  57, 197, 107,  50, 
    106, 107, 161, 191, 236, 248, 
    113, 200, 250, 224,  31, 234, 
    108, 154, 200, 216, 255,  77, 
    219, 216,   3,  89,  99, 233, 
    138, 170, 132, 182, 240,  22, 
    216, 126,  99,  35, 235,  51, 
    157, 240, 118,  30, 111, 109, 
    255,  75, 200,  76,  51, 207, 
     76,  58,  59, 107,  42, 213, 
    213,  32, 220,  49, 115, 249, 
    106, 197, 100, 242, 229, 112, 
    189, 186, 146, 157,  51, 149, 
    242, 186,  89, 218, 200,   5, 
     97, 185,  98,  94,  20, 183, 
     74, 249, 205,  48,  48,  43, 
    107, 197, 221, 249,  66, 152, 
     45,  22, 194,  87, 185, 210, 
    234, 242, 210, 226, 118,  46, 
    152,  44,   5, 107, 114,   9, 
     22, 187,  80, 134,  53,  16, 
      0,   0, 139,   0,   0,   0, 
     23,   0,   1,   0,  16,  64, 
     22,   0, 120,   1, 237, 152, 
     49, 111,  19,  49,  24, 134, 
    191, 243,  25,  19, 210, 164, 
      4,  40, 208,  66, 161, 140, 
     76, 168,  67, 133,   4, 211, 
     69,  84,  48, 180,   8,  74, 
     35, 212, 225, 164, 146, 246, 
     78,  34,  82, 104,  78,  73, 
     64,  76,  33,  84, 140, 140, 
    253,   1, 252,   0,  38, 196, 
    222, 174, 149, 218,  37, 115, 
      7,  22,   6, 132, 196, 192, 
    202,   0, 239,  11, 118,  57, 
     82, 186,  87, 170,  31, 233, 
    241, 119,  57, 251, 206, 223, 
    217, 206, 242,  69,  23, 228, 
     55,  15, 223, 221, 221,  99, 
    220, 190, 181,  48,  53,  29, 
    136, 156, 224,  15, 160, 216, 
    128, 108, 140, 173, 136,  62, 
    207,  86, 228,  58,  27, 140, 
    227,   0, 142,  61,   9, 155, 
     48, 130, 236, 115, 226, 201, 
    234, 238,  78, 191, 122,  17, 
     87,  28,  71,  31,  89,  79, 
    229,  12, 225,  48,   6, 186, 
    249, 135, 209, 112, 184, 143, 
    233, 144,   3, 207,  61,  97, 
    243, 127, 206,  66, 230, 116, 
     24, 204, 141, 239, 115, 184, 
     60, 249, 189,  71,  17, 183, 
     79, 132, 251, 145, 103,  20, 
    186, 117, 217, 203, 141, 203, 
    195, 181, 224, 183, 109, 193, 
    195, 248,   9,  24, 243,  76, 
    179, 177, 112, 189,  12,  54, 
    195,  96,  50, 131,   5,  51, 
    216,  44, 131,  23,  27, 116, 
     24, 188, 220,  20,  32,  22, 
    214,  20, 225,   8,  44, 193, 
     50,  68, 130, 230,  52, 172, 
    192,  51,  16, 155,  99, 206, 
     65, 228, 106, 112, 238,  12, 
    206, 170, 193,  65,  50, 227, 
    112,   2,  94, 130, 151, 225, 
     36, 188,   2, 175, 194, 169, 
    127, 247, 222,   4, 238,  84, 
     28,  47, 184,   6,  88, 230, 
    125, 248, 127, 113, 240, 190, 
    235,  59, 158, 171, 227, 241, 
    120,  60,  30, 143, 199, 227, 
    241, 120,  60,  30, 143, 231, 
     40, 240,  90, 212,  76,  33, 
    236, 111,   5, 178,  49,  88, 
     87,  74,   5, 101, 213,  91, 
     23, 185, 169, 164,  63,   8, 
    190, 236, 134,  82, 150,  94, 
    136, 107, 249, 186,  29, 246, 
     85, 161, 247,  74, 222, 110, 
     74, 148, 125,  18,  21, 233, 
    239,  74, 247,  52, 175, 195, 
     72,  23,  24, 117, 164,  75, 
    140, 232, 171,  48,   6, 145, 
     30,  99, 148,  72,  99, 166, 
    205, 113,  78, 168, 254, 212, 
     76,  28,  19,  44, 140,  12, 
    221, 155, 177, 181, 207,  73, 
     27, 249,  28, 235, 131, 218, 
     86,   8, 139, 131,  15, 159, 
    127, 124,  43, 238, 151, 194, 
    154, 118, 220, 188, 141, 215, 
     96,   9, 254, 133, 213, 210, 
    131, 108, 216, 241, 111, 108, 
    172,  64, 214, 111,  70,  93, 
    165, 146, 133,  60, 240, 209, 
    246, 191, 183, 145,  53, 157, 
     17,  56, 156, 199, 142, 237, 
    159, 135, 204, 116, 246, 118, 
     92, 173, 221, 139,  59, 221, 
    229,  36, 125,  17, 207,  53, 
    186, 157, 120, 182, 209,  78, 
     87, 187,  75, 181, 185, 184, 
    211,  94, 141,  23, 159, 214, 
    147, 180, 221, 137, 239, 180, 
    158, 101, 141, 102, 154, 196, 
     75,  43, 173, 151,  15, 214, 
    210,  90, 107,  45, 189,  95, 
    207, 150,  31,  47,  46,  60, 
    175,  39,  55, 178, 100,  69, 
    126,   1, 139,  51,  92, 254, 
      0,   0,  53,  16,   0,   0, 
    133,   0,   0,   0,  23,   0, 
      1,   0,   0,   4,  22,   0, 
    120,   1, 237, 152, 191,  79, 
     83,  81,  20, 199,  79, 239, 
    123,  28, 161,  80, 172,  10, 
    242, 195,  31,  56,  50, 153, 
     14, 196, 168, 147, 141,  36, 
    154,  32, 145, 134, 134, 116, 
    120,   9,  22, 222,  75, 108, 
     34, 244, 165, 173, 134, 169, 
     17,  18, 119,   7,  23, 253, 
     51, 248,   3, 144,  17,   6, 
    150,  78, 142,  46,  14, 134, 
    132, 193, 201,  68,  18, 248, 
    126, 203, 125, 218,  84, 145, 
     81,  19, 238,  39, 249, 220, 
    243, 238, 187, 183, 237, 125, 
    231, 188,  46, 199, 191,  42, 
    109,  90, 149, 189,  11, 140, 
    187, 247,  10,  19, 185, 148, 
     72,  15,  39,  29, 196,  67, 
     28,  69, 118, 108, 156, 228, 
    128, 125,  98,  78, 246,  34, 
     72,   9,  62, 128,  92,  75, 
     20, 153, 203, 127, 120,  95, 
    206, 243, 138, 123,  20,  22, 
    172, 125, 144, 243,  52, 228, 
     26, 241,  56, 116, 192, 159, 
     32,  73,  76, 240,  97, 247, 
    222, 132, 223, 238,  63, 227, 
    240, 103,  46, 194, 238, 103, 
    237, 132, 103,  35, 201, 119, 
     38, 231, 252, 219, 103, 254, 
     37,  73, 157,   8, 235, 209, 
    201,  32, 135,  51, 224, 115, 
    209, 109, 120,  26,  71, 128, 
    241,  52,  88,  83,  69, 193, 
     20, 201,  82,  36,  78,  81, 
     44, 197, 151,  42,  22,  20, 
    111, 153, 246,  66,  20,  95, 
    145,  92, 237, 135,   3,  48, 
      3, 113,  64,  69,  65,  52, 
     11,  47, 193, 203, 240,  10, 
    196,  51, 233,  48, 196, 187, 
    170,  35, 112,  20, 142, 193, 
    113, 120,  13,  94, 135,  55, 
    224,  77,  56, 241, 171,  70, 
     68,  83, 221, 111, 206, 249, 
    128,  57,  64, 154, 127, 194, 
    255,  11,  97,  54, 146, 251, 
    183, 224, 249, 204, 142, 195, 
    225, 112,  56,  28,  14, 135, 
    195, 225, 112,  56,  28, 142, 
    255, 129,  35, 239, 112, 139, 
    221, 137, 117, 241, 167, 140, 
    188, 107, 109, 248, 198, 152, 
    140, 223, 244, 228, 117, 203, 
    124, 221, 243,  54,  68, 238, 
     72,  70, 154,  62, 230, 178, 
    191, 235, 189,  49, 102,  74, 
     82, 119,  63, 165,  60, 220, 
     49, 218, 252, 102, 122, 155, 
    198,  59, 153, 251,  61, 136, 
    237, 166, 208, 250, 199, 239, 
    182,  63, 246, 217, 198,  81, 
    200,  62, 164, 223, 238,  90, 
    137, 164,  91, 155,  95, 126, 
     28, 164, 115, 188,  38, 185, 
     97, 142,  34,  89,  27, 217, 
     51,  25, 128, 103,  81, 178, 
    251,  31, 219, 152, 133, 236, 
    193,  12, 182, 187, 107, 192, 
     54, 227, 214, 236, 122, 108, 
     35, 123,  51, 253, 176, 251, 
     28, 111, 237, 250,  19, 200, 
    147,  78, 223,  15, 242, 197, 
     71,  65, 189, 177,  24,  70, 
    175, 130, 153,  74, 163,  30, 
     76,  87, 106, 209, 114, 163, 
     84, 156,   9, 234, 181, 229, 
     96, 254, 121,  57, 140, 106, 
    245, 224,  97, 117,  37, 174, 
    188, 136, 194, 160, 180,  84, 
     93, 123, 186,  26,  21, 171, 
    171, 209, 108,  57,  94,  92, 
    152,  47, 188,  44, 135, 183, 
    227, 112,  73, 142,   1, 174, 
     67,  83,  97,   0,   0,   0, 
     88,  72,  83,  72,   8,   0, 
      0,   0,  10, 210, 178, 229, 
    251, 238,  10,  48,  88,  80, 
     68,  80,  75,   0,   0,   0, 
     68,  58,  92,  65,  84,  71, 
     92, 115, 116,  95, 100, 101, 
    118,  92,  75, 105, 116, 115, 
     92,  68, 105, 114, 101,  99, 
    116,  88,  84,  75,  92, 115, 
    114,  99,  92,  83, 104,  97, 
    100, 101, 114, 115,  92,  67, 
    111, 109, 112, 105, 108, 101, 
    100,  92,  88,  98, 111, 120, 
     79, 110, 101,  84, 111, 110, 
    101,  77,  97, 112,  95,  86, 
     83,  81, 117,  97, 100,  46, 
    112, 100,  98
};
