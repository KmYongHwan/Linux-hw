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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf44a972b, "driver_register" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x70691c99, "single_open" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xe6bbb7f8, "fw_send_request" },
	{ 0xa071f2c6, "single_release" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xff7a02a6, "tty_port_open" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5d16c2c8, "tty_port_hangup" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x68b6685d, "fw_bus_type" },
	{ 0x56d2f393, "tty_register_driver" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x435a1e34, "put_tty_driver" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0x578f349b, "tty_buffer_space_avail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xed4edc3c, "tty_set_operations" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7491954, "__tty_insert_flip_char" },
	{ 0x3f9488a, "tty_port_close" },
	{ 0x3a771e39, "fw_core_add_descriptor" },
	{ 0xc5850110, "printk" },
	{ 0x401f27f0, "tty_port_register_device" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6168380e, "seq_putc" },
	{ 0xa739ddd3, "tty_port_init" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x20c2a63a, "tty_insert_flip_string_fixed_flag" },
	{ 0x4f7f5c74, "tty_port_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd84089eb, "tty_buffer_set_limit" },
	{ 0x9b0d23cd, "tty_vhangup" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x59dec90b, "tty_port_tty_wakeup" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6985da16, "tty_unregister_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7c08cd59, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x59907fdd, "tty_unregister_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x44f500d, "tty_standard_install" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe29776d6, "__tty_alloc_driver" },
	{ 0xc0f21b2, "fw_core_remove_address_handler" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x650b92eb, "tty_kref_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x39b82a06, "tty_flip_buffer_push" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x629027cb, "tty_wakeup" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0xc5703481, "fw_run_transaction" },
	{ 0x4b4db3a8, "fw_send_response" },
	{ 0xbc6094c, "fw_core_remove_descriptor" },
};

MODULE_INFO(depends, "firewire-core");

MODULE_ALIAS("ieee1394:ven*mo*sp00D00D1Ever0000E81C*");

MODULE_INFO(srcversion, "30B967BD0B6902F466B6530");
