#include <hidapi.h>
#include <windef.h>

struct hid_device_info* hid_proxy_enumerate (unsigned short vendor_id, unsigned short product_id) {
    return hid_enumerate(vendor_id, product_id);
}

wchar_t* hid_proxy_error(hid_device *device) {
    return hid_error(device);
}

int hid_proxy_exit(void) {
    return hid_exit();
}

int hid_proxy_free_enumeration(struct hid_device_info *devs) {
    hid_free_enumeration(devs);
    return 0;
}

int hid_proxy_init(void) {
    return hid_init();
}

hid_device* hid_proxy_open( unsigned short vendor_id, unsigned short product_id, const wchar_t *serial_number) {
    
    return hid_open(vendor_id, product_id, serial_number);;
}

int hid_proxy_close(hid_device* device) {
    hid_close(device);
    return 0;
}


hid_device* hid_proxy_open_path( const char *path) {
    return hid_open_path(path);
}

int hid_proxy_send_feature_report(hid_device *device, const unsigned char *data, size_t length) {
    return hid_send_feature_report(device, data, length);   
}

int hid_proxy_get_feature_report(hid_device *device, const unsigned char *data, size_t length) {
    return hid_get_feature_report(device, data, length);   
}