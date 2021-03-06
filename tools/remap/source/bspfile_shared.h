#pragma once

/*
	Stores things supported bsp versions share

	If it starts with "bsp" it gets saved in a .bsp
	If it starts with "ent" it gets saved in a .ent
	The rest are just helpers and dont get saved
*/
namespace shared
{
	/* Structs */
	struct vertex_t
	{
		Vector3 xyz;
		Vector3 normal;
		Vector2 st;
	};

	struct mesh_t
	{
		MinMax minmax;
		shaderInfo_t* shaderInfo;
		std::vector<vertex_t> vertices;
		std::vector<uint16_t> triangles;
	};

	/* Vectors */
	inline std::vector<mesh_t> meshes;
	/* Functions */
	void EmitMeshes( const entity_t &e );
}