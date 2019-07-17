// Copyright (c) 2012-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2017 The PIVX developers
// Copyright (c) 2019 The Protcoin Developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

/**
 * network protocol versioning
 */

//! Current Protocol Version
static const int PROTOCOL_VERSION = 70900;

//! initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 200;

//! In this version, 'getheaders' was introduced.
static const int GETHEADERS_VERSION = 70077;

//! disconnect from peers older than this proto version
static const int MIN_PEER_PROTO_VERSION_BEFORE_ENFORCEMENT_1 = 70900;
static const int MIN_PEER_PROTO_VERSION_BEFORE_ENFORCEMENT_2 = 70910;
static const int MIN_PEER_PROTO_VERSION_BEFORE_ENFORCEMENT_3 = 70920;
static const int MIN_PEER_PROTO_VERSION_BEFORE_ENFORCEMENT_4 = 70930;
static const int MIN_PEER_PROTO_VERSION_BEFORE_ENFORCEMENT_5 = 70940;

static const int MIN_PEER_PROTO_VERSION_AFTER_ENFORCEMENT_5  = 70950;

//! nTime field added to CAddress, starting with this version;
//! if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

//! BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

//! "mempool" command, enhanced "getdata" behavior starts with this version
static const int MEMPOOL_GD_VERSION = 60002;

//! "filter*" commands are disabled without NODE_BLOOM after and including this version
static const int NO_BLOOM_VERSION = 70005;


#endif // BITCOIN_VERSION_H
