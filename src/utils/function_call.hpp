#ifndef KROMBLAST_UTILS_FUNCTION_CALL_H
#define KROMBLAST_UTILS_FUNCTION_CALL_H

#include "kb_lib_core.hpp"
#include "kb_lib_kromblast.hpp"
#include <iostream>

namespace Kromblast
{
    namespace Utils
    {
        namespace Function
        {
            /**
             * @brief count the number of arguments
             * @param args Arguments
             * @return Return the number of arguments
             */
            int count_args(std::string args);

            /**
             * @brief call a function in the libraries
             * @param function_called Function called
             * @param kromblast_lib List of the libraries
             * @param kromblast_lib_nb Number of libraries
             * @param debug Debug mode
             * @return Return the result of the function
             */
            char *call_function(struct KromblastCore::kromblast_callback_called function_called, KromblastCore::kromblast_callback **kromblast_functions, int kromblast_functions_nb, KromblastCore::KromblastInterface *kromblast);
        }
    }
}

#endif