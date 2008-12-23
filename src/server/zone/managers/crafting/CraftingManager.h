/*
 *	server/zone/managers/crafting/CraftingManager.h generated by engine3 IDL compiler 0.55
 */

#ifndef CRAFTINGMANAGER_H_
#define CRAFTINGMANAGER_H_

#include "engine/orb/DistributedObjectBroker.h"

class Player;

class DraftSchematic;

class TangibleObject;

class ResourceContainer;

class CraftingTool;

class CraftingStation;

class Component;

class ZoneServer;

#include "server/zone/ZoneProcessServerImplementation.h"

class CraftingManager : public DistributedObjectStub {
public:
	CraftingManager(ZoneServer* server, ZoneProcessServerImplementation* processor);

	void reloadSchematicTable();

	void prepareCraftingSession(Player* player, CraftingTool* craftingTool, DraftSchematic* draftSchematic);

	void addIngredientToSlot(Player* player, TangibleObject* tano, int slot, int counter);

	void removeIngredientFromSlot(Player* player, int slot, int counter);

	void putComponentBackInInventory(Player* player, Component* component);

	void nextCraftingStage(Player* player, String& test);

	void craftingCustomization(Player* player, String& name, int condition, String& customizationString);

	void handleExperimenting(Player* player, int counter, int numRowsAttempted, String& expString);

	void createPrototype(Player* player, String& count);

	void createSchematic(Player* player, String& count);

	float getWeightedValue(Player* player, CraftingTool* craftingTool, DraftSchematic* draftSchematic, int type);

	float getAssemblyPercentage(float value);

	float calculateAssemblyValueModifier(CraftingTool* craftingTool);

	void addDraftSchematicsFromGroupName(Player* player, const String& schematicGroupName);

	void subtractDraftSchematicsFromGroupName(Player* player, const String& schematicGroupName);

	void refreshDraftSchematics(Player* player);

	String& generateCraftedSerial();

protected:
	CraftingManager(DummyConstructorParameter* param);

	virtual ~CraftingManager();

	String _return_generateCraftedSerial;

	friend class CraftingManagerHelper;
};

class CraftingManagerImplementation;

class CraftingManagerAdapter : public DistributedObjectAdapter {
public:
	CraftingManagerAdapter(CraftingManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void reloadSchematicTable();

	void prepareCraftingSession(Player* player, CraftingTool* craftingTool, DraftSchematic* draftSchematic);

	void addIngredientToSlot(Player* player, TangibleObject* tano, int slot, int counter);

	void removeIngredientFromSlot(Player* player, int slot, int counter);

	void putComponentBackInInventory(Player* player, Component* component);

	void nextCraftingStage(Player* player, String& test);

	void craftingCustomization(Player* player, String& name, int condition, String& customizationString);

	void handleExperimenting(Player* player, int counter, int numRowsAttempted, String& expString);

	void createPrototype(Player* player, String& count);

	void createSchematic(Player* player, String& count);

	float getWeightedValue(Player* player, CraftingTool* craftingTool, DraftSchematic* draftSchematic, int type);

	float getAssemblyPercentage(float value);

	float calculateAssemblyValueModifier(CraftingTool* craftingTool);

	void addDraftSchematicsFromGroupName(Player* player, const String& schematicGroupName);

	void subtractDraftSchematicsFromGroupName(Player* player, const String& schematicGroupName);

	void refreshDraftSchematics(Player* player);

	String& generateCraftedSerial();

protected:
	String _param1_nextCraftingStage__Player_String_;
	String _param1_craftingCustomization__Player_String_int_String_;
	String _param3_craftingCustomization__Player_String_int_String_;
	String _param3_handleExperimenting__Player_int_int_String_;
	String _param1_createPrototype__Player_String_;
	String _param1_createSchematic__Player_String_;
	String _param1_addDraftSchematicsFromGroupName__Player_String_;
	String _param1_subtractDraftSchematicsFromGroupName__Player_String_;
};

class CraftingManagerHelper : public DistributedObjectClassHelper, public Singleton<CraftingManagerHelper> {
	static CraftingManagerHelper* staticInitializer;

public:
	CraftingManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<CraftingManagerHelper>;
};

class CraftingManagerServant : public DistributedObjectServant {
public:
	CraftingManager* _this;

public:
	CraftingManagerServant();
	virtual ~CraftingManagerServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*CRAFTINGMANAGER_H_*/
