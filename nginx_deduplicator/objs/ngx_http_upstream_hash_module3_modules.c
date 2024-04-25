
#include <ngx_config.h>
#include <ngx_core.h>

extern ngx_module_t  ngx_http_upstream_hash_module3;

ngx_module_t *ngx_modules[] = {
    &ngx_http_upstream_hash_module3,
    NULL
};

char *ngx_module_names[] = {
    "ngx_http_upstream_hash_module3",
    NULL
};

char *ngx_module_order[] = {
    NULL
};

