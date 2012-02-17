/*
 *	server/zone/objects/creature/Creature.cpp generated by engine3 IDL compiler 0.60
 */

#include "Creature.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/group/GroupObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/templates/mobile/CreatureTemplate.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	CreatureStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_ISCREATURE__,RPC_ISCAMOUFLAGED__CREATUREOBJECT_,RPC_RUNAWAY__CREATUREOBJECT_,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_FILLATTRIBUTELIST__ATTRIBUTELISTMESSAGE_CREATUREOBJECT_,RPC_SCHEDULEDESPAWN__,RPC_HASORGANICS__,RPC_CANHARVESTME__CREATUREOBJECT_,RPC_ISBABY__,RPC_GETTAME__,RPC_GETMEATTYPE__,RPC_GETBONETYPE__,RPC_GETHIDETYPE__,RPC_GETMILK__,RPC_GETHIDEMAX__,RPC_GETBONEMAX__,RPC_GETMEATMAX__};

Creature::Creature() : AiAgent(DummyConstructorParameter::instance()) {
	CreatureImplementation* _implementation = new CreatureImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

Creature::Creature(DummyConstructorParameter* param) : AiAgent(param) {
}

Creature::~Creature() {
}



void Creature::initializeTransientMembers() {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

bool Creature::isCreature() {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCREATURE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCreature();
}

bool Creature::isCamouflaged(CreatureObject* target) {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCAMOUFLAGED__CREATUREOBJECT_);
		method.addObjectParameter(target);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCamouflaged(target);
}

void Creature::runAway(CreatureObject* target) {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_RUNAWAY__CREATUREOBJECT_);
		method.addObjectParameter(target);

		method.executeWithVoidReturn();
	} else
		_implementation->runAway(target);
}

void Creature::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int Creature::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void Creature::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_FILLATTRIBUTELIST__ATTRIBUTELISTMESSAGE_CREATUREOBJECT_);
		method.addObjectParameter(msg);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->fillAttributeList(msg, object);
}

void Creature::scheduleDespawn() {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SCHEDULEDESPAWN__);

		method.executeWithVoidReturn();
	} else
		_implementation->scheduleDespawn();
}

bool Creature::hasOrganics() {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HASORGANICS__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasOrganics();
}

bool Creature::canHarvestMe(CreatureObject* player) {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANHARVESTME__CREATUREOBJECT_);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->canHarvestMe(player);
}

bool Creature::isBaby() {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISBABY__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isBaby();
}

float Creature::getTame() {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTAME__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getTame();
}

String Creature::getMeatType() {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMEATTYPE__);

		method.executeWithAsciiReturn(_return_getMeatType);
		return _return_getMeatType;
	} else
		return _implementation->getMeatType();
}

String Creature::getBoneType() {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBONETYPE__);

		method.executeWithAsciiReturn(_return_getBoneType);
		return _return_getBoneType;
	} else
		return _implementation->getBoneType();
}

String Creature::getHideType() {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETHIDETYPE__);

		method.executeWithAsciiReturn(_return_getHideType);
		return _return_getHideType;
	} else
		return _implementation->getHideType();
}

float Creature::getMilk() {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMILK__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getMilk();
}

float Creature::getHideMax() {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETHIDEMAX__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getHideMax();
}

float Creature::getBoneMax() {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETBONEMAX__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getBoneMax();
}

float Creature::getMeatMax() {
	CreatureImplementation* _implementation = static_cast<CreatureImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMEATMAX__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getMeatMax();
}

DistributedObjectServant* Creature::_getImplementation() {

	_updated = true;
	return _impl;
}

void Creature::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CreatureImplementation
 */

CreatureImplementation::CreatureImplementation(DummyConstructorParameter* param) : AiAgentImplementation(param) {
	_initializeImplementation();
}


CreatureImplementation::~CreatureImplementation() {
}


void CreatureImplementation::finalize() {
}

