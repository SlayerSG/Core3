/*
 *	server/zone/objects/player/PlayerObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef PLAYEROBJECT_H_
#define PLAYEROBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace commands {

class QueueCommand;

} // namespace commands
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::commands;

namespace server {
namespace zone {

class ZoneClientSession;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace waypoint {

class WaypointObject;

} // namespace waypoint
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::waypoint;

#include "server/zone/objects/creature/professions/Certification.h"

#include "server/zone/objects/scene/variables/DeltaVectorMap.h"

#include "server/zone/objects/scene/variables/DeltaVector.h"

#include "server/zone/objects/player/variables/WaypointList.h"

#include "server/zone/objects/creature/professions/Skill.h"

#include "server/zone/objects/player/variables/SkillList.h"

#include "engine/lua/LuaObject.h"

#include "server/zone/objects/intangible/IntangibleObject.h"

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObject : public IntangibleObject {
public:
	static const int LFG = 1;

	static const int NEWBIEHELPER = 2;

	static const int ROLEPLAYER = 4;

	static const int AFK = 0x80;

	static const int LD = 0x100;

	static const int FACTIONRANK = 0x200;

	static const int ANONYMOUS = 0x80000000;

	static const int CSR = 1;

	static const int DEVELOPER = 2;

	static const int ADMIN = 3;

	static const int NORMAL = 4;

	static const int QA = 8;

	static const int EC = 16;

	static const int CSRJR = 32;

	static const int ECJR = 64;

	PlayerObject(LuaObject* templateData);

	void loadTemplateData(LuaObject* templateData);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void sendMessage(BasePacket* msg);

	void addExperience(const String& xpType, int xp, bool notifyClient = true);

	void removeExperience(const String& xpType, bool notifyClient = true);

	void addWaypoint(WaypointObject* waypoint, bool notifyClient = true);

	void addWaypoint(const String& planet, float positionX, float positionY, bool notifyClient = true);

	void addSkills(Vector<QueueCommand*>& skills, bool notifyClient = true);

	void addSkills(Vector<Certification*>& skills, bool notifyClient = true);

	void removeSkills(Vector<QueueCommand*>& skills, bool notifyClient = true);

	void removeSkills(Vector<Certification*>& skills, bool notifyClient = true);

	bool hasSkill(Skill* skill);

	unsigned int getCharacterBitmask();

	String getTitle();

	unsigned int getAdminLevel();

	void setCharacterBitmask(unsigned int bitmask);

	bool setCharacterBit(unsigned int bit, bool notifyClient = false);

	bool clearCharacterBit(unsigned int bit, bool notifyClient = false);

	void setTitle(const String& characterTitle);

	DeltaVectorMap<String, int>* getExperienceList();

	int getForcePower();

	int getForcePowerMax();

	WaypointList* getWaypointList();

	SkillList* getSkills();

	int getFoodFilling();

	int getFoodFillingMax();

	int getDrinkFilling();

	int getDrinkFillingMax();

	int getJediState();

protected:
	PlayerObject(DummyConstructorParameter* param);

	virtual ~PlayerObject();

	String _return_getTitle;

	friend class PlayerObjectHelper;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerObjectImplementation : public IntangibleObjectImplementation {
protected:
	unsigned int characterBitmask;

	String title;

	int forcePower;

	int forcePowerMax;

	int foodFilling;

	int foodFillingMax;

	int drinkFilling;

	int drinkFillingMax;

	int jediState;

	unsigned int adminLevel;

	DeltaVectorMap<String, int> experienceList;

	WaypointList waypointList;

	SkillList skillList;

public:
	static const int LFG = 1;

	static const int NEWBIEHELPER = 2;

	static const int ROLEPLAYER = 4;

	static const int AFK = 0x80;

	static const int LD = 0x100;

	static const int FACTIONRANK = 0x200;

	static const int ANONYMOUS = 0x80000000;

	static const int CSR = 1;

	static const int DEVELOPER = 2;

	static const int ADMIN = 3;

	static const int NORMAL = 4;

	static const int QA = 8;

	static const int EC = 16;

	static const int CSRJR = 32;

	static const int ECJR = 64;

	PlayerObjectImplementation(LuaObject* templateData);

	PlayerObjectImplementation(DummyConstructorParameter* param);

	void loadTemplateData(LuaObject* templateData);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void sendMessage(BasePacket* msg);

	void addExperience(const String& xpType, int xp, bool notifyClient = true);

	void removeExperience(const String& xpType, bool notifyClient = true);

	void addWaypoint(WaypointObject* waypoint, bool notifyClient = true);

	void addWaypoint(const String& planet, float positionX, float positionY, bool notifyClient = true);

	void addSkills(Vector<QueueCommand*>& skills, bool notifyClient = true);

	void addSkills(Vector<Certification*>& skills, bool notifyClient = true);

	void removeSkills(Vector<QueueCommand*>& skills, bool notifyClient = true);

	void removeSkills(Vector<Certification*>& skills, bool notifyClient = true);

	bool hasSkill(Skill* skill);

	unsigned int getCharacterBitmask();

	String getTitle();

	unsigned int getAdminLevel();

	void setCharacterBitmask(unsigned int bitmask);

	bool setCharacterBit(unsigned int bit, bool notifyClient = false);

	bool clearCharacterBit(unsigned int bit, bool notifyClient = false);

	void setTitle(const String& characterTitle);

	DeltaVectorMap<String, int>* getExperienceList();

	int getForcePower();

	int getForcePowerMax();

	WaypointList* getWaypointList();

	SkillList* getSkills();

	int getFoodFilling();

	int getFoodFillingMax();

	int getDrinkFilling();

	int getDrinkFillingMax();

	int getJediState();

	PlayerObject* _this;

	operator const PlayerObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~PlayerObjectImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class PlayerObject;
};

class PlayerObjectAdapter : public IntangibleObjectAdapter {
public:
	PlayerObjectAdapter(PlayerObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void sendBaselinesTo(SceneObject* player);

	void sendMessage(BasePacket* msg);

	void addExperience(const String& xpType, int xp, bool notifyClient);

	void removeExperience(const String& xpType, bool notifyClient);

	void addWaypoint(const String& planet, float positionX, float positionY, bool notifyClient);

	unsigned int getCharacterBitmask();

	String getTitle();

	unsigned int getAdminLevel();

	void setCharacterBitmask(unsigned int bitmask);

	bool setCharacterBit(unsigned int bit, bool notifyClient);

	bool clearCharacterBit(unsigned int bit, bool notifyClient);

	void setTitle(const String& characterTitle);

	int getForcePower();

	int getForcePowerMax();

	int getFoodFilling();

	int getFoodFillingMax();

	int getDrinkFilling();

	int getDrinkFillingMax();

	int getJediState();

protected:
	String _param0_addExperience__String_int_bool_;
	String _param0_removeExperience__String_bool_;
	String _param0_addWaypoint__String_float_float_bool_;
	String _param0_setTitle__String_;
};

class PlayerObjectHelper : public DistributedObjectClassHelper, public Singleton<PlayerObjectHelper> {
	static PlayerObjectHelper* staticInitializer;

public:
	PlayerObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PlayerObjectHelper>;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#endif /*PLAYEROBJECT_H_*/
