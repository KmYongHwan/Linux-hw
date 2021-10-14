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
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xefe54eec, "fw_iso_context_flush_completions" },
	{ 0x5021f15e, "bpf_trace_run7" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x323ad9a7, "snd_pcm_hw_constraint_msbits" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb384607f, "snd_pcm_stop_xrun" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1e9102db, "fw_iso_context_start" },
	{ 0xd81df618, "fw_iso_context_queue_flush" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd04056fd, "fw_iso_resource_manage" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0x86468d44, "fw_rcode_string" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x4b0f2817, "fw_iso_buffer_destroy" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdbb8a7c7, "fw_iso_context_queue" },
	{ 0x41e59f4, "snd_pcm_hw_rule_add" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0x7c08cd59, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0xf3c267e, "fw_iso_context_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc0f21b2, "fw_core_remove_address_handler" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x89792eb7, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x605adfe9, "snd_pcm_hw_constraint_minmax" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x160c4cd0, "snd_rawmidi_transmit" },
	{ 0xbbdd0efc, "fw_iso_buffer_init" },
	{ 0xabdb3c17, "snd_rawmidi_receive" },
	{ 0xc5703481, "fw_run_transaction" },
	{ 0xcfb4a296, "trace_print_array_seq" },
	{ 0x6273ae20, "fw_iso_context_destroy" },
};

MODULE_INFO(depends, "firewire-core,snd-pcm,snd-rawmidi");


MODULE_INFO(srcversion, "1F5B8B5AE99989909090720");
