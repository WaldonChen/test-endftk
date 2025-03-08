#include <ENDFtk.hpp>
#include <iostream>

using namespace njoy::ENDFtk;

int main(int argc, char *argv[]) {
  try {
    // 读取 ENDF 文件
    auto material = tree::fromFile(argv[1]);

    const auto &data =
        material.material(9437).front().section(3, 37).parse<3>();

    // 获取能量和截面数据
    const auto &energies = data.x();
    const auto &xs = data.y();

    // 输出
    std::cout << "Energy (eV)\tSigma (barn)" << std::endl;
    for (size_t i = 0; i < energies.size(); ++i) {
      std::cout << energies[i] << "\t" << xs[i] << std::endl;
    }
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
    return 1;
  }
  return 0;
}
