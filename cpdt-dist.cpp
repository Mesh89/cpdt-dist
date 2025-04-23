#include <cstdlib>
#include <iostream>
#include <cassert>
#include <ctime>

#include "nex_parse.h"
#include "cpdt-dist-bin.h"
#include "cpdt-dist.h"

#define NDEBUG

using namespace std;

int main(int argc, char* argv[]) {

	tree* tree1 = parse_nex(argv[1]);
    tree* tree2 = parse_nex(argv[2]);
    
    unsigned long long result = 0;

	if (tree1->is_binary() && tree2->is_binary()) {
        result = cpdt_dist_bin::triplet_distance(tree1, tree2);
    } else {
        result = cpdt_dist::triplet_distance(tree1, tree2);
    }

    cout << "Triplet distance: " << result << endl;
}
