FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " \
               ${@bb.utils.contains('DISTRO_FEATURES', 'torizon-mixins-custom-lvds-timing', 'file://0001-clk-imx-pll14xx-Allow-custom-LVDS-pixel-clocks.patch', '', d)} \
"