#
# "main" pseudo-component makefile.
#
# (Uses default behaviour of compiling all source files in directory, adding 'include' to include path.)

COMPONENT_EMBED_FILES := html/favicon.ico
COMPONENT_EMBED_FILES += html/setting.html
COMPONENT_EMBED_TXTFILES := https_pem/server_root_cert.pem
COMPONENT_EMBED_TXTFILES += https_pem/server_root_cert_bilibili.pem