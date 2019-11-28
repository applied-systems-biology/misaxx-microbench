#include <misaxx/core/module_info.h>
#include <misaxx-microbench/module_info.h>
#include <misaxx/imaging/module_info.h>

misaxx::misa_module_info misaxx_microbench::module_info() {
    misaxx::misa_module_info info;
    info.set_id("misaxx-microbench");
    info.set_version("1.0.0");
    info.set_name("misaxx-microbench");
    info.set_description("");
    
    info.add_dependency(misaxx::module_info());
    info.add_dependency(misaxx::imaging::module_info());
    return info;
}
