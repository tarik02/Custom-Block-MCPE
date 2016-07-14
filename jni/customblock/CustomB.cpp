#include "CustomB.h"

#include "minecraftpe/world/material/Material.h"

CustomB::CustomB(int blockId) : Block("customBlock", blockId, Material::getMaterial(MaterialType::STONE)){
	
}

