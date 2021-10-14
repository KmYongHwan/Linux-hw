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
	{ 0xe7750f8, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x53b954a2, "up_read" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x754d539c, "strlen" },
	{ 0xadfd6f08, "proc_create_single_data" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa26d9b4f, "workqueue_congested" },
	{ 0x476b801f, "pagevec_lookup_range" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xad6ba40e, "radix_tree_tag_get" },
	{ 0x2a186953, "bpf_trace_run3" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb22e16d5, "radix_tree_maybe_preload" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xf47b3d97, "proc_mkdir" },
	{ 0x2f89cc53, "bpf_trace_run1" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf31b3fd1, "workqueue_set_max_active" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x154a14f5, "bpf_trace_run5" },
	{ 0x6185b747, "radix_tree_gang_lookup_tag" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0xad9901ae, "bit_waitqueue" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0xa02aa74a, "__cond_resched_lock" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x4e20bcf8, "radix_tree_tag_set" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x89434b4b, "radix_tree_tag_clear" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8db3b2c4, "__pagevec_release" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0xaf573c21, "kernel_kobj" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x61520529, "trace_print_symbols_seq" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x78b49955, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3fa55769, "__put_page" },
	{ 0xe914e41e, "strcpy" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0BAA1792736E643B6218E97");
