cmake_minimum_required(VERSION 3.11) # Or higher if required
project(misaxx-microbench VERSION 1.0.0 DESCRIPTION "")

find_package(misaxx-core REQUIRED)
find_package(misaxx-imaging REQUIRED)
# Add additional packages if necessary

add_library(misaxx-microbench include/misaxx-microbench/module_interface.h
                include/misaxx-microbench/module.h
                src/misaxx-microbench/module_interface.cpp
                src/misaxx-microbench/module.cpp
                src/misaxx-microbench/module_info.cpp src/misaxx-microbench/algorithms/microbench_task.cpp src/misaxx-microbench/algorithms/microbench_task.h src/misaxx-microbench/attachments/microbench_runtimes.cpp include/misaxx-microbench/attachments/microbench_runtimes.h)

# Add additional link targets if necessary
target_link_libraries(misaxx-microbench misaxx::misaxx-core misaxx::misaxx-imaging)

# MISA++ helper script (automatically included by Core Library)
set(MISAXX_LIBRARY misaxx-microbench)
set(MISAXX_LIBRARY_NAMESPACE misaxx_microbench::)
set(MISAXX_API_NAME misaxx_microbench)
set(MISAXX_API_INCLUDE_PATH misaxx-microbench)
set(MISAXX_API_NAMESPACE misaxx_microbench)
misaxx_with_default_module_info()
misaxx_with_default_api()

# Only if it's a worker module:
misaxx_with_default_executable()
