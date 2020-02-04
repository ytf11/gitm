//
//  gvk_factory.cpp
//  vulkan_macos
//
//  Created by Tiefeng Yu on 9/25/19.
//  Copyright © 2019 Tiefeng Yu. All rights reserved.
//

#include "gvk_factory.hpp"
#include <memory>
#include "gbasic_factory.hpp"

std::unique_ptr<gvulkan::gvulkan_factory> factory_;
gvulkan::gvulkan_factory& gvk_factory::factory()
{
    if(!factory_)
        factory_.reset(new gvulkan::gbasic_factory());
    
    return *factory_;
}

