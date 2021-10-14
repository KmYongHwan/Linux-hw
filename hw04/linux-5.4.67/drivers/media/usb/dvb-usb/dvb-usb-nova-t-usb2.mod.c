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
	{ 0xed022515, "dibusb_read_eeprom_byte" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xac9619b0, "dvb_usb_device_exit" },
	{ 0x169cd143, "dvb_usb_device_init" },
	{ 0x1d7c23e3, "dibusb_pid_filter" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x3c68544b, "dibusb2_0_power_ctrl" },
	{ 0xe74bf2d0, "dibusb_dib3000mc_frontend_attach" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xe0380d7b, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x7ba30ac1, "dibusb_dib3000mc_tuner_attach" },
	{ 0x99e9f2b7, "dibusb2_0_streaming_ctrl" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xa8a10cfa, "dibusb_i2c_algo" },
	{ 0xda65f7d, "dibusb_pid_filter_ctrl" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dvb-usb,dvb-usb-dibusb-mc-common");

MODULE_ALIAS("usb:v2040p9300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9301d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "13B7789F62816C96B9ED8B7");
