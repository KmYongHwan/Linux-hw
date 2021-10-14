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
	{ 0x14a03fca, "usb_serial_deregister_drivers" },
	{ 0x1c7d5054, "usb_serial_register_drivers" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xa6210394, "parport_del_port" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x2604cb8a, "parport_remove_port" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x29361773, "complete" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x59dec90b, "tty_port_tty_wakeup" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd2595bc8, "parport_announce_port" },
	{ 0xd1b937d4, "parport_register_port" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x13f99d62, "usb_clear_halt" },
	{ 0x4dd981f, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0x20c2a63a, "tty_insert_flip_string_fixed_flag" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport,usbserial");

MODULE_ALIAS("usb:v9710p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7715d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E94532CC873F70A8C695373");
