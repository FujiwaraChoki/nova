#include <string>

namespace WordToPDF
{
    // Convert a Word document to PDF
    bool convert(const std::string &wordFile, const std::string &pdfFile)
    {
        const std::string linux_command = std::string("libreoffice --headless --convert-to pdf --outdir ") + pdfFile + " " + wordFile;
        const std::string windows_command = std::string("soffice --headless --convert-to pdf --outdir ") + pdfFile + " " + wordFile;

        #ifdef _WIN32
            return system(windows_command.c_str()) == 0;
        #else
            return system(linux_command.c_str()) == 0;
        #endif
    }
}