#ifndef INCOGNITO_ENGINE_FUNCTIONS_HPP
#define INCOGNITO_ENGINE_FUNCTIONS_HPP

#include <iostream>

namespace Incognito {
    struct Function {
        template<typename type>
        static type iClamp(const type &value, const type &min, const type &max) {
            return std::max(min, std::min(value, max));
        }

        template<typename type>
        static type iRandomize(type min, type max) {
            return (type)(rand() % max + min);
        }
    };
}

#endif //INCOGNITO_ENGINE_FUNCTIONS_HPP
