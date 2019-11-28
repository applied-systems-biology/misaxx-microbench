#include <misaxx-microbench/module.h>
#include <misaxx-microbench/module_info.h>
#include <misaxx/core/runtime/misa_cli.h>

using namespace misaxx;
using namespace misaxx_microbench;

int main(int argc, const char** argv) {
    misa_cli cli {};
    cli.set_module_info(misaxx_microbench::module_info());
    cli.set_root_module<misaxx_microbench::module>("misaxx-microbench");
    return cli.prepare_and_run(argc, argv);
}