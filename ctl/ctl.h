#ifndef CTLIB_CTL_H
#define CTLIB_CTL_H
/*******************************************************************************
* -Academic Honesty-
* Plagarism: The unauthorized use or close imitation of the language and 
* thoughts of another author and the representation of them as one's own 
* original work, as by not crediting the author. 
* (Encyclopedia Britannica, 2008.)
*
* You are free to use the code according to the license below, but, please
* do not commit acts of academic dishonesty. We strongly encourage and request 
* that for any [academic] use of this source code one should cite one the 
* following works:
* 
* \cite{hatcher, z-ct-10}
* 
* See ct.bib for the corresponding bibtex entries. 
* !!! DO NOT CITE THE USER MANUAL !!!
*******************************************************************************
* Copyright (C) Ryan H. Lewis 2014 <me@ryanlewis.net>
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with this program in a file entitled COPYING; if not, write to the 
* Free Software Foundation, Inc., 
* 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*******************************************************************************
*******************************************************************************
* NOTES
* This is a convienence catch all header. Using it probably increases compile time.
*
*******************************************************************************/
//CTL
//Cells

//Utilities and Hash
#include <ctl/hash/hash.h>
#include <ctl/io/io.h>
#include <ctl/utility/timer.h>

//Abstract Simplex
#include <ctl/abstract_simplex/abstract_simplex.h>
#include <ctl/abstract_simplex/simplex_boundary.h>

//Abstract Cube 
//TODO

//Product Cell
#include <ctl/product_cell/product_boundary.h>
#include <ctl/product_cell/product_cell.h>
#include <ctl/product_cell/product_cell_less.h>

//Coefficients
//Finite Fields
#include <ctl/finite_field/finite_field.h>

//Chain Complex
#include <ctl/chain_complex/chain_complex.h>
#include <ctl/chain_complex/complex_boundary.h>

//Weight Data
#include <ctl/weight_data/weight_data.h>
#include <ctl/weight_data/weight_functor.h>


//Term 
#include <ctl/term/term.h>
#include <ctl/term/term_less.h>
#include <ctl/term/term_tags.h>

//Chain
#include <ctl/chain/chain.h>
#include <ctl/chain/chain_add.h>

//Barcodes
#include <ctl/barcodes/barcodes.h>

//Filtration
#include <ctl/filtration/filtration_boundary.h>
#include <ctl/filtration/filtration.h>
#include <ctl/filtration/less.h>

//Graphs & metrics
#include <ctl/points/points.h>
#include <ctl/metric/metric.h>
#include <ctl/nbhd_graph/all_pairs.h>
#include <ctl/nbhd_graph/epsilon_search.h>
#include <ctl/nbhd_graph/nbhd_graph.h>

//Facilities for extracting the one_skeleton
#include <ctl/one_skeleton/complex_to_graph.h>
#include <ctl/one_skeleton/graph_to_metis.h>
#include <ctl/one_skeleton/one_skeleton.h>

//Distributed
#include <ctl/distributed/build_blowup_complex/build_blowup_complex.h>
#include <ctl/distributed/covers/cover_data.h>
#include <ctl/distributed/io/read_complex.h>
#include <ctl/distributed/persistence/blowup_persistence.h>
#include <ctl/distributed/persistence/initialize_cascade_boundaries.h>
#include <ctl/distributed/persistence/persistence.h>
#include <ctl/distributed/persistence/sparse_matrix_algorithms.h>
#include <ctl/distributed/relative_simplex_boundary/relative_simplex_boundary.h>
#include <ctl/distributed/utility/timer.h>

//Parallel library (multithreaded)
#include <ctl/parallel/build_blowup_complex/build_blowup_complex.h>
#include <ctl/parallel/chain_complex/chain_complex.h>
#include <ctl/parallel/filtration/filtration.h>
#include <ctl/parallel/homology/homology.h>
#include <ctl/parallel/homology/persistence.h>
#include <ctl/parallel/partition_covers/cover_data.h>
#include <ctl/parallel/partition_covers/cover_helper.h>
#include <ctl/parallel/partition_covers/covers.h>
#include <ctl/parallel/partition_covers/cover_stats.h>
#include <ctl/parallel/partition_covers/cover_tests.h>
#include <ctl/parallel/partition_covers/graph_partition.h>
#include <ctl/parallel/utility/timer.h>

//Persistence 
#include <ctl/persistence/compute_barcodes.h>
#include <ctl/persistence/compute_betti.h>
#include <ctl/persistence/iterator_property_map.h>
#include <ctl/persistence/offset_maps.h>
#include <ctl/persistence/persistence_data.h>
#include <ctl/persistence/persistence.h>
//Not implemented
#include <ctl/zigzag/persistence.h>

#endif //CTLIB_CTL_H
