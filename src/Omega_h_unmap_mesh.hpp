#ifndef OMEGA_H_UNMAP_MESH_HPP
#define OMEGA_H_UNMAP_MESH_HPP

#include <Omega_h_remotes.hpp>

namespace Omega_h {

class Mesh;

void unmap_tags(
    Mesh* old_mesh, Mesh* new_mesh, Int ent_dim, LOs new_ents2old_ents);
void unmap_down(Mesh* old_mesh, Mesh* new_mesh, Int ent_dim,
    LOs new_ents2old_ents, LOs old_lows2new_lows);
Remotes unmap_owners(
    Mesh* old_mesh, Int ent_dim, LOs new_ents2old_ents, LOs old_ents2new_ents);
void unmap_owners(Mesh* old_mesh, Mesh* new_mesh, Int ent_dim,
    LOs new_ents2old_ents, LOs old_ents2new_ents);
void unmap_mesh(Mesh* old_mesh, Mesh* new_mesh, LOs new_ents2old_ents[]);

}  // end namespace Omega_h

#endif