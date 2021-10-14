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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xef697afc, "gb_gbphy_register_driver" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xff7a02a6, "tty_port_open" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x709bc494, "gb_connection_disable_rx" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x12998a38, "tty_port_put" },
	{ 0x7de887e5, "gb_gbphy_deregister_driver" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0x3f9488a, "tty_port_close" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x23a6d701, "gb_connection_enable_tx" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0x20c2a63a, "tty_insert_flip_string_fixed_flag" },
	{ 0x4f7f5c74, "tty_port_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5dc4578a, "gb_operation_sync_timeout" },
	{ 0x9b0d23cd, "tty_vhangup" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x5c03fd94, "gb_connection_destroy" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x59dec90b, "tty_port_tty_wakeup" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x2345868f, "gb_connection_enable" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x44f500d, "tty_standard_install" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x563a20e5, "gb_connection_create" },
	{ 0x61ea921a, "gb_connection_disable" },
	{ 0x650b92eb, "tty_kref_put" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x20978fb9, "idr_find" },
	{ 0x80561c62, "gb_operation_get_payload_size_max" },
	{ 0x281823c5, "__kfifo_out_peek" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");


MODULE_INFO(srcversion, "6A26A373E475A7017EAEDC9");
