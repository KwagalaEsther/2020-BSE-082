#ifndef QR_SCANNER_H
#define QR_SCANNER_H

/**
 * @file qr_scanner.h
 * @brief QR Scanner Library for Camera Interaction
 */

/**
 * @class QRScanner
 * @brief A class for scanning QR codes using a camera
 *
 * This class provides functionality to interact with a camera, capture frames,
 * and decode QR codes using the OpenCV and PyZbar libraries.
 */
class QRScanner {
public:
    /**
     * @brief Constructor for QRScanner
     *
     * Initializes the camera for QR code scanning.
     */
    QRScanner();

    /**
     * @brief Destructor for QRScanner
     *
     * Releases the camera resources upon destruction.
     */
    ~QRScanner();

    /**
     * @brief Scan QR codes from the camera
     *
     * Continuously captures frames from the camera, detects QR codes, and
     * prints the decoded data. The scanning process continues until the user
     * presses the 'q' key.
     */
    void scanQRCode();
};

#endif // QR_SCANNER_H
