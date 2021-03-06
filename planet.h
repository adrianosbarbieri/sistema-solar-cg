#pragma once

#include <glm/glm.hpp>
#include "transform.h"
#include "shader.h"
#include "texture.h"
#include "mesh.h"
#include "camera.h"

class Planet
{
private:
    Shader* _shader;   // do not delete
    Texture* _texture; // do no delete
    Mesh* _mesh;
    glm::vec3 _scale;
    glm::vec3 _speed;
    glm::vec3 _center;
    double _rot_speed;
    Transform _trans;

public:
    Planet(Shader* shader, Texture* texture, Mesh* mesh, const glm::vec3& center, const glm::vec3& scale, const glm::vec3& speed, double rot_speed);

    void Update(double counter, Camera& camera);
};