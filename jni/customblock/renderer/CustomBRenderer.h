#pragma once

#include "minecraftpe/client/renderer/block/BlockGraphics.h"

class CustomBRenderer : public BlockGraphics {
public:
	CustomBRenderer();
	
	Block& getBlock() const;
};

