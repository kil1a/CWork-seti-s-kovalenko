#pragma once
#ifndef PING_H
#define PING_H

#include <string>

namespace Ping
{
	/* Return values
	----------------
	1 Successful
	2 Failure
	3 Other, e.g. invalid.  */
	enum {
		Successful = 1,
		Failure = 2,
		Other
	};

	unsigned Ping(const std::string& ip);
	unsigned Ping(const std::string& ip, const unsigned& timeout);

	// Must be Close()d before program exits.
	void Close();
}

#endif
