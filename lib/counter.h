#pragma once

#include "logging.h"

#include <string>

template <typename T>
class Counter
{
public:
    Counter(const std::string& name)
        :
        m_name{ name }
    {
        ++m_n_created;
        ++m_n_alive;
    }

    Counter(const Counter&)
    {
        ++m_n_created;
        ++m_n_alive;
    }

    const std::string& name() const { return m_name; }
    int n_created() const { return m_n_created; }
    int n_alive() const { return m_n_alive; }

protected:
    ~Counter()
    {
        --m_n_alive;
    }

private:
    std::string m_name;
    static inline int m_n_created = 0;
    static inline int m_n_alive = 0;

};

template <typename T>
bool operator<(const Counter<T>& a, const Counter<T>& b)
{
    return a.n_created() < b.n_created();
}