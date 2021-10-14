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
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x6e626fc8, "device_get_next_child_node" },
	{ 0x7e2998e7, "typec_set_pwr_role" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2bfc9651, "typec_unregister_altmode" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1f957d18, "typec_register_port" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x2f89cc53, "bpf_trace_run1" },
	{ 0xda0a9c4c, "typec_unregister_port" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc600c015, "typec_altmode_vdm" },
	{ 0x5f2c6469, "typec_set_data_role" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfeb9db92, "typec_altmode_update_active" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x33fd62de, "typec_set_pwr_opmode" },
	{ 0x9cad8da6, "typec_unregister_partner" },
	{ 0x5d18b044, "typec_partner_register_altmode" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5b960e47, "typec_altmode_get_partner" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0xe5018db0, "typec_port_register_altmode" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x9a00a11c, "typec_register_partner" },
	{ 0x51bd55b5, "completion_done" },
};

MODULE_INFO(depends, "typec");


MODULE_INFO(srcversion, "1B25036FC341390EE4A5D94");
