#include <misaxx/core/misa_module_interface.h>
#include <misaxx-microbench/module_interface.h>

using namespace misaxx_microbench;

void module_interface::setup() {
    m_input_image.suggest_import_location(filesystem, "in");
    m_output_median.suggest_export_location(filesystem, "median_filtered", m_input_image.describe());
    m_output_morphology.suggest_export_location(filesystem, "dilated", m_input_image.describe());
    m_output_fft_ifft.suggest_export_location(filesystem, "fft_ifft", m_input_image.describe());
    m_output_otsu.suggest_export_location(filesystem, "otsu", m_input_image.describe());
    m_output_percentile.suggest_export_location(filesystem, "percentile", m_input_image.describe());
    m_output_canny.suggest_export_location(filesystem, "canny_edges", m_input_image.describe());
    m_output_wiener.suggest_export_location(filesystem, "wiener2", m_input_image.describe());
    m_runtimes.suggest_export_location(filesystem, "runtimes/runtimes.json");
}
