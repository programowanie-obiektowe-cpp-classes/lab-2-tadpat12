#pragma once

#include "Resource.hpp"

class ResourceManager 
{
    public:
    ResourceManager() : r1(){
    };
    ~ResourceManager() = default;
    ResourceManager (const ResourceManager& rm2) : r1{rm2.r1} {
    }
    ResourceManager& operator=(const ResourceManager& rm2){
        if(this != &rm2){
            r1 = rm2.r1;
        }
        return *this;
    }
    double const get()  {
        return  r1.get();
    }
    Resource r1;
};


