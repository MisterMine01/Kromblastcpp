#ifndef KB_LIB_CLASS_H
#define KB_LIB_CLASS_H

#include "kb_lib_kromblast.hpp"
#include "kb_lib_core.hpp"

/**
 * @brief Namespace of the kromblast library
 * @class KromLib Class of a kromblast library (interface)
 */
namespace KromblastCore
{

    namespace Class
    {
        /**
         * @brief Class of a kromblast library (interface)
         * @property name Name of the library
         * @property version Version of the library
         * @property functions Functions of the library
         * @property functions_nb Number of functions of the library
         */
        class KromLib
        {
        public:
            virtual void set_kromblast(void *kromblast) = 0;
            virtual void load_functions() = 0;
        };

        /**
         * @brief define entry point of a kromblast library
         */
        typedef KromLib *(*kromblast_lib_get_class_t)(void);
    }
}

#endif