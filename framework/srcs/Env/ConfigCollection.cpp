#include        "Env/ConfigCollection.hpp"

namespace       Framework
{
    namespace   Env
    {
        ConfigCollection::ConfigCollection(void)
        {

        }

        ConfigCollection::~ConfigCollection(void)
        {
            
        }

        template <typename T>
        ConfigCollection        &add(const std::string &key, const T&d)
        {
            this->data.insert(std::make_pair<std::string, 
                std::variant<int, float, std::string, bool, ConfigCollection &>(key, d));

            return (*this);
        }

        template <typename T>
        const T                 &get(const std::string &key) const
        {
            if (key.find('.') != std::string::end && this->data.find(key) != std::map::end)
            {

            }

            return (std::get<T>(this->data[key]));
        }
    }
}