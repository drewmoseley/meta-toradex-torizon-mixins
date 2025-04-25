FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " \
               ${@bb.utils.contains('DISTRO_FEATURES', 'torizon-mixins-custom-lvds-timing', 'file://0001-clk-imx8mp-Setup-a-custom-LVDS-pixel-clock.patch', '', d)} \
               ${@bb.utils.contains('DISTRO_FEATURES', 'torizon-mixins-custom-lvds-timing', 'file://0002-clk-imx8mp-Add-multiple-commented-custom-LVDS-clocks.patch', '', d)} \
"
