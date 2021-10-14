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

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x6fa4eddc, "dvb_usbv2_reset_resume" },
	{ 0x298d856e, "dvb_usbv2_resume" },
	{ 0x8c603790, "dvb_usbv2_suspend" },
	{ 0x5835c164, "dvb_usbv2_disconnect" },
	{ 0x1195ba8e, "dvb_usbv2_probe" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe193e082, "zd1301_demod_get_dvb_frontend" },
	{ 0x85a38a3d, "zd1301_demod_get_i2c_adapter" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0xf720a60b, "module_put" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dvb_usb_v2,zd1301_demod");

MODULE_ALIAS("usb:v0ACEp13A1d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FC9C08274DBD9680A721546");
