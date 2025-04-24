FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " \
               "${@bb.utils.contains('DISTRO_FEATURES', 'torizon-mixins-custom-lvds-timing', 'file://enable-custom-lvds-timing.patch', '', d)} \
"