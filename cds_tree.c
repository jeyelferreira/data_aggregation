#include "node_structure/node.h"
#include "node_structure/node.c"
#include "node_structure/parent_list.h"
#include "data_structure/list_pack.c"
#include "data_structure/list_route.c"

#define WHITE 0
#define GRAY 1
#define BLACK 2

void defineColor(){
	int WHITE = 0;
	int GRAY = 1;
	int BLACK = 2;
	
	Package_MSG defColor;
	level++; // a number of hops to the sink
	//d("genRREQ");
	if(defColor.level < level)
        //reply.kind_msg = RREQ;
        //If the color is black and this color is white
		if (defColor.info == BLACK && myColor == WHITE){
			//define as gray and send to the neighbors
			Mypackage.myColor = GRAY;
			send(Package.Mypackage);
		}
		if (defColor.info == GRAY && myColor == WHITE){
			//define Black and send to the neighbor
			Mypackage.myColor = BLACK;
			send(Package.Mypackage);
		}
	}

}
