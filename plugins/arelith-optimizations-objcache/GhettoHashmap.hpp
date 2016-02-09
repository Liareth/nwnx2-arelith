#ifndef GHETTO_HASHMAP_HPP_
#define GHETTO_HASHMAP_HPP_

#include <algorithm>
#include <array>
#include <vector>

template <typename Key, typename Value, size_t BUCKET_SIZE>
class GhettoHashmap
{
public:
    GhettoHashmap();
    Value Find(const Key id);
    void Set(const Key id, Value obj);
    void Remove(const Key id);

private:
    struct CacheData
    {
        Key m_key;
        Value m_value;
    };

    std::array<std::vector<CacheData>, BUCKET_SIZE> m_map;
};

template <typename Key, typename Value, size_t BUCKET_SIZE>
GhettoHashmap<Key, Value, BUCKET_SIZE>::GhettoHashmap()
{
    for (size_t i = 0; i < BUCKET_SIZE; ++i)
    {
        m_map[i].reserve(8);
    }
}

template <typename Key, typename Value, size_t BUCKET_SIZE>
Value GhettoHashmap<Key, Value, BUCKET_SIZE>::Find(const Key id)
{
    for (auto& elem : m_map[id % BUCKET_SIZE])
    {
        if (elem.m_key == id)
        {
            return elem.m_value;
        }
    }

    return nullptr;
}

template <typename Key, typename Value, size_t BUCKET_SIZE>
void GhettoHashmap<Key, Value, BUCKET_SIZE>::Set(const Key id, Value obj)
{
    auto& bucket = m_map[id % BUCKET_SIZE];

    for (auto& elem : bucket)
    {
        if (elem.m_key == id)
        {
            elem.m_value = obj;
            return;
        }
    }

    bucket.push_back({id, obj});
}

template <typename Key, typename Value, size_t BUCKET_SIZE>
void GhettoHashmap<Key, Value, BUCKET_SIZE>::Remove(const Key id)
{
    auto& bucket = m_map[id % BUCKET_SIZE];
    auto elem = std::find_if(bucket.begin(), bucket.end(), [id](auto& elem) -> bool { return elem.m_key == id; });

    if (elem != bucket.end())
    {
        bucket.erase(elem);
    }
}

#endif // GHETTO_HASHMAP_HPP_