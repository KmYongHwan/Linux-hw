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
	{ 0x7fefe3bf, "dvb_usb_generic_write" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xac9619b0, "dvb_usb_device_exit" },
	{ 0x169cd143, "dvb_usb_device_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9ca01f8e, "rc_keydown" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc89f7c05, "rc_keyup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xe0380d7b, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xcba30473, "rc_repeat" },
};

MODULE_INFO(depends, "dvb-usb,rc-core");

MODULE_ALIAS("usb:v14AAp0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0222d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp022Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp022Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0225d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18F3p0220d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8ECD7BFE6FA038667960B1A");
