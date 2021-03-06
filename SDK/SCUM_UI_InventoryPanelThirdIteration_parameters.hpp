#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ReinitializeForPrisoner
struct UUI_InventoryPanelThirdIteration_C_ReinitializeForPrisoner_Params
{
	class APrisoner*                                   Prisoner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ScrollToEquippedItem
struct UUI_InventoryPanelThirdIteration_C_ScrollToEquippedItem_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.OnItemDestroyed
struct UUI_InventoryPanelThirdIteration_C_OnItemDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.OnItemPickedUpStateChanged
struct UUI_InventoryPanelThirdIteration_C_OnItemPickedUpStateChanged_Params
{
	class AItem*                                       Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               pickedUp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.UpdateContainerForItem
struct UUI_InventoryPanelThirdIteration_C_UpdateContainerForItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.RemoveContainerForItem
struct UUI_InventoryPanelThirdIteration_C_RemoveContainerForItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.AddContainerForItem
struct UUI_InventoryPanelThirdIteration_C_AddContainerForItem_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.OnDragLeave
struct UUI_InventoryPanelThirdIteration_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.UpdateItemWidgetHighlightings
struct UUI_InventoryPanelThirdIteration_C_UpdateItemWidgetHighlightings_Params
{
};

// Function UI_InventoryPanelThirdIteration.UI_InventoryPanelThirdIteration_C.ExecuteUbergraph_UI_InventoryPanelThirdIteration
struct UUI_InventoryPanelThirdIteration_C_ExecuteUbergraph_UI_InventoryPanelThirdIteration_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
