/*
 *  caosVM_net.cpp
 *  openc2e
 *
 *  Created by Alyssa Milburn on Mon Aug 29 2005.
 *  Copyright (c) 2005 Alyssa Milburn. All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 */

#include "caosVM.h"

/**
 NET: PASS (command) nick_name (string) password (string) 
 %status stub

 Networking is not supported in openc2e, so does nothing.
*/
void caosVM::c_NET_PASS() {
	VM_PARAM_STRING(password)
	VM_PARAM_STRING(nick_name)
}

/**
 NET: PASS (string)
 %status stub

 Networking is not supported in openc2e, so always returns "nobody".
*/
void caosVM::v_NET_PASS() {
	result.setString("nobody");
}

/**
 NET: LINE (command) connect (integer)
 %status stub

 Networking is not supported in openc2e, so does nothing.
*/
void caosVM::c_NET_LINE() {
	VM_PARAM_INTEGER(connect)
}

/**
 NET: LINE (integer)
 %status stub

 Networking is not supported in openc2e, so always returns 1.
*/
void caosVM::v_NET_LINE() {
	result.setInt(1);
}

/**
 NET: ERRA (integer)
 %status stub

 Networking is not supported in openc2e, so always returns 0.
*/
void caosVM::v_NET_ERRA() {
	result.setInt(0);
}

/**
 NET: ULIN (integer) username (string)
 %status stub

 Networking is not supported in openc2e, so always returns 0.
*/
void caosVM::v_NET_ULIN() {
	result.setInt(0);
}

/**
 NET: WHOZ (command)
 %status stub

 Networking is not supported in openc2e, so does nothing.
*/
void caosVM::c_NET_WHOZ() {
}

/**
 NET: WHON (command) username (string)
 %status stub

 Networking is not supported in openc2e, so does nothing.
*/
void caosVM::c_NET_WHON() {
	VM_PARAM_STRING(username)
}

/**
 NET: USER (string)
 %status stub

 Networking is not supported in openc2e, so returns an empty string.
*/
void caosVM::v_NET_USER() {
	result.setString("");
}

/**
 NET: FROM (string) resource_name (string)
 %status stub
 
 Networking is not supported in openc2e, so returns an empty string.
*/
void caosVM::v_NET_FROM() {
	VM_PARAM_STRING(resource_name)
	result.setString("");
}

/**
 NET: EXPO (integer) chunk_type (string) dest_user (string)
 %status stub

 Networking is not supported in openc2e, so always returns 0.
*/
void caosVM::v_NET_EXPO() {
	VM_PARAM_STRING(dest_user)
	VM_PARAM_STRING(chunk_type)
	result.setInt(0);
}

/**
 NET: RUSO (command) result (variable)
 %status stub

 Networking is not supported in openc2e, so sets result to an empty string.
*/
void caosVM::c_NET_RUSO() {
	VM_PARAM_VARIABLE(result)

	result->setString("");
}

/**
 NET: HEAD (command)
 %status stub

 Networking is not supported in openc2e, so does nothing.
*/
void caosVM::c_NET_HEAD() {
}

/**
 NET: HEAR (command) channel (string)
 %status stub

 Networking is not supported in openc2e, so does nothing.
*/
void caosVM::c_NET_HEAR() {
	VM_PARAM_STRING(channel)
}

/**
 NET: HOST (string)
 %status stub

 Networking is not supported in openc2e, so returns an empty string.
*/
void caosVM::v_NET_HOST() {
	result.setString("");
}

/**
 NET: RAWE (integer)
 %status stub

 Networking is not supported in openc2e, so returns zero.
*/
void caosVM::v_NET_RAWE() {
	result.setInt(0);
}

/**
 NET: STAT (command) timeonline (variable) usersonline (variable) bytesreceived (variable) bytessent (variable)
 %status stub

 Networking is not supported in openc2e, so sets everything to -1.
*/
void caosVM::c_NET_STAT() {
	VM_PARAM_VARIABLE(bytessent)
	VM_PARAM_VARIABLE(bytesreceived)
	VM_PARAM_VARIABLE(usersonline)
	VM_PARAM_VARIABLE(timeonline)

	timeonline->setInt(-1);
	usersonline->setInt(-1);
	bytesreceived->setInt(-1);
	bytessent->setInt(-1);
}

/**
 NET: UNIK (command) userid (string) result (variable)
 %status stub

 Networking is not supported in openc2e, so sets result to an empty string.
*/
void caosVM::c_NET_UNIK() {
	VM_PARAM_VARIABLE(result)
	VM_PARAM_STRING(userid)

	result->setString("");
}

/**
 NET: WHAT (string)
 %status stub
 
 Networking is not supported in openc2e, so return an empty string.
*/
void caosVM::v_NET_WHAT() {
	result.setString("");
}

/**
 NET: WHOD (command)
 %status stub

 Networking is not supported in openc2e, so does nothing.
*/
void caosVM::c_NET_WHOD() {
}

/**
 NET: WHOF (command) user (string)
 %status stub

 Networking is not supported in openc2e, so does nothing.
*/
void caosVM::c_NET_WHOF() {
	VM_PARAM_STRING(user)
}

/**
 NET: WRIT (command) userid (string) channel (string) messageid (string) param1 (anything) param2 (anything)
 %status stub
 
 Networking is not supported in openc2e, so does nothing.
*/
void caosVM::c_NET_WRIT() {
	VM_PARAM_VALUE(param2)
	VM_PARAM_VALUE(param1)
	VM_PARAM_STRING(messageid)
	VM_PARAM_STRING(channel)
	VM_PARAM_STRING(userid)
}

/* vim: set noet: */
