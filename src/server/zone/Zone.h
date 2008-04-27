/*
 *	server/zone/Zone.h generated by engine3 IDL compiler 0.55
 */

#ifndef ZONE_H_
#define ZONE_H_

#include "engine/orb/DistributedObjectBroker.h"

class SceneObject;

class ZoneServer;

class ChatManager;

class PlanetManager;

class CreatureManager;

#include "engine/util/QuadTreeEntry.h"

class Zone : public DistributedObjectStub {
protected:
	Zone();
	Zone(DistributedObjectServant* obj);
	Zone(Zone& ref);

	virtual ~Zone();

public:
	Zone* clone();

	void startManagers();

	void stopManagers();

	void lock(bool doLock = true);

	void unlock(bool doLock = true);

	void registerObject(SceneObject* obj);

	SceneObject* lookupObject(unsigned long long oid);

	SceneObject* deleteObject(unsigned long long oid);

	SceneObject* deleteObject(SceneObject* obj);

	SceneObject* deleteCachedObject(SceneObject* obj);

	int getZoneID();

	ZoneServer* getZoneServer();

	ChatManager* getChatManager();

	CreatureManager* getCreatureManager();

	PlanetManager* getPlanetManager();

	unsigned long long getGalacticTime();

	unsigned int getWeatherId();

	float getWeatherCloudX();

	float getWeatherCloudY();

	void setSize(float minx, float miny, float maxx, float maxy);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void removeAll();

	bool update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

protected:
	friend class ZoneHelper;
};

class ZoneImplementation;

class ZoneAdapter : public DistributedObjectAdapter {
public:
	ZoneAdapter(ZoneImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void startManagers();

	void stopManagers();

	void lock(bool doLock);

	void unlock(bool doLock);

	void registerObject(SceneObject* obj);

	SceneObject* lookupObject(unsigned long long oid);

	SceneObject* deleteObject(unsigned long long oid);

	SceneObject* deleteObject(SceneObject* obj);

	SceneObject* deleteCachedObject(SceneObject* obj);

	int getZoneID();

	ZoneServer* getZoneServer();

	ChatManager* getChatManager();

	CreatureManager* getCreatureManager();

	PlanetManager* getPlanetManager();

	unsigned long long getGalacticTime();

	unsigned int getWeatherId();

	float getWeatherCloudX();

	float getWeatherCloudY();

	void setSize(float minx, float miny, float maxx, float maxy);

	void insert(QuadTreeEntry* obj);

	void remove(QuadTreeEntry* obj);

	void removeAll();

	bool update(QuadTreeEntry* obj);

	void inRange(QuadTreeEntry* obj, float range);

};

class ZoneHelper : public DistributedObjectClassHelper, public Singleton<ZoneHelper> {
public:
	ZoneHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectServant* obj);

	friend class SingletonWrapper<ZoneHelper>;
};

class ZoneServant : public DistributedObjectServant {
public:
	Zone* _this;

public:
	ZoneServant();
	virtual ~ZoneServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*ZONE_H_*/
