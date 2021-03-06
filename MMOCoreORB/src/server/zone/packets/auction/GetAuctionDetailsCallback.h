/*
 * GetAuctionDetailsCallback.h
 *
 *  Created on: 13/03/2010
 *      Author: victor
 */

#ifndef GETAUCTIONDETAILSCALLBACK
#define GETAUCTIONDETAILSCALLBACK

#include "server/zone/packets/MessageCallback.h"
#include "server/zone/managers/auction/AuctionManager.h"


class GetAuctionDetailsCallback : public MessageCallback {
	uint64 objectid;

public:
	GetAuctionDetailsCallback(ZoneClientSession* client, ZoneProcessServer* server) :
			MessageCallback(client, server), objectid(0) {

	}

	void parse(Message* message) {
		objectid = message->parseLong();
	}

	void run() {
		ManagedReference<CreatureObject*> player = client->getPlayer();

		if (player == nullptr)
			return;

		AuctionManager* auctionManager = server->getZoneServer()->getAuctionManager();

		if (auctionManager != nullptr)
			auctionManager->getItemAttributes(player, objectid);
	}

};

#endif
