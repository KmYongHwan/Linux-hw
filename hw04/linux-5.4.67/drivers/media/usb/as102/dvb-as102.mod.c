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
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0xa1bb3cd0, "usb_deregister_dev" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0xfb578fc5, "memset" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x11089ac7, "_ctype" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x81b2f3c5, "usb_register_dev" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9b4eab8b, "usb_find_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xede283d, "release_firmware" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xb3927325, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("usb:v1BA6p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0246d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p002Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B89p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2137p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "55CDD519AC3555F93DB5E23");
