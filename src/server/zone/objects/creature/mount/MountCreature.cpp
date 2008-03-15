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
 *	server/zone/objects/creature/mount/MountCreature.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../Creature.h"

#include "../../player/Player.h"

#include "../../intangible/IntangibleObject.h"

#include "MountCreature.h"

#include "MountCreatureImplementation.h"

/*
 *	MountCreatureStub
 */

MountCreature::MountCreature() : Creature(NULL) {
}

MountCreature::MountCreature(ORBObjectServant* obj) : Creature(obj) {
}

MountCreature::MountCreature(MountCreature& ref) : Creature(ref) {
}

MountCreature::~MountCreature() {
}

MountCreature* MountCreature::clone() {
	return new MountCreature(*this);
}


void MountCreature::setMountType(int type) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addSignedIntParameter(type);

		invocation.executeWithVoidReturn();
	} else
		((MountCreatureImplementation*) _impl)->setMountType(type);
}

int MountCreature::getMountType() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 7);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((MountCreatureImplementation*) _impl)->getMountType();
}

bool MountCreature::isVehicle() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 8);

		return invocation.executeWithBooleanReturn();
	} else
		return ((MountCreatureImplementation*) _impl)->isVehicle();
}

bool MountCreature::isPet() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 9);

		return invocation.executeWithBooleanReturn();
	} else
		return ((MountCreatureImplementation*) _impl)->isPet();
}

bool MountCreature::isDisabled() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 10);

		return invocation.executeWithBooleanReturn();
	} else
		return ((MountCreatureImplementation*) _impl)->isDisabled();
}

CreatureObject* MountCreature::getLinkedCreature() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 11);

		return (CreatureObject*) invocation.executeWithObjectReturn();
	} else
		return ((MountCreatureImplementation*) _impl)->getLinkedCreature();
}

IntangibleObject* MountCreature::getITNO() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 12);

		return (IntangibleObject*) invocation.executeWithObjectReturn();
	} else
		return ((MountCreatureImplementation*) _impl)->getITNO();
}

void MountCreature::call() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 13);

		invocation.executeWithVoidReturn();
	} else
		((MountCreatureImplementation*) _impl)->call();
}

void MountCreature::store(bool doLock) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 14);
		invocation.addBooleanParameter(doLock);

		invocation.executeWithVoidReturn();
	} else
		((MountCreatureImplementation*) _impl)->store(doLock);
}

int MountCreature::useObject(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 15);
		invocation.addObjectParameter(player);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((MountCreatureImplementation*) _impl)->useObject(player);
}

void MountCreature::addToDatapad() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 16);

		invocation.executeWithVoidReturn();
	} else
		((MountCreatureImplementation*) _impl)->addToDatapad();
}

void MountCreature::setInstantMount(bool val) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 17);
		invocation.addBooleanParameter(val);

		invocation.executeWithVoidReturn();
	} else
		((MountCreatureImplementation*) _impl)->setInstantMount(val);
}

bool MountCreature::isInWorld() {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 18);

		return invocation.executeWithBooleanReturn();
	} else
		return ((MountCreatureImplementation*) _impl)->isInWorld();
}

/*
 *	MountCreatureAdapter
 */

MountCreatureAdapter::MountCreatureAdapter(MountCreatureImplementation* obj) : CreatureAdapter(obj) {
}

Packet* MountCreatureAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		setMountType(inv->getSignedIntParameter());
		break;
	case 7:
		resp->insertSignedInt(getMountType());
		break;
	case 8:
		resp->insertBoolean(isVehicle());
		break;
	case 9:
		resp->insertBoolean(isPet());
		break;
	case 10:
		resp->insertBoolean(isDisabled());
		break;
	case 11:
		resp->insertLong(getLinkedCreature()->_getORBObjectID());
		break;
	case 12:
		resp->insertLong(getITNO()->_getORBObjectID());
		break;
	case 13:
		call();
		break;
	case 14:
		store(inv->getBooleanParameter());
		break;
	case 15:
		resp->insertSignedInt(useObject((Player*) inv->getObjectParameter()));
		break;
	case 16:
		addToDatapad();
		break;
	case 17:
		setInstantMount(inv->getBooleanParameter());
		break;
	case 18:
		resp->insertBoolean(isInWorld());
		break;
	default:
		return NULL;
	}

	return resp;
}

void MountCreatureAdapter::setMountType(int type) {
	return ((MountCreatureImplementation*) impl)->setMountType(type);
}

int MountCreatureAdapter::getMountType() {
	return ((MountCreatureImplementation*) impl)->getMountType();
}

bool MountCreatureAdapter::isVehicle() {
	return ((MountCreatureImplementation*) impl)->isVehicle();
}

bool MountCreatureAdapter::isPet() {
	return ((MountCreatureImplementation*) impl)->isPet();
}

bool MountCreatureAdapter::isDisabled() {
	return ((MountCreatureImplementation*) impl)->isDisabled();
}

CreatureObject* MountCreatureAdapter::getLinkedCreature() {
	return ((MountCreatureImplementation*) impl)->getLinkedCreature();
}

IntangibleObject* MountCreatureAdapter::getITNO() {
	return ((MountCreatureImplementation*) impl)->getITNO();
}

void MountCreatureAdapter::call() {
	return ((MountCreatureImplementation*) impl)->call();
}

void MountCreatureAdapter::store(bool doLock) {
	return ((MountCreatureImplementation*) impl)->store(doLock);
}

int MountCreatureAdapter::useObject(Player* player) {
	return ((MountCreatureImplementation*) impl)->useObject(player);
}

void MountCreatureAdapter::addToDatapad() {
	return ((MountCreatureImplementation*) impl)->addToDatapad();
}

void MountCreatureAdapter::setInstantMount(bool val) {
	return ((MountCreatureImplementation*) impl)->setInstantMount(val);
}

bool MountCreatureAdapter::isInWorld() {
	return ((MountCreatureImplementation*) impl)->isInWorld();
}

/*
 *	MountCreatureHelper
 */

MountCreatureHelper::MountCreatureHelper() {
	className = "MountCreature";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

void MountCreatureHelper::finalizeHelper() {
	MountCreatureHelper::finalize();
}

ORBObject* MountCreatureHelper::instantiateObject() {
	return new MountCreature();
}

ORBObjectAdapter* MountCreatureHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new MountCreatureAdapter((MountCreatureImplementation*) obj);

	ORBObjectStub* stub = new MountCreature(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	MountCreatureServant
 */

MountCreatureServant::MountCreatureServant(unsigned long long oid) : CreatureImplementation(oid) {
	_classHelper = MountCreatureHelper::instance();
}

MountCreatureServant::~MountCreatureServant() {
}

void MountCreatureServant::_setStub(ORBObjectStub* stub) {
	_this = (MountCreature*) stub;
	CreatureServant::_setStub(stub);
}

ORBObjectStub* MountCreatureServant::_getStub() {
	return _this;
}

