// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function P_Molotov_Start_BP.P_Molotov_Start_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AP_Molotov_Start_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Molotov_Start_BP.P_Molotov_Start_BP_C.UserConstructionScript");

	AP_Molotov_Start_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function P_Molotov_Start_BP.P_Molotov_Start_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AP_Molotov_Start_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Molotov_Start_BP.P_Molotov_Start_BP_C.ReceiveBeginPlay");

	AP_Molotov_Start_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function P_Molotov_Start_BP.P_Molotov_Start_BP_C.ExecuteUbergraph_P_Molotov_Start_BP
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AP_Molotov_Start_BP_C::ExecuteUbergraph_P_Molotov_Start_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function P_Molotov_Start_BP.P_Molotov_Start_BP_C.ExecuteUbergraph_P_Molotov_Start_BP");

	AP_Molotov_Start_BP_C_ExecuteUbergraph_P_Molotov_Start_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
