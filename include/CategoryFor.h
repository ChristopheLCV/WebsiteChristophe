#ifndef CATEGORY_FOR_H
#define CATEGORY_FOR_H

#include <AbstractCategory.h>

namespace Category_Forum
{

    class Category : public AbstractCategory
    {
        public:
            bool isPrivate;
            Category();
            virtual ~Category();

        protected:

        private:
    };
}

#endif // CATEGORY_FOR_H
