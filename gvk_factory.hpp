//
//  gvk_factory.hpp
//  vulkan_macos
//
//  Created by Tiefeng Yu on 9/25/19.
//  Copyright © 2019 Tiefeng Yu. All rights reserved.
//

#ifndef gvk_factory_hpp
#define gvk_factory_hpp
#include "gvulkan_factory.hpp"

//#define GFACTORY gvk_factory::factory()
#define g_factory gvk_factory::factory()

class gvk_factory
{
public:
    
    static gvulkan::gvulkan_factory& factory();
    ~gvk_factory(){}
    
private:
    
    gvk_factory();
};

#endif /* gvk_factory_hpp */







