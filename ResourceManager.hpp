#pragma once

#include "Resource.hpp"

class ResourceManager 
{
    public:
    ResourceManager() : r1(new Resource()){
    }

    ~ResourceManager() {
     delete r1;
    }

    ResourceManager (const ResourceManager& rm2)  {
        r1 = rm2.r1;
    }

    ResourceManager& operator=(const ResourceManager& rm2){

         if(this != &rm2){
           delete r1; 
           r1 = rm2.r1;
         }

        return *this;
    }

    double const get() {
         return r1 -> get();
    }

   private:
     
    Resource* r1 = nullptr; 
    //std::unique_ptr<Resource> r1;
};


