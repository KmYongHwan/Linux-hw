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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xe7750f8, "kobject_put" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x35db28d0, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x6c3fee80, "component_unbind_all" },
	{ 0x9f7fec7b, "regmap_exit" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0xcdfd2681, "snd_dma_alloc_pages" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x4c8ea958, "devres_find" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x91535130, "component_bind_all" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x67f4be04, "component_master_del" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2a186953, "bpf_trace_run3" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x7cfd592b, "devres_alloc_node" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x7cec4410, "__regmap_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x8b94c8a7, "pm_runtime_get_if_in_use" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb6f7270a, "device_add" },
	{ 0x80eea0d7, "kobject_add" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x3ceef13f, "component_match_add_typed" },
	{ 0xf720a60b, "module_put" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x12a38747, "usleep_range" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5edd2a6c, "snd_dma_free_pages" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5680b13c, "devres_add" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x75870b9a, "snd_sgbuf_get_chunk_size" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x7c914fde, "kobject_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x84481210, "devres_destroy" },
	{ 0x82351cde, "snd_pcm_add_chmap_ctls" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0xb257330c, "component_master_add_with_match" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x826c3a9c, "regcache_sync" },
	{ 0x67d5a9db, "regcache_cache_only" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "snd-pcm");


MODULE_INFO(srcversion, "C20EDECB74C9216615268F9");
