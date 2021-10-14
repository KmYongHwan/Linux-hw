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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x7c35c47b, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x81188c30, "match_string" },
	{ 0xff7a02a6, "tty_port_open" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0x586024ff, "tty_buffer_request_room" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0x12998a38, "tty_port_put" },
	{ 0xfb578fc5, "memset" },
	{ 0x3f9488a, "tty_port_close" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0x20c2a63a, "tty_insert_flip_string_fixed_flag" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9b0d23cd, "tty_vhangup" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x59dec90b, "tty_port_tty_wakeup" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x44f500d, "tty_standard_install" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x650b92eb, "tty_kref_put" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0x334097dc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1076p8000d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1076p8F00d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1076p9000d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1D74p2300d*dc*dsc*dp*ic02isc02ip*in*");

MODULE_INFO(srcversion, "2974B19F7EF03299495C58E");
