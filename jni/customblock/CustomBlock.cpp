#include "CustomBlock.h"

#include "minecraftpe/world/material/Material.h"

CustomBlock::CustomBlock(int blockId) : Block("customBlock", blockId, Material::getMaterial(MaterialType::STONE)){
	setDestroyTime(1.0F);
	setExplodeable(1.0F);
	setCategory(CreativeItemCategory::BLOCKS);
}

