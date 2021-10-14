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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x375aff77, "__vmbus_driver_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x99f33a7c, "split_page" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x29361773, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8c52967d, "vmbus_recvpacket" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37ea659f, "add_memory" },
	{ 0x638a9653, "memory_add_physaddr_to_nid" },
	{ 0x17994d70, "memhp_auto_online" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1aeb4822, "__online_page_free" },
	{ 0x15af7fd9, "__online_page_increment_counters" },
	{ 0xdeb7354c, "__online_page_set_limits" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbba70f96, "vmbus_open" },
	{ 0xa770832, "register_memory_notifier" },
	{ 0x58f00ad5, "set_online_page_callback" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x5ecdac6f, "vmbus_sendpacket" },
	{ 0x26520970, "vm_memory_committed" },
	{ 0x785a93b4, "si_mem_available" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37a0cba, "kfree" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf7e8696, "restore_online_page_callback" },
	{ 0x26e298e0, "unregister_memory_notifier" },
	{ 0x1689a306, "vmbus_close" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9e6b7219, "bpf_trace_run6" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus");

MODULE_ALIAS("vmbus:dc7450528589e2468057a307dc18a502");

MODULE_INFO(srcversion, "FA7942D983CAE996298F4FC");
