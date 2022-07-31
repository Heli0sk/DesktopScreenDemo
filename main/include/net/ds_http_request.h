#ifndef _DS_HTTP_REQUEST_H_
#define _DS_HTTP_REQUEST_H_


typedef enum{
    HTTP_GET_TIME =0,
    HTTP_GET_WEATHER,
    HTTP_GET_FANS,
    HTTP_GET_CITY,
}HTTP_GET_TYPE_E;

typedef struct
{
	HTTP_GET_TYPE_E type;
}HTTP_GET_EVENT_T;

void ds_http_request_init(void);
void http_time_get(void);
void ds_http_set_type(HTTP_GET_TYPE_E type);

#endif

