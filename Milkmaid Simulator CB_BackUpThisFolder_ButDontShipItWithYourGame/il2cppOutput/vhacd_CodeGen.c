#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void* MeshProcess.VHACD::CreateVHACD()
extern void VHACD_CreateVHACD_m68CE1C06CF8EAFB154FA542E690249BF21BD53A9 (void);
// 0x00000002 System.Void MeshProcess.VHACD::DestroyVHACD(System.Void*)
extern void VHACD_DestroyVHACD_mCDFCFB20EA1FFCCB9309CCFEBB665ECB1AE879A3 (void);
// 0x00000003 System.Boolean MeshProcess.VHACD::ComputeFloat(System.Void*,System.Single*,System.UInt32,System.UInt32*,System.UInt32,MeshProcess.VHACD/Parameters*)
extern void VHACD_ComputeFloat_m01CDC4BCECFA35C8FF26D7DC2AB1D867F8DF9439 (void);
// 0x00000004 System.Boolean MeshProcess.VHACD::ComputeDouble(System.Void*,System.Double*,System.UInt32,System.UInt32*,System.UInt32,MeshProcess.VHACD/Parameters*)
extern void VHACD_ComputeDouble_m2A1F19FA2D80573C92E88ED91B725279FB300348 (void);
// 0x00000005 System.UInt32 MeshProcess.VHACD::GetNConvexHulls(System.Void*)
extern void VHACD_GetNConvexHulls_m3135E9BA92A4DC80F1CE27C488512B47925A0D19 (void);
// 0x00000006 System.Void MeshProcess.VHACD::GetConvexHull(System.Void*,System.UInt32,MeshProcess.VHACD/ConvexHull*)
extern void VHACD_GetConvexHull_m9FDC2D3BE51D8DCF1A177681A5F2E81183F14097 (void);
// 0x00000007 System.Void MeshProcess.VHACD::.ctor()
extern void VHACD__ctor_mC39934ABF244FA000365B3F0739CD8EB5B1EEFF9 (void);
// 0x00000008 System.Collections.Generic.List`1<UnityEngine.Mesh> MeshProcess.VHACD::GenerateConvexMeshes(UnityEngine.Mesh)
extern void VHACD_GenerateConvexMeshes_m547666265C65FC3B806574AE4F372F49E6DDDFD3 (void);
// 0x00000009 System.Void MeshProcess.VHACD/Parameters::Init()
extern void Parameters_Init_m3490F4FB505A14FE4732305AA18A7107B4ABFC21 (void);
static Il2CppMethodPointer s_methodPointers[9] = 
{
	VHACD_CreateVHACD_m68CE1C06CF8EAFB154FA542E690249BF21BD53A9,
	VHACD_DestroyVHACD_mCDFCFB20EA1FFCCB9309CCFEBB665ECB1AE879A3,
	VHACD_ComputeFloat_m01CDC4BCECFA35C8FF26D7DC2AB1D867F8DF9439,
	VHACD_ComputeDouble_m2A1F19FA2D80573C92E88ED91B725279FB300348,
	VHACD_GetNConvexHulls_m3135E9BA92A4DC80F1CE27C488512B47925A0D19,
	VHACD_GetConvexHull_m9FDC2D3BE51D8DCF1A177681A5F2E81183F14097,
	VHACD__ctor_mC39934ABF244FA000365B3F0739CD8EB5B1EEFF9,
	VHACD_GenerateConvexMeshes_m547666265C65FC3B806574AE4F372F49E6DDDFD3,
	Parameters_Init_m3490F4FB505A14FE4732305AA18A7107B4ABFC21,
};
extern void Parameters_Init_m3490F4FB505A14FE4732305AA18A7107B4ABFC21_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[1] = 
{
	{ 0x06000009, Parameters_Init_m3490F4FB505A14FE4732305AA18A7107B4ABFC21_AdjustorThunk },
};
static const int32_t s_InvokerIndices[9] = 
{
	11374,
	11222,
	8083,
	8083,
	11157,
	9717,
	7680,
	5437,
	7680,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_vhacd_CodeGenModule;
const Il2CppCodeGenModule g_vhacd_CodeGenModule = 
{
	"vhacd.dll",
	9,
	s_methodPointers,
	1,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
