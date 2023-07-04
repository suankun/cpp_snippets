#include <iostream>
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

void copyFile(const fs::path& source, const fs::path& destination) {
    std::ifstream sourceFile(source, std::ios::binary);
    std::ofstream destinationFile(destination, std::ios::binary);

    if (sourceFile && destinationFile) {
        destinationFile << sourceFile.rdbuf();
        std::cout << "Copied: " << source << " to " << destination << std::endl;
    } else {
        std::cerr << "Failed to copy: " << source << std::endl;
    }
}

void copyFolder(const fs::path& source, const fs::path& destination) {
    fs::create_directory(destination);

    for (const auto& entry : fs::directory_iterator(source)) {
        const fs::path currentPath = entry.path();
        const fs::path newPath = destination / currentPath.filename();

        if (fs::is_directory(currentPath)) {
            copyFolder(currentPath, newPath);
        } else {
            copyFile(currentPath, newPath);
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <source_folder> <destination_folder>" << std::endl;
        return 1;
    }

    const fs::path currentDirectory = fs::current_path();
    const fs::path sourcePath = currentDirectory / argv[1];
    const fs::path destinationPath = currentDirectory / argv[2];

    if (!fs::exists(sourcePath)) {
        std::cerr << "Source path does not exist: " << sourcePath << std::endl;
        return 1;
    }

    copyFolder(sourcePath, destinationPath);

    std::cout << "Folder copied successfully!" << std::endl;
    return 0;
}
