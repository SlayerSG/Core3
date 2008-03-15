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
 *	server/zone/objects/tangible/weapons/ranged/HeavyRangedWeapon.cpp generated by Engine3 IDL compiler 0.51
 */

#include "../../../creature/CreatureObject.h"

#include "../../../player/Player.h"

#include "../RangedWeapon.h"

#include "HeavyRangedWeapon.h"

#include "HeavyRangedWeaponImplementation.h"

/*
 *	HeavyRangedWeaponStub
 */

HeavyRangedWeapon::HeavyRangedWeapon() : RangedWeapon(NULL) {
}

HeavyRangedWeapon::HeavyRangedWeapon(ORBObjectServant* obj) : RangedWeapon(obj) {
}

HeavyRangedWeapon::HeavyRangedWeapon(HeavyRangedWeapon& ref) : RangedWeapon(ref) {
}

HeavyRangedWeapon::~HeavyRangedWeapon() {
}

HeavyRangedWeapon* HeavyRangedWeapon::clone() {
	return new HeavyRangedWeapon(*this);
}


int HeavyRangedWeapon::useObject(Player* player) {
	if (!deployed)
		throw ObjectNotDeployedException(this);

	if (_impl == NULL) {
		ORBMethodInvocation invocation(this, 6);
		invocation.addObjectParameter(player);

		return invocation.executeWithSignedIntReturn();
	} else
		return ((HeavyRangedWeaponImplementation*) _impl)->useObject(player);
}

/*
 *	HeavyRangedWeaponAdapter
 */

HeavyRangedWeaponAdapter::HeavyRangedWeaponAdapter(HeavyRangedWeaponImplementation* obj) : RangedWeaponAdapter(obj) {
}

Packet* HeavyRangedWeaponAdapter::invokeMethod(uint32 methid, ORBMethodInvocation* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertSignedInt(useObject((Player*) inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

int HeavyRangedWeaponAdapter::useObject(Player* player) {
	return ((HeavyRangedWeaponImplementation*) impl)->useObject(player);
}

/*
 *	HeavyRangedWeaponHelper
 */

HeavyRangedWeaponHelper::HeavyRangedWeaponHelper() {
	className = "HeavyRangedWeapon";

	ObjectRequestBroker::instance()->registerClass(className, this);
}

void HeavyRangedWeaponHelper::finalizeHelper() {
	HeavyRangedWeaponHelper::finalize();
}

ORBObject* HeavyRangedWeaponHelper::instantiateObject() {
	return new HeavyRangedWeapon();
}

ORBObjectAdapter* HeavyRangedWeaponHelper::createAdapter(ORBObjectServant* obj) {
	ORBObjectAdapter* adapter = new HeavyRangedWeaponAdapter((HeavyRangedWeaponImplementation*) obj);

	ORBObjectStub* stub = new HeavyRangedWeapon(obj);
	stub->_setORBClassName(className);
	stub->_setClassHelper(this);

	adapter->setStub(stub);

	obj->_setStub(stub);

	return adapter;
}

/*
 *	HeavyRangedWeaponServant
 */

HeavyRangedWeaponServant::HeavyRangedWeaponServant(unsigned long long objid, unsigned int tempcrc, const unicode& n, const string& tempn, int tp, bool eqp) : RangedWeaponImplementation(objid, tempcrc, n, tempn, tp, eqp) {
	_classHelper = HeavyRangedWeaponHelper::instance();
}

HeavyRangedWeaponServant::HeavyRangedWeaponServant(CreatureObject* creature, const string& temp, const unicode& n, const string& tempn, int tp, bool eqp) : RangedWeaponImplementation(creature, temp, n, tempn, tp, eqp) {
	_classHelper = HeavyRangedWeaponHelper::instance();
}

HeavyRangedWeaponServant::~HeavyRangedWeaponServant() {
}

void HeavyRangedWeaponServant::_setStub(ORBObjectStub* stub) {
	_this = (HeavyRangedWeapon*) stub;
	RangedWeaponServant::_setStub(stub);
}

ORBObjectStub* HeavyRangedWeaponServant::_getStub() {
	return _this;
}

