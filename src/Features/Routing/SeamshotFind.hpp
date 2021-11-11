#pragma once
#include "Command.hpp"
#include "Features/Feature.hpp"
#include "Utils.hpp"
#include "Variable.hpp"

class SeamshotFind : public Feature {
public:
	CGameTrace TracePortalShot(const Vector &start, const Vector &dir, float length);
	SeamshotFind();
};

extern SeamshotFind *seamshotFind;

extern Variable sar_seamshot_finder;
