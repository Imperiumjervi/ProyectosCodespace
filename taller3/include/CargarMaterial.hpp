#pragma once
#include "Material.hpp"
#include <string>
#include <vector>

class CargadorMateriales {
public:
  static std::vector<Material *> cargarLibros(const std::string &ruta);
  static std::vector<Material *> cargarDVDs(const std::string &ruta);
  static std::vector<Material *> cargarRevistas(const std::string &ruta);
};
