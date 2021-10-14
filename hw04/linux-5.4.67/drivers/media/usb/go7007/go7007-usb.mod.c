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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x21339fb5, "go7007_read_addr" },
	{ 0x7d3680ca, "go7007_update_board" },
	{ 0xc946d02b, "i2c_smbus_xfer" },
	{ 0x7afb83f5, "go7007_register_encoder" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5aa7a45c, "go7007_boot_encoder" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc1042edc, "go7007_alloc" },
	{ 0x3b44f354, "go7007_read_interrupt" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0xf5ff194, "go7007_parse_video_stream" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a773753, "go7007_snd_remove" },
	{ 0xf421b648, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x5ad6f028, "v4l2_device_disconnect" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "go7007,videodev");

MODULE_ALIAS("usb:v0EB1p7007d0200dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0202dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0204dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0205dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0208dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0209dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0210dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA102d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA104d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDpDE00d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2250d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0709d0204dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "61A11B0D238644D74B177BD");
