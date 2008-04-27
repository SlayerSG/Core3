/*
 *	server/zone/objects/tangible/TangibleObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef TANGIBLEOBJECT_H_
#define TANGIBLEOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class SceneObject;

class Player;

class Zone;

#include "engine/service/Message.h"

#include "../../packets/scene/AttributeListMessage.h"

#include "../scene/SceneObject.h"

class TangibleObject : public SceneObject {
protected:
	TangibleObject();
	TangibleObject(DistributedObjectServant* obj);
	TangibleObject(TangibleObject& ref);

	virtual ~TangibleObject();

public:
	TangibleObject* clone();

	void insertToZone(Zone* zone);

	void removeFromZone();

	void close(Player* player);

	void setEquipped(bool eqp);

	void setContainer(SceneObject* cont, unsigned int type = 04);

	void sendTo(Player* player, bool doClose = true);

	void repairItem(Player* player);

	void decay(int decayRate);

	bool isPersistent();

	bool isUpdated();

	bool isEquipped();

	bool isWeapon();

	bool isArmor();

	bool isClothing();

	bool isInstrument();

	bool isAttachment();

	bool isResource();

	bool isTicket();

	bool isTicketCollector();

	bool isSurveyTool();

	bool isLair();

	void setName(const string& n);

	void setTemplateName(const string& tempName);

	void setTemplateTypeName(const string& tempTypeName);

	void setPersistent(bool pers);

	void setUpdated(bool upd);

	void setConditionDamage(int damage);

	void setCustomizationString(string& cust);

	void setCustomizationVariable(unsigned char type, unsigned int value);

	SceneObject* getContainer();

	unicode& getName();

	string& getTemplateName();

	string& getTemplateTypeName();

	void getCustomizationString(string& appearance);

	int getObjectSubType();

	unsigned int getTemplateID();

	int getObjectCount();

	int getConditionDamage();

	int getMaxCondition();

	int getCondition();

	void setAttributes(string& attributestring);

	string& getAttributes();

	void addAttributes(AttributeListMessage* alm);

protected:
	string _return_getAttributes;

	string _return_getTemplateName;

	string _return_getTemplateTypeName;


	unicode _return_getName;


	friend class TangibleObjectHelper;
};

class TangibleObjectImplementation;

class TangibleObjectAdapter : public SceneObjectAdapter {
public:
	TangibleObjectAdapter(TangibleObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void insertToZone(Zone* zone);

	void removeFromZone();

	void close(Player* player);

	void setEquipped(bool eqp);

	void setContainer(SceneObject* cont, unsigned int type);

	void sendTo(Player* player, bool doClose);

	void repairItem(Player* player);

	void decay(int decayRate);

	bool isPersistent();

	bool isUpdated();

	bool isEquipped();

	bool isWeapon();

	bool isArmor();

	bool isClothing();

	bool isInstrument();

	bool isAttachment();

	bool isResource();

	bool isTicket();

	bool isTicketCollector();

	bool isSurveyTool();

	bool isLair();

	void setName(const string& n);

	void setTemplateName(const string& tempName);

	void setTemplateTypeName(const string& tempTypeName);

	void setPersistent(bool pers);

	void setUpdated(bool upd);

	void setConditionDamage(int damage);

	void setCustomizationString(string& cust);

	void setCustomizationVariable(unsigned char type, unsigned int value);

	SceneObject* getContainer();

	unicode& getName();

	string& getTemplateName();

	string& getTemplateTypeName();

	void getCustomizationString(string& appearance);

	int getObjectSubType();

	unsigned int getTemplateID();

	int getObjectCount();

	int getConditionDamage();

	int getMaxCondition();

	int getCondition();

	void setAttributes(string& attributestring);

	string& getAttributes();

	void addAttributes(AttributeListMessage* alm);

protected:
	string _param0_setName__string_;
	string _param0_setTemplateName__string_;
	string _param0_setTemplateTypeName__string_;
	string _param0_setCustomizationString__string_;
	string _param0_getCustomizationString__string_;
	string _param0_setAttributes__string_;
};

class TangibleObjectHelper : public DistributedObjectClassHelper, public Singleton<TangibleObjectHelper> {
public:
	TangibleObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectServant* obj);

	friend class SingletonWrapper<TangibleObjectHelper>;
};

#include "../scene/SceneObjectImplementation.h"

class TangibleObjectServant : public SceneObjectImplementation {
public:
	TangibleObject* _this;

public:
	TangibleObjectServant();
	TangibleObjectServant(unsigned long long oid);
	virtual ~TangibleObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*TANGIBLEOBJECT_H_*/
