namespace {
const char file_array[] = {
    '\x89', '\x50', '\x4e', '\x47',
    '\x0d', '\x0a', '\x1a', '\x0a',
    '\x00', '\x00', '\x00', '\x0d',
    '\x49', '\x48', '\x44', '\x52',
    '\x00', '\x00', '\x00', '\x20',
    '\x00', '\x00', '\x00', '\x20',
    '\x08', '\x06', '\x00', '\x00',
    '\x00', '\x73', '\x7a', '\x7a',
    '\xf4', '\x00', '\x00', '\x00',
    '\x09', '\x70', '\x48', '\x59',
    '\x73', '\x00', '\x00', '\x0b',
    '\x13', '\x00', '\x00', '\x0b',
    '\x13', '\x01', '\x00', '\x9a',
    '\x9c', '\x18', '\x00', '\x00',
    '\x00', '\x01', '\x73', '\x52',
    '\x47', '\x42', '\x00', '\xae',
    '\xce', '\x1c', '\xe9', '\x00',
    '\x00', '\x00', '\x04', '\x67',
    '\x41', '\x4d', '\x41', '\x00',
    '\x00', '\xb1', '\x8f', '\x0b',
    '\xfc', '\x61', '\x05', '\x00',
    '\x00', '\x03', '\xde', '\x49',
    '\x44', '\x41', '\x54', '\x78',
    '\x01', '\xed', '\x57', '\x4b',
    '\x4f', '\x13', '\x51', '\x14',
    '\xbe', '\x33', '\xd3', '\x52',
    '\x9e', '\x02', '\x21', '\xc1',
    '\x40', '\x78', '\x85', '\x62',
    '\xe2', '\xa2', '\x89', '\x0b',
    '\x49', '\x08', '\x0b', '\x63',
    '\x1a', '\xa4', '\x3c', '\x76',
    '\x6c', '\x5c', '\xf9', '\x13',
    '\x5c', '\xa9', '\xd1', '\x8d',
    '\xc1', '\xb0', '\x75', '\xa3',
    '\x2b', '\x12', '\x8d', '\x41', '\x0d', '\xba', '\x70', '\xa1', '\x92', '\xba', '\x40', '\xa4', '\x09', '\x10', '\x71', '\x63', '\x02', '\x4d', '\x4c', '\x03', '\xa4', '\x2d', '\xb6', '\x0d', '\xd4', '\xa4', '\xb4', '\x85', '\xd2', '\x06', '\x4a', '\x5f', '\x33', '\x7e', '\xa7', '\xa1', '\xa6', '\xed', '\x74', '\x3a', '\x7d', '\xb8', '\xd3', '\x2f', '\xb9', '\x39', '\xd3', '\x39', '\xf7', '\x9e', '\xfb', '\xdd', '\xf3', '\xba', '\x53', '\xc6', '\xfe', '\x75', '\x70', '\x4a', '\x0a', '\x8b', '\xc5', '\xd2', '\x96', '\x4a', '\xa5', '\x6e', '\xe2', '\xf1', '\x2a', '\xc7', '\x71', '\x97', '\x21', '\xbb', '\x44', '\x51', '\xbc', '\x80', '\xe7', '\x96', '\x62', '\xeb', '\x24', '\x49', '\x8a', '\x60', '\x8e', '\x1f', '\x8f', '\x5e', '\x48', '\x37', '\xc6', '\x57', '\xac', '\xb3', '\x8c', '\x8d', '\x8d', '\xb9', '\x4a', '\x22', '\x60', '\x36', '\x9b', '\x7b', '\x6a', '\x6b', '\x6b', '\x9f', '\xc3', '\x90', '\x89', '\xf4', '\x35', '\x35', '\x35', '\x52', '\x53', '\x53', '\x53', '\x4a', '\xa7', '\xd3', '\x09', '\x7e', '\xbf', '\x9f', '\x25', '\x12', '\x09', '\xc5', '\xcd', '\x09', '\x58', '\xcb', '\x5a', '\x5a', '\x5a', '\x52', '\xb1', '\x58', '\x8c', '\x3f', '\x39', '\x39', '\x11', '\xe3', '\xf1', '\xb8', '\x70', '\x4e', '\xec', '\x03', '\xc6', '\xdd', '\x89', '\x89', '\x09', '\xb7', '\x22', '\x81', '\xc5', '\xc5', '\xc5', '\x3e', '\x41', '\x10', '\x56', '\x31', '\x7a', '\x01', '\xd6', '\xdd', '\xdd', '\x9d', '\x00', '\x01', '\x6d', '\x46', '\xbf', '\xb5', '\xb5', '\x25', '\xed', '\xef', '\xef', '\x17', '\x25', '\xd0', '\xdc', '\xdc', '\x9c', '\x1c', '\x1a', '\x1a', '\xd2', '\x64', '\x7e', '\x9f', '\x9e', '\x9e', '\x8a', '\x07', '\x07', '\x07', '\x09', '\xb7', '\xdb', '\xad', '\x01', '\x79', '\x1f', '\xbc', '\x71', '\x7d', '\x7c', '\x7c', '\xdc', '\x99', '\xd1', '\xf3', '\x39', '\x6c', '\x38', '\xee', '\x05', '\x4e', '\xd0', '\x33', '\x3c', '\x3c', '\xcc', '\xf4', '\x7a', '\x3d', '\xcb', '\xde', '\x9c', '\x80', '\xdf', '\x29', '\xa6', '\x02', '\xd8', '\xc8', '\xb1', '\x59', '\x5f', '\x5f', '\xcf', '\xf7', '\xf5', '\xf5', '\xe9', '\x40', '\x4a', '\xc0', '\xfa', '\x8b', '\xd0', '\xcf', '\x65', '\xeb', '\xff', '\x4c', '\x5e', '\x5e', '\x5e', '\xee', '\x87', '\x72', '\xa4', '\xbf', '\xbf', '\x5f', '\xaa', '\xab', '\xab', '\x2b', '\x68', '\x1c', '\x27', '\xe0', '\x99', '\x0a', '\x1a', '\x1b', '\x1b', '\xc5', '\x42', '\xef', '\xc9', '\x26', '\x6c', '\xd3', '\xe3', '\xb5', '\xa5', '\xa5', '\x25', '\x83', '\x8c', '\x40', '\x32', '\x99', '\xbc', '\x44', '\x12', '\x2e', '\x14', '\x95', '\x8c', '\xc3', '\x9d', '\x45', '\xdd', '\x4f', '\x68', '\x6b', '\x6b', '\x13', '\x8b', '\xe8', '\xd2', '\x12', '\x21', '\xbe', '\x22', '\x23', '\x00', '\xd4', '\x9f', '\x2b', '\x15', '\x37', '\x41', '\x62', '\xa9', '\x86', '\x20', '\x3f', '\x6c', '\xd9', '\x80', '\x87', '\x25', '\x92', '\xc8', '\x03', '\x51', '\x46', '\x00', '\x4a', '\x3b', '\xc9', '\x48', '\x24', '\xa2', '\x48', '\x00', '\x65', '\xa9', '\x61', '\x55', '\x20', '\x1a', '\x8d', '\x66', '\xf6', '\xfb', '\x25', '\x23', '\xd0', '\xd5', '\xd5', '\xe5', '\xa0', '\xfd', '\x51', '\x3a', '\x12', '\xab', '\x02', '\x28', '\x3b', '\xc5', '\xf5', '\xa1', '\x50', '\x28', '\x2d', '\x11', '\x6e', '\xab', '\x8c', '\x80', '\xc1', '\x60', '\x88', '\xc3', '\x0b', '\xdf', '\x51', '\xeb', '\x8a', '\x1e', '\xe8', '\xe8', '\xe8', '\x48', '\x76', '\x76', '\x76', '\x32', '\x1a', '\xed', '\xed', '\xed', '\xc9', '\xd6', '\xd6', '\x56', '\x89', '\xe7', '\xf9', '\x9c', '\x98', '\x23', '\x4c', '\x4a', '\xcb', '\x59', '\x30', '\x18', '\x94', '\xb0', '\xc7', '\xfa', '\xe4', '\xe4', '\x64', '\x38', '\xf3', '\x2e', '\xc7', '\xa5', '\x08', '\xcd', '\x02', '\x58', '\x8e', '\x20', '\xdb', '\x93', '\x5a', '\xad', '\x56', '\xe6', '\xee', '\x81', '\x81', '\x81', '\xec', '\x77', '\x99', '\x67', '\x8e', '\x72', '\x03', '\xa7', '\xe2', '\xb0', '\x86', '\x72', '\xa0', '\x60', '\xa5', '\x9c', '\x9d', '\x9d', '\xb1', '\xa3', '\xa3', '\x23', '\x01', '\x04', '\xde', '\x66', '\xbf', '\xcf', '\x99', '\x8c', '\x6e', '\xf7', '\x06', '\x13', '\xa2', '\x7b', '\x7b', '\x7b', '\x02', '\x2b', '\x03', '\xd4', '\x25', '\x1b', '\x1a', '\x1a', '\x78', '\xa5', '\xcd', '\x09', '\x81', '\x40', '\x20', '\x41', '\x12', '\x79', '\xf4', '\x59', '\x91', '\x80', '\xd1', '\x68', '\x0c', '\xa1', '\x5d', '\x7e', '\xf1', '\x7a', '\xbd', '\xe4', '\xd6', '\xaa', '\x72', '\x21', '\x1f', '\x2e', '\x97', '\x4b', '\x0b', '\xdb', '\xe6', '\xfc', '\x56', '\x2c', '\x63', '\x8c', '\x30', '\x3c', '\x45', '\xb6', '\x0a', '\x87', '\x87', '\x87', '\x22', '\xfb', '\x4b', '\xa0', '\xd3', '\xc3', '\x26', '\x55', '\xda', '\xcb', '\x7c', '\x9d', '\x8c', '\x00', '\x18', '\xae', '\x42', '\x7c', '\xdb', '\xdd', '\xdd', '\x2d', '\x2b', '\x0c', '\xc5', '\x80', '\x7b', '\x80', '\x84', '\x0b', '\x37', '\xe2', '\x02', '\x53', '\x23', '\x40', '\x00', '\xd3', '\xc7', '\x48', '\x18', '\x06', '\x2f', '\xb0', '\x6a', '\x11', '\x0e', '\x87', '\xe3', '\xb0', '\x43', '\xcd', '\x69', '\xa6', '\x90', '\xbe', '\x20', '\x81', '\xd1', '\xd1', '\xd1', '\x4f', '\x10', '\x36', '\x78', '\xa1', '\xea', '\x3c', '\x70', '\x38', '\x1c', '\x64', '\xc3', '\x8d', '\xd3', '\xbf', '\x66', '\xa5', '\x12', '\xa0', '\x96', '\x89', '\x5c', '\x98', '\x86', '\x17', '\x38', '\xd4', '\xae', '\x6a', '\xfb', '\x55', '\x82', '\xcf', '\xe7', '\x13', '\xb1', '\x5e', '\x07', '\x5b', '\x33', '\x4a', '\x73', '\x14', '\xcb', '\x06', '\xb9', '\xf0', '\x11', '\x59', '\xbb', '\xbe', '\xbd', '\xbd', '\x4d', '\x1f', '\x13', '\x15', '\x25', '\xa4', '\xdd', '\x6e', '\xe7', '\xb1', '\xd6', '\x0d', '\x5b', '\xaf', '\x58', '\xb9', '\x04', '\xd2', '\x4a', '\x9e', '\x7f', '\x88', '\x1b', '\x50', '\x40', '\x12', '\xa9', '\xde', '\x82', '\xf9', '\xf0', '\x78', '\x3c', '\x22', '\x65', '\x3e', '\x70', '\xaf', '\xe8', '\x1e', '\xc5', '\x94', '\x26', '\x93', '\x69', '\x0d', '\x27', '\x98', '\x47', '\x0d', '\xd3', '\x45', '\x52', '\x72', '\x3e', '\xd0', '\xc6', '\x4e', '\xa7', '\x93', '\xda', '\xee', '\x3c', '\xbe', '\x7e', '\xde', '\xb3', '\x4a', '\x09', '\x10', '\xd0', '\xe5', '\xee', '\xa0', '\x7b', '\x05', '\x6d', '\x36', '\x1b', '\x2b', '\x15', '\x3b', '\x3b', '\x3b', '\x31', '\xac', '\x09', '\x60', '\x4c', '\xab', '\xcd', '\x55', '\x25', '\x80', '\xee', '\x18', '\x80', '\x17', '\x6e', '\x53', '\x42', '\xc2', '\x13', '\x49', '\xb5', '\xf9', '\x08', '\x97', '\x88', '\x0b', '\x4d', '\x87', '\xd3', '\x3f', '\xca', '\xef', '\x7a', '\x15', '\x11', '\x20', '\xa0', '\x84', '\xde', '\x41', '\xcc', '\xa2', '\xa4', '\x34', '\xb8', '\xac', '\x14', '\xab', '\x02', '\x57', '\x79', '\x02', '\x73', '\x28', '\x5f', '\xe6', '\x10', '\xbe', '\x67', '\xac', '\x04', '\x94', '\x44', '\x80', '\x70', '\x7c', '\x7c', '\xfc', '\x00', '\xe2', '\x87', '\xd5', '\x6a', '\xe5', '\x90', '\x98', '\xb2', '\x7c', '\xa0', '\xb8', '\x6f', '\x6c', '\x6c', '\x68', '\x28', '\xeb', '\x41', '\xe4', '\x7e', '\x89', '\x66', '\x59', '\x59', '\xd9', '\x4d', '\xff', '\x19', '\x90', '\x13', '\x6b', '\xf8', '\x72', '\xee', '\x1d', '\x1c', '\x1c', '\x14', '\xf1', '\xc5', '\x9b', '\x6e', '\xd7', '\xd8', '\x30', '\xb5', '\xb9', '\xb9', '\xc9', '\x83', '\x84', '\x07', '\x35', '\x6f', '\x2c', '\xc5', '\xf5', '\x15', '\x11', '\x20', '\xd0', '\x7f', '\x07', '\xc4', '\xd7', '\x82', '\xa1', '\xc7', '\x07', '\x8a', '\xa4', '\xd1', '\x68', '\x52', '\xb8', '\x3d', '\x05', '\x6c', '\xfc', '\x13', '\xe3', '\x46', '\x39', '\x9b', '\x57', '\x44', '\x80', '\xb0', '\xb2', '\xb2', '\x52', '\x8b', '\x4f', '\xaf', '\x69', '\xb8', '\xfb', '\x16', '\x7e', '\xd6', '\xa1', '\x5f', '\xcc', '\xc2', '\x0b', '\x4f', '\xa6', '\xa6', '\xa6', '\x42', '\xec', '\x3f', '\xca', '\xc4', '\x6f', '\x73', '\xb3', '\xe0', '\x53', '\x53', '\xc5', '\xa6', '\x37', '\x00', '\x00', '\x00', '\x00', '\x49', '\x45', '\x4e', '\x44', '\xae', '\x42', '\x60', '\x82', 0
};
}

namespace cmrc {
namespace img {
namespace res_chars {

extern const char* const f_2373_icon__32x32_png_begin = file_array;
extern const char* const f_2373_icon__32x32_png_end = file_array + 1097;

} // namespace res_chars
} // namespace img
} // namespace cmrc
