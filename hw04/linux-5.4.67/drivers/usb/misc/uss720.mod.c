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
	{ 0x71a2b8d, "parport_ieee1284_read_byte" },
	{ 0x17650409, "parport_ieee1284_read_nibble" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xd2595bc8, "parport_announce_port" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0xd1b937d4, "parport_register_port" },
	{ 0x6ca935a7, "usb_set_interface" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xba312d7b, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xa1570660, "parport_put_port" },
	{ 0x2604cb8a, "parport_remove_port" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x4d2a941b, "parport_ieee1284_interrupt" },
	{ 0x29361773, "complete" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");

MODULE_ALIAS("usb:v047Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06C6p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0729p1284d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1293p0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "49D5B17D06FB0DA5E3B119D");
