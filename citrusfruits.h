#ifndef CITRUFRUITS_H
#define CITRUFRUITS_H

#include "citrusfruits.h"

class CitrusFruit{
protected:
float ph;

public:
CitrusFruit(float ph) : ph(ph){}
virtual const char * getName();
virtual float getPh();
};


#endif