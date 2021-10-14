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
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x1907fe72, "ir_raw_event_handle" },
	{ 0x6346cf09, "ir_raw_event_store_with_filter" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xe93af497, "rc_free_device" },
	{ 0x1e1c22e8, "rc_register_device" },
	{ 0xe381324, "rc_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb3ade458, "rc_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v03EBp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp21FEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FE4C99840D8AF5CD3B9BC46");
