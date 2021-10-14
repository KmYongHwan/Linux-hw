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
	{ 0x35db28d0, "bus_register" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf44a972b, "driver_register" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x785dd9f2, "device_register" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0x4616dfc0, "kernfs_find_and_get_ns" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x154a14f5, "bpf_trace_run5" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb6f7270a, "device_add" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x71c2cc64, "kernfs_notify" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x963cf8c8, "get_device" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x78b49955, "bpf_trace_run4" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9410008010B6589756BF330");
