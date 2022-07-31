#pragma once
#include <vector>
#include "Manager.h"

class Enemy;
class EnemyManager final : public Manager<EnemyManager>
{
public:
	EnemyManager() = default;
	~EnemyManager() = default;
	EnemyManager(const EnemyManager&) = delete;
	EnemyManager& operator=(const EnemyManager&) = delete;
	EnemyManager(EnemyManager&&) = delete;
	EnemyManager& operator=(EnemyManager&&) = delete;

	void Add(Enemy* enemy);
	void Draw() const;
	void Update(float elapsedSec);
	void Cleanup();
private:
	std::vector<Enemy*> m_pEnemies;
};

