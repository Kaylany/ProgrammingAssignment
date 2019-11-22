#include <string>
#include <utility>
#include <vector>
#pragma once


namespace editdist {
    class EditMatrix {
        public:
            EditMatrix(const std::string& s1, const std::string& s2);
            void printMatrix();
            int getEditDist();
            std::pair<std::string, std::string> getAlignment();
            ~EditMatrix();
        private:
            void fillMatrix();
            int getMinimumMove(int row, int col);
            std::vector<std::vector<int> > matrix;
            std::string str1;
            std::string str2;
    };
}