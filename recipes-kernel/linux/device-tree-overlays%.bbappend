FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " \
               ${@bb.utils.contains('DISTRO_FEATURES', 'torizon-mixins-custom-lvds-timing', 'file://0001-verdin-imx8mp-lvds-Use-custom-LVDS-pixel-clock-rates.patch;striplevel=2', '', d)} \
"