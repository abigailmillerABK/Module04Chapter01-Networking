#pragma once
#include <string>
#include "Buffer.h"

struct Message {
	std::string sender;
	std::string message;
	std::string time;

	Buffer* Serialize(){
		Buffer* newBuffer = new Buffer((size_t)(message.size()+1), (char* )(message.c_str()));
		return newBuffer;
	}

	std::string DeSerialize(Buffer* myBuffer) {
		std::string myString;
		for (size_t i = 0; i < myBuffer->dataSize; i++) {
			if (myBuffer->data[i] != '\0') {
				myString += myBuffer->data[i];
			}
		}
		return myString;
	}
};