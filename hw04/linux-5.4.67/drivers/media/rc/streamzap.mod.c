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
	{ 0xe93af497, "rc_free_device" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x4d7cadaa, "usb_string" },
	{ 0x1e1c22e8, "rc_register_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe381324, "rc_allocate_device" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f226906, "ir_raw_event_store" },
	{ 0x1907fe72, "ir_raw_event_handle" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6346cf09, "ir_raw_event_store_with_filter" },
	{ 0x37a0cba, "kfree" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xb3ade458, "rc_unregister_device" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v0E9Cp0000d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8E2231E8F18E96630E20FB9");
