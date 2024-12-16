#include <iostream>

using namespace std;

int main() {
    int chiSoCu, chiSoMoi;
    double soDienTieuThu, thanhTien;

    cout << "Nhap chi so cu: ";
    cin >> chiSoCu;

    cout << "Nhap chi so moi: ";
    cin >> chiSoMoi;

    // Tính số điện tiêu thụ
    soDienTieuThu = chiSoMoi - chiSoCu;

    // Tính tiền điện dựa trên bảng giá
    if (soDienTieuThu >= 0) {
        if (soDienTieuThu <= 50) {
            thanhTien = soDienTieuThu * 10000;
        } else if (soDienTieuThu <= 100) {
            thanhTien = 50 * 10000 + (soDienTieuThu - 50) * 15000;
        } else if (soDienTieuThu <= 150) {
            thanhTien = 50 * 10000 + 50 * 15000 + (soDienTieuThu - 100) * 20000;
        } else if (soDienTieuThu <= 200) {
            thanhTien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDienTieuThu - 150) * 25000;
        } else {
            thanhTien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDienTieuThu - 200) * 30000;
        }

        cout << "So tien dien phai tra la: " << thanhTien << " dong." << endl;
    } else {
        cout << "So dien tieu thu khong hop le. Vui long kiem tra lai." << endl;
    }

    return 0;
}