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
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0x66414bc7, "__class_create" },
	{ 0xd66408c1, "roccat_common2_sysfs_read" },
	{ 0xbf7c80cc, "roccat_common2_sysfs_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x2460ecec, "roccat_connect" },
	{ 0xfdc62b46, "roccat_common2_device_init_struct" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e4427c8, "roccat_report_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,hid-roccat-common,hid-roccat");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002DBE");
MODULE_ALIAS("hid:b0003g*v00001E7Dp00002DB4");

MODULE_INFO(srcversion, "2D5B7ACD190F58E77BE1741");
