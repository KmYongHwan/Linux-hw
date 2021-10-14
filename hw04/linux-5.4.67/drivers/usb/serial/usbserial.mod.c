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
	{ 0x7c35c47b, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x35db28d0, "bus_register" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf44a972b, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xff7a02a6, "tty_port_open" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0x3f9488a, "tty_port_close" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc8740c5d, "tty_ldisc_deref" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7e0954a8, "usb_unpoison_urb" },
	{ 0x31e0547e, "usb_poison_urb" },
	{ 0x6168380e, "seq_putc" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0x20c2a63a, "tty_insert_flip_string_fixed_flag" },
	{ 0x4f7f5c74, "tty_port_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9b0d23cd, "tty_vhangup" },
	{ 0x242eb9a3, "tty_ldisc_ref" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xb6f7270a, "device_add" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x35e80822, "usb_store_new_id" },
	{ 0xde2222e6, "usb_match_id" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x59dec90b, "tty_port_tty_wakeup" },
	{ 0xf720a60b, "module_put" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8d14b8b, "usb_get_intf" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x9a5ae1ec, "tty_hangup" },
	{ 0xc17e9946, "usb_show_dynids" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x44f500d, "tty_standard_install" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x5405c41d, "usb_match_one_id" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x650b92eb, "tty_kref_put" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xabb03ead, "driver_attach" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x20978fb9, "idr_find" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x90cb6031, "usb_put_intf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD14EE38A11E09A5E7CC930");
