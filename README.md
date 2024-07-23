# add-nbo 
## Assignment

32 bit 숫자가 파일에 4바이트의 크기로 저장되어 있다(network byte order).

2개의 파일로부터 숫자를 읽어 들여 그 합을 출력하는 프로그램을 작성하라.

## 세부사항

- [Byte Order 설명](https://gitlab.com/gilgil/sns/-/wikis/byte-order/byte-order)
- [Report Add NBO](https://gitlab.com/gilgil/sns/-/wikis/byte-order/report-add-nbo)

## 프로그램 작성 예시

```python
import struct

def read_nbo_file(file_path):
    with open(file_path, 'rb') as file:
        data = file.read(4)
        number = struct.unpack('!I', data)[0]
        return number

def main(file1, file2):
    num1 = read_nbo_file(file1)
    num2 = read_nbo_file(file2)
    print(f"Sum: {num1 + num2}")

if __name__ == "__main__":
    import sys
    if len(sys.argv) != 3:
        print("Usage: python script.py <file1> <file2>")
        sys.exit(1)
    main(sys.argv[1], sys.argv[2])
