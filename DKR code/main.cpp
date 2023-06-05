#include "Vectors.h"

int main() {
    // ��������� 4 ����� ����� ������ 

    Vectors v1(2, 3, 4);
    Vectors v2(1, 2, 3);
    Vectors v3(3, 6, 9);
    Vectors v4(-2, 4, -2);

    // ��� ������� �� � ����� "�������� "

    Vectors vectors[] = { v1, v2, v3, v4 };
    // ���������� ������� ������
    int numVectors = sizeof(vectors) / sizeof(vectors[0]);
       
    // �� ��������� ����� ���������� ��������� �� ��������� ������
    for (int i = 0; i < numVectors; i++) {
        for (int j = i + 1; j < numVectors; j++) {
            std::cout << "Checking relation between vector " << i + 1 << " and vector " << j + 1 << ": ";
            vectors[i].checkRelation(vectors[j]);
        }
    }

    return 0;
}