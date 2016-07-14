#include "CustomBRenderer.h"

CustomBRenderer::CustomBRenderer() : BlockGraphics("dirt"){
	
}

Block& CustomBRenderer::getBlock() const {
	return *Block::mCustomBlock;
}

