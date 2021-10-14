#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xcba9c20c, "comedi_usb_auto_unconfig" },
	{ 0xfe395d55, "comedi_usb_driver_unregister" },
	{ 0xb2bf0b80, "comedi_usb_driver_register" },
	{ 0x4aa2cad2, "comedi_dio_update_state" },
	{ 0xc961c821, "comedi_alloc_subdev_readback" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0xbdbe75c6, "range_unipolar2_5" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcfa8251d, "usb_reset_configuration" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0xbad881fe, "comedi_to_usb_dev" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x58529f89, "comedi_readback_insn_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1f54677, "comedi_to_usb_interface" },
	{ 0x992683c5, "comedi_usb_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_usb,comedi");

MODULE_ALIAS("usb:v0867p9812d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9A0976E5076502370D21FFB");
