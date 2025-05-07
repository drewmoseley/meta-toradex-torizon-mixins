# OpenEmbedded Layer with optional mixin features for custom Torizon builds

# Layer Dependencies

All standard [Torizon layers](https://developer.toradex.com/torizon/in-depth/build-torizoncore-from-source-with-yocto-projectopenembedded/)

# Torizon Versions

This layer has been tested with the following Torizon versions. Please reach out to Toradex support if you need other versions.
* 7.1.0

# Adding the meta-toradex-torizon-mixins layer to your build

Using the instructions from [here](https://developer.toradex.com/torizon/in-depth/build-torizoncore-from-source-with-yocto-projectopenembedded/), 
check out the entire repo manifest of layers for a Torizon build.

Then create the file `.repo/local_manifests/torizon-mixins.xml` with the following, making sure to specify the Torizon version you need in the `revision` specifier:

```
<?xml version="1.0" encoding="UTF-8" ?>
<manifest>
<remote fetch="https://github.com/" name="github"/>
<project name="drewmoseley/meta-toradex-torizon-mixins" remote="github" revision="6.8.1" path="layers/meta-toradex-torizon-mixins"/>
</manifest>
```

# Supported features

Currently this layer supports:
* custom LVDS timing on platforms that require it for certain displays. See [this link](https://developer.toradex.com/linux-bsp/application-development/multimedia/display-output-resolution-and-timings-linux/#verdin-imx8m-plus-lvds-known-issues) for more details.

# Using the layer

Note that users of the [Containerized Torizon OS
Build](https://developer.toradex.com/torizon/in-depth/build-torizoncore-from-source-with-yocto-projectopenembedded/#containerizedtorizoncorebuild)
will need to do these steps differently as that setup runs everything in one-step. This layer will work in that setup, however it has not yet
been tested. Patches to these docs will be gladly accepted.


After adding the `local_manifest` file as discussed above, do the following:
```
$ repo sync
$ MACHINE=<your-machine-here> source setup-environment build
```

And enable the specific features by adding the following to your `conf/local.conf` file:

## For custom LVDS timing:
```
DISTRO_FEATURES:append = " torizon-mixins-custom-lvds-timing"
```

# Maintainer

drew.moseley@toradex.com

# License

All metadata is MIT licensed unless otherwise stated. Source code and binaries included in tree for individual recipes are under the LICENSE stated in each recipe (.bb file) unless otherwise stated.

This README document is Copyright (C) 2025 Toradex AG.
