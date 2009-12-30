/*
 *	server/zone/objects/group/GroupObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "GroupObject.h"

#include "server/chat/room/ChatRoom.h"

/*
 *	GroupObjectStub
 */

GroupObject::GroupObject(LuaObject* templateData) : SceneObject(DummyConstructorParameter::instance()) {
	_impl = new GroupObjectImplementation(templateData);
	_impl->_setStub(this);
}

GroupObject::GroupObject(DummyConstructorParameter* param) : SceneObject(param) {
}

GroupObject::~GroupObject() {
}


void GroupObject::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->sendBaselinesTo(player);
}

void GroupObject::broadcastMessage(BaseMessage* msg) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(msg);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->broadcastMessage(msg);
}

void GroupObject::addMember(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->addMember(player);
}

void GroupObject::removeMember(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->removeMember(player);
}

void GroupObject::disband() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->disband();
}

void GroupObject::makeLeader(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->makeLeader(player);
}

bool GroupObject::hasMember(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->hasMember(player);
}

void GroupObject::startChatRoom() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->startChatRoom();
}

void GroupObject::destroyChatRoom() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->destroyChatRoom();
}

int GroupObject::getGroupLevel() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithSignedIntReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getGroupLevel();
}

ChatRoom* GroupObject::getGroupChannel() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return (ChatRoom*) method.executeWithObjectReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getGroupChannel();
}

int GroupObject::getGroupSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithSignedIntReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getGroupSize();
}

SceneObject* GroupObject::getGroupMember(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addSignedIntParameter(index);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getGroupMember(index);
}

void GroupObject::initializeLeader(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->initializeLeader(player);
}

SceneObject* GroupObject::getLeader() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getLeader();
}

GroupList* GroupObject::getGroupList() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((GroupObjectImplementation*) _impl)->getGroupList();
}

/*
 *	GroupObjectImplementation
 */

GroupObjectImplementation::GroupObjectImplementation(DummyConstructorParameter* param) : SceneObjectImplementation(param) {
	_initializeImplementation();
}

GroupObjectImplementation::~GroupObjectImplementation() {
	GroupObjectImplementation::finalize();
}


void GroupObjectImplementation::finalize() {
}

void GroupObjectImplementation::_initializeImplementation() {
	_setClassHelper(GroupObjectHelper::instance());

	_serializationHelperMethod();
}

void GroupObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (GroupObject*) stub;
	SceneObjectImplementation::_setStub(stub);
}

DistributedObjectStub* GroupObjectImplementation::_getStub() {
	return _this;
}

GroupObjectImplementation::operator const GroupObject*() {
	return _this;
}

void GroupObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void GroupObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void GroupObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void GroupObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void GroupObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void GroupObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void GroupObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void GroupObjectImplementation::_serializationHelperMethod() {
	SceneObjectImplementation::_serializationHelperMethod();

	_setClassName("GroupObject");

	addSerializableVariable("groupMembers", &groupMembers);
	addSerializableVariable("chatRoom", &chatRoom);
	addSerializableVariable("groupLevel", &groupLevel);
}

GroupObjectImplementation::GroupObjectImplementation(LuaObject* templateData) : SceneObjectImplementation((templateData)) {
	_initializeImplementation();
	// server/zone/objects/group/GroupObject.idl(67):  groupLevel = 0;
	groupLevel = 0;
	// server/zone/objects/group/GroupObject.idl(69):  Logger.setLoggingName("GroupObject");
	Logger::setLoggingName("GroupObject");
	// server/zone/objects/group/GroupObject.idl(71):  chatRoom = null;
	chatRoom = NULL;
}

int GroupObjectImplementation::getGroupLevel() {
	// server/zone/objects/group/GroupObject.idl(100):  return groupLevel;
	return groupLevel;
}

ChatRoom* GroupObjectImplementation::getGroupChannel() {
	// server/zone/objects/group/GroupObject.idl(104):  return chatRoom;
	return chatRoom;
}

int GroupObjectImplementation::getGroupSize() {
	// server/zone/objects/group/GroupObject.idl(108):  return groupMembers.size();
	return (&groupMembers)->size();
}

SceneObject* GroupObjectImplementation::getGroupMember(int index) {
	// server/zone/objects/group/GroupObject.idl(112):  return groupMembers.get(index);
	return (&groupMembers)->get(index);
}