void CreatureImplementation::_initializeImplementation() {
	_setClassHelper(CreatureHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CreatureImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<Creature*>(stub);
	AiAgentImplementation::_setStub(stub);
}

DistributedObjectStub* CreatureImplementation::_getStub() {
	return _this;
}

CreatureImplementation::operator const Creature*() {
	return _this;
}

void CreatureImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CreatureImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CreatureImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CreatureImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CreatureImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CreatureImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CreatureImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CreatureImplementation::_serializationHelperMethod() {
	AiAgentImplementation::_serializationHelperMethod();

	_setClassName("Creature");

}

void CreatureImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(CreatureImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CreatureImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (AiAgentImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void CreatureImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CreatureImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CreatureImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + AiAgentImplementation::writeObjectMembers(stream);
}

CreatureImplementation::CreatureImplementation() {
	_initializeImplementation();
	// server/zone/objects/creature/Creature.idl():  		Logger.setLoggingName("Creature");
	Logger::setLoggingName("Creature");
	// server/zone/objects/creature/Creature.idl():  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/objects/creature/Creature.idl():  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/objects/creature/Creature.idl():  		alreadyHarvested = null;
	alreadyHarvested = NULL;
}

bool CreatureImplementation::isCreature() {
	// server/zone/objects/creature/Creature.idl():  		return true;
	return true;
}

bool CreatureImplementation::isCamouflaged(CreatureObject* target) {
	// server/zone/objects/creature/Creature.idl():  		return isScentMasked(target) || isConcealed(target);
	return isScentMasked(target) || isConcealed(target);
}

bool CreatureImplementation::isBaby() {
	// server/zone/objects/creature/Creature.idl():  		return super.baby;
	return AiAgentImplementation::baby;
}

float CreatureImplementation::getTame() {
	// server/zone/objects/creature/Creature.idl():  		return 
	if (AiAgentImplementation::npcTemplate == NULL)	// server/zone/objects/creature/Creature.idl():  			return 0;
	return 0;
	// server/zone/objects/creature/Creature.idl():  		return super.npcTemplate.getTame();
	return AiAgentImplementation::npcTemplate->getTame();
}

String CreatureImplementation::getMeatType() {
	// server/zone/objects/creature/Creature.idl():  		return 
	if (AiAgentImplementation::npcTemplate == NULL)	// server/zone/objects/creature/Creature.idl():  			return "";
	return "";
	// server/zone/objects/creature/Creature.idl():  		return super.npcTemplate.getMeatType();
	return AiAgentImplementation::npcTemplate->getMeatType();
}

String CreatureImplementation::getBoneType() {
	// server/zone/objects/creature/Creature.idl():  		return 
	if (AiAgentImplementation::npcTemplate == NULL)	// server/zone/objects/creature/Creature.idl():  			return "";
	return "";
	// server/zone/objects/creature/Creature.idl():  		return super.npcTemplate.getBoneType();
	return AiAgentImplementation::npcTemplate->getBoneType();
}

String CreatureImplementation::getHideType() {
	// server/zone/objects/creature/Creature.idl():  		return 
	if (AiAgentImplementation::npcTemplate == NULL)	// server/zone/objects/creature/Creature.idl():  			return "";
	return "";
	// server/zone/objects/creature/Creature.idl():  		return super.npcTemplate.getHideType();
	return AiAgentImplementation::npcTemplate->getHideType();
}

float CreatureImplementation::getMilk() {
	// server/zone/objects/creature/Creature.idl():  		return 
	if (AiAgentImplementation::npcTemplate == NULL)	// server/zone/objects/creature/Creature.idl():  			return 0;
	return 0;
	// server/zone/objects/creature/Creature.idl():  		return super.npcTemplate.getMilk();
	return AiAgentImplementation::npcTemplate->getMilk();
}

float CreatureImplementation::getHideMax() {
	// server/zone/objects/creature/Creature.idl():  		return 
	if (AiAgentImplementation::npcTemplate == NULL)	// server/zone/objects/creature/Creature.idl():  			return 0;
	return 0;
	// server/zone/objects/creature/Creature.idl():  		return super.npcTemplate.getHideMax();
	return AiAgentImplementation::npcTemplate->getHideMax();
}

float CreatureImplementation::getBoneMax() {
	// server/zone/objects/creature/Creature.idl():  		return 
	if (AiAgentImplementation::npcTemplate == NULL)	// server/zone/objects/creature/Creature.idl():  			return 0;
	return 0;
	// server/zone/objects/creature/Creature.idl():  		return super.npcTemplate.getBoneMax();
	return AiAgentImplementation::npcTemplate->getBoneMax();
}

float CreatureImplementation::getMeatMax() {
	// server/zone/objects/creature/Creature.idl():  		return 
	if (AiAgentImplementation::npcTemplate == NULL)	// server/zone/objects/creature/Creature.idl():  			return 0;
	return 0;
	// server/zone/objects/creature/Creature.idl():  		return super.npcTemplate.getMeatMax();
	return AiAgentImplementation::npcTemplate->getMeatMax();
}

/*
 *	CreatureAdapter
 */

CreatureAdapter::CreatureAdapter(Creature* obj) : AiAgentAdapter(obj) {
}

Packet* CreatureAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_ISCREATURE__:
		resp->insertBoolean(isCreature());
		break;
	case RPC_ISCAMOUFLAGED__CREATUREOBJECT_:
		resp->insertBoolean(isCamouflaged(static_cast<CreatureObject*>(inv->getObjectParameter())));
		break;
	case RPC_RUNAWAY__CREATUREOBJECT_:
		runAway(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect(static_cast<CreatureObject*>(inv->getObjectParameter()), inv->getByteParameter()));
		break;
	case RPC_FILLATTRIBUTELIST__ATTRIBUTELISTMESSAGE_CREATUREOBJECT_:
		fillAttributeList(static_cast<AttributeListMessage*>(inv->getObjectParameter()), static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_SCHEDULEDESPAWN__:
		scheduleDespawn();
		break;
	case RPC_HASORGANICS__:
		resp->insertBoolean(hasOrganics());
		break;
	case RPC_CANHARVESTME__CREATUREOBJECT_:
		resp->insertBoolean(canHarvestMe(static_cast<CreatureObject*>(inv->getObjectParameter())));
		break;
	case RPC_ISBABY__:
		resp->insertBoolean(isBaby());
		break;
	case RPC_GETTAME__:
		resp->insertFloat(getTame());
		break;
	case RPC_GETMEATTYPE__:
		resp->insertAscii(getMeatType());
		break;
	case RPC_GETBONETYPE__:
		resp->insertAscii(getBoneType());
		break;
	case RPC_GETHIDETYPE__:
		resp->insertAscii(getHideType());
		break;
	case RPC_GETMILK__:
		resp->insertFloat(getMilk());
		break;
	case RPC_GETHIDEMAX__:
		resp->insertFloat(getHideMax());
		break;
	case RPC_GETBONEMAX__:
		resp->insertFloat(getBoneMax());
		break;
	case RPC_GETMEATMAX__:
		resp->insertFloat(getMeatMax());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CreatureAdapter::initializeTransientMembers() {
	(static_cast<Creature*>(stub))->initializeTransientMembers();
}

bool CreatureAdapter::isCreature() {
	return (static_cast<Creature*>(stub))->isCreature();
}

bool CreatureAdapter::isCamouflaged(CreatureObject* target) {
	return (static_cast<Creature*>(stub))->isCamouflaged(target);
}

void CreatureAdapter::runAway(CreatureObject* target) {
	(static_cast<Creature*>(stub))->runAway(target);
}

int CreatureAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return (static_cast<Creature*>(stub))->handleObjectMenuSelect(player, selectedID);
}

void CreatureAdapter::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	(static_cast<Creature*>(stub))->fillAttributeList(msg, object);
}

void CreatureAdapter::scheduleDespawn() {
	(static_cast<Creature*>(stub))->scheduleDespawn();
}

bool CreatureAdapter::hasOrganics() {
	return (static_cast<Creature*>(stub))->hasOrganics();
}

bool CreatureAdapter::canHarvestMe(CreatureObject* player) {
	return (static_cast<Creature*>(stub))->canHarvestMe(player);
}

bool CreatureAdapter::isBaby() {
	return (static_cast<Creature*>(stub))->isBaby();
}

float CreatureAdapter::getTame() {
	return (static_cast<Creature*>(stub))->getTame();
}

String CreatureAdapter::getMeatType() {
	return (static_cast<Creature*>(stub))->getMeatType();
}

String CreatureAdapter::getBoneType() {
	return (static_cast<Creature*>(stub))->getBoneType();
}

String CreatureAdapter::getHideType() {
	return (static_cast<Creature*>(stub))->getHideType();
}

float CreatureAdapter::getMilk() {
	return (static_cast<Creature*>(stub))->getMilk();
}

float CreatureAdapter::getHideMax() {
	return (static_cast<Creature*>(stub))->getHideMax();
}

float CreatureAdapter::getBoneMax() {
	return (static_cast<Creature*>(stub))->getBoneMax();
}

float CreatureAdapter::getMeatMax() {
	return (static_cast<Creature*>(stub))->getMeatMax();
}

/*
 *	CreatureHelper
 */

CreatureHelper* CreatureHelper::staticInitializer = CreatureHelper::instance();

CreatureHelper::CreatureHelper() {
	className = "Creature";

	Core::getObjectBroker()->registerClass(className, this);
}

void CreatureHelper::finalizeHelper() {
	CreatureHelper::finalize();
}

DistributedObject* CreatureHelper::instantiateObject() {
	return new Creature(DummyConstructorParameter::instance());
}

DistributedObjectServant* CreatureHelper::instantiateServant() {
	return new CreatureImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CreatureHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CreatureAdapter(static_cast<Creature*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

