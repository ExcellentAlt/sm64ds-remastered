#include "src/game/envfx_snow.h"

const GeoLayout mario_cap_Cap_Switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, mario_cap_Cap_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, mario_cap_Cap_mesh_layer_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout mario_cap_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 75),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ASM(10, geo_update_layer_transparency),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, mario_cap_Cap_mesh_layer_1),
						GEO_DISPLAY_LIST(LAYER_ALPHA, mario_cap_Cap_mesh_layer_4),
					GEO_CLOSE_NODE(),
					GEO_BRANCH(1, mario_cap_Cap_Switch_opt1),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