void GroupObjectImplementation::initializeLeader(SceneObject* player) {
	// server/zone/objects/group/GroupObject.idl(116):  groupMembers.add(player);
	(&groupMembers)->add(player);
}

SceneObject* GroupObjectImplementation::getLeader() {
	// server/zone/objects/group/GroupObject.idl(120):  return groupMembers.get(0);
	return (&groupMembers)->get(0);
}

GroupList* GroupObjectImplementation::getGroupList() {
	// server/zone/objects/group/GroupObject.idl(126):  return groupMembers;
	return (&groupMembers);
}

/*
 *	GroupObjectAdapter
 */

GroupObjectAdapter::GroupObjectAdapter(GroupObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* GroupObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 7:
		broadcastMessage((BaseMessage*) inv->getObjectParameter());
		break;
	case 8:
		addMember((SceneObject*) inv->getObjectParameter());
		break;
	case 9:
		removeMember((SceneObject*) inv->getObjectParameter());
		break;
	case 10:
		disband();
		break;
	case 11:
		makeLeader((SceneObject*) inv->getObjectParameter());
		break;
	case 12:
		resp->insertBoolean(hasMember((SceneObject*) inv->getObjectParameter()));
		break;
	case 13:
		startChatRoom();
		break;
	case 14:
		destroyChatRoom();
		break;
	case 15:
		resp->insertSignedInt(getGroupLevel());
		break;
	case 16:
		resp->insertLong(getGroupChannel()->_getObjectID());
		break;
	case 17:
		resp->insertSignedInt(getGroupSize());
		break;
	case 18:
		resp->insertLong(getGroupMember(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 19:
		initializeLeader((SceneObject*) inv->getObjectParameter());
		break;
	case 20:
		resp->insertLong(getLeader()->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void GroupObjectAdapter::sendBaselinesTo(SceneObject* player) {
	((GroupObjectImplementation*) impl)->sendBaselinesTo(player);
}

void GroupObjectAdapter::broadcastMessage(BaseMessage* msg) {
	((GroupObjectImplementation*) impl)->broadcastMessage(msg);
}

void GroupObjectAdapter::addMember(SceneObject* player) {
	((GroupObjectImplementation*) impl)->addMember(player);
}

void GroupObjectAdapter::removeMember(SceneObject* player) {
	((GroupObjectImplementation*) impl)->removeMember(player);
}

void GroupObjectAdapter::disband() {
	((GroupObjectImplementation*) impl)->disband();
}

void GroupObjectAdapter::makeLeader(SceneObject* player) {
	((GroupObjectImplementation*) impl)->makeLeader(player);
}

bool GroupObjectAdapter::hasMember(SceneObject* player) {
	return ((GroupObjectImplementation*) impl)->hasMember(player);
}

void GroupObjectAdapter::startChatRoom() {
	((GroupObjectImplementation*) impl)->startChatRoom();
}

void GroupObjectAdapter::destroyChatRoom() {
	((GroupObjectImplementation*) impl)->destroyChatRoom();
}

int GroupObjectAdapter::getGroupLevel() {
	return ((GroupObjectImplementation*) impl)->getGroupLevel();
}

ChatRoom* GroupObjectAdapter::getGroupChannel() {
	return ((GroupObjectImplementation*) impl)->getGroupChannel();
}

int GroupObjectAdapter::getGroupSize() {
	return ((GroupObjectImplementation*) impl)->getGroupSize();
}

SceneObject* GroupObjectAdapter::getGroupMember(int index) {
	return ((GroupObjectImplementation*) impl)->getGroupMember(index);
}

void GroupObjectAdapter::initializeLeader(SceneObject* player) {
	((GroupObjectImplementation*) impl)->initializeLeader(player);
}

SceneObject* GroupObjectAdapter::getLeader() {
	return ((GroupObjectImplementation*) impl)->getLeader();
}

/*
 *	GroupObjectHelper
 */

GroupObjectHelper* GroupObjectHelper::staticInitializer = GroupObjectHelper::instance();

GroupObjectHelper::GroupObjectHelper() {
	className = "GroupObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void GroupObjectHelper::finalizeHelper() {
	GroupObjectHelper::finalize();
}

DistributedObject* GroupObjectHelper::instantiateObject() {
	return new GroupObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* GroupObjectHelper::instantiateServant() {
	return new GroupObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* GroupObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new GroupObjectAdapter((GroupObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

