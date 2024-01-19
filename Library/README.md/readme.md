# QR Scanner Library for Python

The QR Scanner Library for Python is a versatile tool for scanning QR codes using a camera. It provides a simple interface for integrating QR code scanning functionality into Python applications.

## Features

- Interacts with a camera to scan QR codes.
- Supports decoding QR code data using the PyZbar library.
- Easy integration into Python applications.

## Dependencies

- OpenCV: [Link to OpenCV](https://opencv.org/)
- PyZbar: [Link to PyZbar](https://github.com/NaturalHistoryMuseum/pyzbar)

## Installation

Ensure you have Python installed. Then, install the required dependencies:

```bash
pip install opencv-python pyzbar

##  Usage
from qr_scanner import QRScanner

if __name__ == "__main__":
    # Create a QRScanner instance
    qr_scanner = QRScanner()

    # Start scanning QR codes from the camera
    qr_scanner.scan_qr_code()
