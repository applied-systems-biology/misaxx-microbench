#include <misaxx/core/misa_module.h>
#include <misaxx-microbench/module.h>
#include <src/misaxx-microbench/algorithms/microbench_task.h>

using namespace misaxx_microbench;

void module::create_blueprints(blueprint_list &t_blueprints, parameter_list &t_parameters) {
    t_blueprints.add(create_blueprint<microbench_task>("microbench"));
}

void module::build(const blueprint_builder &t_builder) {
    t_builder.build<microbench_task>("microbench");
}
