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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xac9619b0, "dvb_usb_device_exit" },
	{ 0x169cd143, "dvb_usb_device_init" },
	{ 0x1d7c23e3, "dibusb_pid_filter" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ca01f8e, "rc_keydown" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xe74bf2d0, "dibusb_dib3000mc_frontend_attach" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x7ba30ac1, "dibusb_dib3000mc_tuner_attach" },
	{ 0x99e9f2b7, "dibusb2_0_streaming_ctrl" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xa8a10cfa, "dibusb_i2c_algo" },
	{ 0xda65f7d, "dibusb_pid_filter_ctrl" },
	{ 0xcba30473, "rc_repeat" },
};

MODULE_INFO(depends, "dvb-usb,dvb-usb-dibusb-common,rc-core,dvb-usb-dibusb-mc-common");

MODULE_ALIAS("usb:v07CApA800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA801d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "54A2F7D7D130AD44D1C8A41");
