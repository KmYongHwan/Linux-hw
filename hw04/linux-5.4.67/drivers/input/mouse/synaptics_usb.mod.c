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
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xff76d558, "input_register_device" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x5ada0011, "input_event" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v06CBp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0013d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BB542783CE301992229F63F");
