#pragma once

class SceneBase {
public:
	SceneBase() {}
	virtual ~SceneBase() {}

	virtual void Update() = 0;
	virtual void Draw() = 0;
};
