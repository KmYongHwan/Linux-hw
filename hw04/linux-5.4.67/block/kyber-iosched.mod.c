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
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0xa934005f, "blk_mq_debugfs_rq_show" },
	{ 0xbf00550, "elv_unregister" },
	{ 0x700d56db, "elv_register" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x579674c, "blk_mq_bio_list_merge" },
	{ 0xfacc2b32, "blk_mq_sched_request_inserted" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7b4c9ba9, "sbitmap_queue_min_shallow_depth" },
	{ 0x2fb72e9b, "sbitmap_init_node" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xa5421d41, "blk_stat_enable_accounting" },
	{ 0xe7750f8, "kobject_put" },
	{ 0x9ae4191f, "sbitmap_queue_init_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc60854c8, "kmem_cache_alloc_node_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xac20aca, "elevator_alloc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd9d5d879, "sbitmap_queue_resize" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x40b43bd0, "sbitmap_add_wait_queue" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0x57b64911, "blk_mq_run_hw_queue" },
	{ 0x3c212744, "sbitmap_del_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0x42230915, "sbitmap_any_bit_set" },
	{ 0x9feed7ce, "timer_reduce" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x57a111c0, "sbitmap_queue_show" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xc4142837, "seq_printf" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0x2a186953, "bpf_trace_run3" },
	{ 0x5021f15e, "bpf_trace_run7" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0x5792f848, "strlcpy" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A79EAAE58BF0FA1C91124D2");
