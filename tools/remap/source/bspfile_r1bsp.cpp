/* -------------------------------------------------------------------------------

   My feeble attempt at generating a r1 ( Titanfall1 ) .bsp file.

   A lot of this is temporary and will be altered heavily with new information.
   If you know how to c++ better than me feel free to contribute or call me words
   in discord. :)

   - Fifty#8113, also known as Fifteen, Sixteen, Seventeen, Eigtheen and FORTY

   ------------------------------------------------------------------------------- */



   /* dependencies */
#include "remap.h"
#include "bspfile_abstract.h"
#include <ctime>


/* constants */
#define R1_LUMP_ENTITIES							0x00
#define R1_LUMP_PLANES								0x01
#define R1_LUMP_TEXTURE_DATA						0x02
#define R1_LUMP_VERTICES							0x03
#define R1_LUMP_MODELS								0x0E
#define R1_LUMP_ENTITY_PARTITIONS					0x18
#define R1_LUMP_PHYSICS_COLLIDE						0x1D
#define R1_LUMP_VERTEX_NORMALS						0x1E
#define R1_LUMP_GAME_LUMP							0x23
#define R1_LUMP_LEAF_WATER_DATA						0x24
#define R1_LUMP_PAKFILE								0x28
#define R1_LUMP_CUBEMAPS							0x2A
#define R1_LUMP_TEXTURE_DATA_STRING_DATA			0x2B
#define R1_LUMP_TEXTURE_DATA_STRING_TABLE			0x2C
#define R1_LUMP_WORLD_LIGHTS						0x36
#define R1_LUMP_PHYSICS_LEVEL						0x3E
#define R1_LUMP_TRICOLL_TRIS						0x42
#define R1_LUMP_TRICOLL_NODES						0x44
#define R1_LUMP_TRICOLL_HEADERS						0x45
#define R1_LUMP_PHYSICS_TRIANGLES					0x46
#define R1_LUMP_VERTEX_UNLIT						0x47
#define R1_LUMP_VERTEX_LIT_FLAT						0x48
#define R1_LUMP_VERTEX_LIT_BUMP						0x49
#define R1_LUMP_VERTEX_UNLIT_TS						0x4A
#define R1_LUMP_VERTEX_BLINN_PHONG					0x4B
#define R1_LUMP_VERTEX_RESERVED_5					0x4C
#define R1_LUMP_VERTEX_RESERVED_6					0x4D
#define R1_LUMP_VERTEX_RESERVED_7					0x4E
#define R1_LUMP_MESH_INDICES						0x4F
#define R1_LUMP_MESHES								0x50
#define R1_LUMP_MESH_BOUNDS							0x51
#define R1_LUMP_MATERIAL_SORT						0x52
#define R1_LUMP_LIGHTMAP_HEADERS					0x53
#define R1_LUMP_CM_GRID								0x55
#define R1_LUMP_CM_GRID_CELLS						0x56
#define R1_LUMP_CM_GRID_SETS						0x57
#define R1_LUMP_CM_GEO_SET_BOUNDS					0x58
#define R1_LUMP_CM_PRIMITIVES						0x59
#define R1_LUMP_CM_PRIMITIVE_BOUNDS					0x5A
#define R1_LUMP_CM_UNIQUE_CONTENTS					0x5B
#define R1_LUMP_CM_BRUSHES							0x5C
#define R1_LUMP_CM_BRUSH_SIDE_PLANE_OFFSETS			0x5D
#define R1_LUMP_CM_BRUSH_SIDE_PROPS					0x5E
#define R1_LUMP_CM_BRUSH_TEX_VECS					0x5F
#define R1_LUMP_TRICOLL_BEVEL_STARTS				0x60
#define R1_LUMP_TRICOLL_BEVEL_INDICES				0x61
#define R1_LUMP_LIGHTMAP_DATA_SKY					0x62
#define R1_LUMP_CSM_AABB_NODES						0x63
#define R1_LUMP_CSM_OBJ_REFERENCES					0x64
#define R1_LUMP_LIGHTPROBES							0x65
#define R1_LUMP_STATIC_PROP_LIGHTPROBE_INDICES		0x66
#define R1_LUMP_LIGHTPROBE_TREE						0x67
#define R1_LUMP_LIGHTPROBE_REFERENCES				0x68
#define R1_LUMP_LIGHTMAP_DATA_REAL_TIME_LIGHTS		0x69
#define R1_LUMP_CELL_BSP_NODES						0x6A
#define R1_LUMP_CELLS								0x6B
#define R1_LUMP_PORTALS								0x6C
#define R1_LUMP_PORTAL_VERTICES						0x6D
#define R1_LUMP_PORTAL_EDGES						0x6E
#define R1_LUMP_PORTAL_VERTEX_EDGES					0x6F
#define R1_LUMP_PORTAL_VERTEX_REFERENCES			0x70
#define R1_LUMP_PORTAL_EDGE_REGERENCES				0x71
#define R1_LUMP_PORTAL_EDGE_INTERSECT_AT_EDGE		0x72
#define R1_LUMP_PORTAL_EDGE_INTERSECT_AT_VERTEX		0x73
#define R1_LUMP_PORTAL_EDGE_INTERSECT_HEADER		0x74
#define R1_LUMP_OCCLUSION_MESH_VERTICES				0x75
#define R1_LUMP_OCCLUSION_MESH_INDICES				0x76
#define R1_LUMP_CELL_AABB_NODES						0x77
#define R1_LUMP_OBJ_REFERENCES						0x78
#define R1_LUMP_OBJ_REFERENCE_BOUNDS				0x79
#define R1_LUMP_LEVEL_INFO							0x7B
#define R1_LUMP_SHADOW_MESH_OPAQUE_VERTICES			0x7C
#define R1_LUMP_SHADOW_MESH_ALPHA_VERTICES			0x7D
#define R1_LUMP_SHADOW_MESH_INDICES					0x7E
#define R1_LUMP_SHADOW_MESHES						0x7F


/*
   LoadR2BSPFile()
   loads a r1 bsp file
 */
void LoadR1BSPFile(const char* filename)
{

}


/*
   WriteR2BSPFile()
   writes a r1 bsp file
 */
void WriteR1BSPFile(const char* filename)
{
}

void CompileR1BSPFile()
{

}