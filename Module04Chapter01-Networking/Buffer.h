#pragma once

struct Buffer {
	size_t dataSize;
	char* data;

	Buffer(size_t dataSize, char* data) {
		this->dataSize = dataSize;
		this->data = data;
	}
	
};