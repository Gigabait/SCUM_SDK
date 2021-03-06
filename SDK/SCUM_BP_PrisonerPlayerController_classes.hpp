#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PrisonerPlayerController.BP_PrisonerPlayerController_C
// 0x0010 (0x08C0 - 0x08B0)
class ABP_PrisonerPlayerController_C : public APrisonerPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B0(0x0008) (Transient, DuplicateTransient)
	class UUI_GameMenu_C*                              GameMenu;                                                 // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PrisonerPlayerController.BP_PrisonerPlayerController_C");
		return ptr;
	}


	void CreateGameMenu();
	void ToggleGameMenu();
	void UserConstructionScript();
	void ToggleGameMenuEvent();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PrisonerPlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
