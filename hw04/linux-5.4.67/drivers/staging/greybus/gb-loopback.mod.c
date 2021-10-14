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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xafc394d6, "gb_connection_latency_tag_disable" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x70691c99, "single_open" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xe98f8eb8, "gb_connection_latency_tag_enable" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xa071f2c6, "single_release" },
	{ 0xc4142837, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x911efef1, "device_create_with_groups" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x548bc933, "class_unregister" },
	{ 0x660c0dc5, "gb_operation_request_send" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x5f1ce799, "greybus_register_driver" },
	{ 0xc9ac3e5e, "greybus_deregister_driver" },
	{ 0x5c03fd94, "gb_connection_destroy" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9ce24b36, "gb_operation_request_send_sync_timeout" },
	{ 0x12a38747, "usleep_range" },
	{ 0xed16ecd5, "gb_operation_result" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfd7ccba2, "sysfs_notify" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x2345868f, "gb_connection_enable" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x27065d9e, "gb_operation_response_alloc" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x563a20e5, "gb_connection_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x61ea921a, "gb_connection_disable" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x80561c62, "gb_operation_get_payload_size_max" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x3b6475ec, "gb_operation_put" },
	{ 0x872495cf, "gb_operation_create_flags" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "greybus");


MODULE_INFO(srcversion, "7EE7B96CFB826A1157CE79A");
