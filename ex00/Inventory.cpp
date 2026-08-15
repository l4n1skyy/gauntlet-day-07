// Inventory.cpp
#include "Inventory.hpp"
#include <algorithm>

void Inventory::add(const std::string &item)
{
	m_items.push_back(item);
}

void Inventory::remove(const std::string &item)
{
	auto it = std::find(m_items.begin(), m_items.end(), item);
	if (it != m_items.end())
		m_items.erase(it);
}

bool Inventory::has(const std::string &item) const
{
	return std::find(m_items.begin(), m_items.end(), item) == m_items.end();
	// return std::find(m_items.begin(), m_items.end(), item) != m_items.end();
}

int Inventory::count() const
{
	return static_cast<int>(m_items.size());
}
