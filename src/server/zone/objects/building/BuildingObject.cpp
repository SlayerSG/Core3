/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/zone/objects/building/BuildingObject.cpp generated by Engine3 IDL compiler 0.51
 */

#include "cell/CellObject.h"

#include "../scene/SceneObject.h"

#include "../player/Player.h"

#include "../creature/CreatureObject.h"

#include "../../Zone.h"

#include "BuildingObject.h"

#include "BuildingObjectImplementation.h"

/*
 *	BuildingObjectStub
 */

BuildingObject::BuildingObject() : SceneObject(NULL) {
}

BuildingObject::BuildingObject(ORBObjectServant* obj) : SceneObject(obj) {
}

BuildingObject::BuildingObject(BuildingObject& ref) : SceneObject(ref) {
}

BuildingObject::~BuildingObject() {
}

BuildingObject* BuildingObject::clone() {
	return new BuildingObject(*this);
}


void BuildingObject::addCell(CellObject* cell) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addObjectParameter(cell);

		invocation.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->addCell(cell);
}

void BuildingObject::insertToZone(Zone* zone) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);
		invocation.addObjectParameter(zone);

		invocation.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->insertToZone(zone);
}

void BuildingObject::removeFromZone() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);

		invocation.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->removeFromZone();
}

void BuildingObject::notifyInsertToZone(CreatureObject* creature) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);
		invocation.addObjectParameter(creature);

		invocation.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->notifyInsertToZone(creature);
}

bool BuildingObject::isStatic() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);

		return invocation.executeWithBooleanReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->isStatic();
}

void BuildingObject::lock(bool doLock) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);
		invocation.addBooleanParameter(doLock);

		invocation.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->lock(doLock);
}

void BuildingObject::unlock(bool doLock) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);
		invocation.addBooleanParameter(doLock);

		invocation.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->unlock(doLock);
}

void BuildingObject::setSize(float minx, float miny, float maxx, float maxy) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);
		invocation.addFloatParameter(minx);
		invocation.addFloatParameter(miny);
		invocation.addFloatParameter(maxx);
		invocation.addFloatParameter(maxy);

		invocation.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->setSize(minx, miny, maxx, maxy);
}

void BuildingObject::insert(QuadTreeEntry* obj) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 14);
		invocation.addObjectParameter(obj);

		invocation.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->insert(obj);
}

void BuildingObject::remove(QuadTreeEntry* obj) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 15);
		invocation.addObjectParameter(obj);

		invocation.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->remove(obj);
}

void BuildingObject::removeAll() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 16);

		invocation.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->removeAll();
}

bool BuildingObject::update(QuadTreeEntry* obj) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 17);
		invocation.addObjectParameter(obj);

		return invocation.executeWithBooleanReturn();
	} else
		return ((BuildingObjectImplementation*) _impl)->update(obj);
}

void BuildingObject::inRange(QuadTreeEntry* obj, float range) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 18);
		invocation.addObjectParameter(obj);
		invocation.addFloatParameter(range);

		invocation.executeWithVoidReturn();
	} else
		((BuildingObjectImplementation*) _impl)->inRange(obj, range);
}

/*
 *	BuildingObjectAdapter
 */

BuildingObjectAdapter::BuildingObjectAdapter(BuildingObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* BuildingObjectAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		addCell((CellObject*) inv->getObjectParameter());
		break;
	case 7:
		insertToZone((Zone*) inv->getObjectParameter());
		break;
	case 8:
		removeFromZone();
		break;
	case 9:
		notifyInsertToZone((CreatureObject*) inv->getObjectParameter());
		break;
	case 10:
		resp->insertBoolean(isStatic());
		break;
	case 11:
		lock(inv->getBooleanParameter());
		break;
	case 12:
		unlock(inv->getBooleanParameter());
		break;
	case 13:
		setSize(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		break;
	case 14:
		insert((QuadTreeEntry*) inv->getObjectParameter());
		break;
	case 15:
		remove((QuadTreeEntry*) inv->getObjectParameter());
		break;
	case 16:
		removeAll();
		break;
	case 17:
		resp->insertBoolean(update((QuadTreeEntry*) inv->getObjectParameter()));
		break;
	case 18:
		inRange((QuadTreeEntry*) inv->getObjectParameter(), inv->getFloatParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void BuildingObjectAdapter::addCell(CellObject* cell) {
	return ((BuildingObjectImplementation*) impl)->addCell(cell);
}

void BuildingObjectAdapter::insertToZone(Zone* zone) {
	return ((BuildingObjectImplementation*) impl)->insertToZone(zone);
}

void BuildingObjectAdapter::removeFromZone() {
	return ((BuildingObjectImplementation*) impl)->removeFromZone();
}

void BuildingObjectAdapter::notifyInsertToZone(CreatureObject* creature) {
	return ((BuildingObjectImplementation*) impl)->notifyInsertToZone(creature);
}

bool BuildingObjectAdapter::isStatic() {
	return ((BuildingObjectImplementation*) impl)->isStatic();
}

void BuildingObjectAdapter::lock(bool doLock) {
	return ((BuildingObjectImplementation*) impl)->lock(doLock);
}

void BuildingObjectAdapter::unlock(bool doLock) {
	return ((BuildingObjectImplementation*) impl)->unlock(doLock);
}

void BuildingObjectAdapter::setSize(float minx, float miny, float maxx, float maxy) {
	return ((BuildingObjectImplementation*) impl)->setSize(minx, miny, maxx, maxy);
}

void BuildingObjectAdapter::insert(QuadTreeEntry* obj) {
	return ((BuildingObjectImplementation*) impl)->insert(obj);
}

void BuildingObjectAdapter::remove(QuadTreeEntry* obj) {
	return ((BuildingObjectImplementation*) impl)->remove(obj);
}

void BuildingObjectAdapter::removeAll() {
	return ((BuildingObjectImplementation*) impl)->removeAll();
}

bool BuildingObjectAdapter::update(QuadTreeEntry* obj) {
	return ((BuildingObjectImplementation*) impl)->update(obj);
}

void BuildingObjectAdapter::inRange(QuadTreeEntry* obj, float range) {
	return ((BuildingObjectImplementation*) impl)->inRange(obj, range);
}

/*
 *	BuildingObjectHelper
 */

BuildingObjectHelper::BuildingObjectHelper() {
	className = "BuildingObject";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

void BuildingObjectHelper::finalizeHelper() {
	BuildingObjectHelper::finalize();
}

ORBObject* BuildingObjectHelper::instantiateObject() {
	return new BuildingObject();
}

ORBObjectAdapter* BuildingObjectHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new BuildingObjectAdapter((BuildingObjectImplementation*) obj);

	ORBObjectStub* stub = new BuildingObject(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	BuildingObjectServant
 */

BuildingObjectServant::BuildingObjectServant(unsigned long long oid) : SceneObjectImplementation(oid) {
	_classHelper = BuildingObjectHelper::instance();
}

BuildingObjectServant::~BuildingObjectServant() {
}

void BuildingObjectServant::_setStub(ORBObjectStub* stub) {
	_this = (BuildingObject*) stub;
	SceneObjectServant::_setStub(stub);
}

ORBObjectStub* BuildingObjectServant::_getStub() {
	return _this;
}

