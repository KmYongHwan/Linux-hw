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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xe541dad7, "freezing_slow_path" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xdd67c5a9, "dma_buf_fd" },
	{ 0xc3a8e159, "media_request_object_bind" },
	{ 0x66ca92dd, "dma_buf_put" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0xf1480ee1, "dma_buf_get" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab11aa3e, "media_request_put" },
	{ 0x38c23917, "v4l_vb2q_enable_media_source" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xed94a3c6, "media_request_object_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xdefe2b8e, "media_request_object_unbind" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x299991a7, "media_request_object_init" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "mc,videodev");


MODULE_INFO(srcversion, "B2AFDFC1700CA4B0463EF3D");
